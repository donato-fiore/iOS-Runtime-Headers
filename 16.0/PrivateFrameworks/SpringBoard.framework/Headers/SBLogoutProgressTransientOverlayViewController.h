// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOGOUTPROGRESSTRANSIENTOVERLAYVIEWCONTROLLER_H
#define SBLOGOUTPROGRESSTRANSIENTOVERLAYVIEWCONTROLLER_H

@class SBMultiUserDefaults, NSString, UMUser;
@protocol CSExternalBehaviorProviding, SBLogoutProgressDataSource, SBLogoutProgressDelegate;


#import "SBTransientOverlayViewController.h"
#import "SBLogoutDebugBlockingViewController.h"
#import "SBPlatformController.h"
#import "SBLogoutProgressView.h"
#import "SBTransientOverlayWallpaperEffectView.h"

@interface SBLogoutProgressTransientOverlayViewController : SBTransientOverlayViewController <CSExternalBehaviorProviding>

 {
    SBLogoutDebugBlockingViewController *_debugTasksViewController;
    SBMultiUserDefaults *_multiUserDefaults;
    SBPlatformController *_platformController;
    SBLogoutProgressView *_progressView;
    SBTransientOverlayWallpaperEffectView *_wallpaperEffectView;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (weak, nonatomic) NSObject<SBLogoutProgressDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBLogoutProgressDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UMUser *user; // ivar: _user


-(BOOL)_canShowWhileLocked;
-(BOOL)_supportsDebugUI;
-(BOOL)isContentOpaque;
-(NSInteger)idleTimerDuration;
-(NSInteger)idleTimerMode;
-(NSInteger)idleWarnMode;
-(NSInteger)preferredStatusBarStyle;
-(id)_legibilitySettings;
-(id)initWithUserAccount:(id)arg0 ;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(void)_updateData;
-(void)_updateDebugTasksViewControllerSizeFromSize:(struct CGSize )arg0 ;
-(void)_updateLegibility;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
-(void)prepareForRestart;
-(void)refreshData;
-(void)setContainerOrientation:(NSInteger)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif