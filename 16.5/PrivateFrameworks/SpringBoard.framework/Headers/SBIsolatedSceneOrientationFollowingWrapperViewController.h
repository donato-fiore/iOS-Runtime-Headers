// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBISOLATEDSCENEORIENTATIONFOLLOWINGWRAPPERVIEWCONTROLLER_H
#define SBISOLATEDSCENEORIENTATIONFOLLOWINGWRAPPERVIEWCONTROLLER_H

@class UIViewController, SBFTraitsParticipant, SBFTraitsOrientationResolutionPolicyInfo, NSString, UIView<SBDeviceApplicationSceneOverlayView>;
@protocol SBFTraitsParticipantDelegate, SBDeviceApplicationSceneOverlayViewController, BSInvalidatable, SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate;


#import "SBDeviceApplicationSceneHandle.h"
#import "SBWindowScene.h"
#import "SBIsolatedSceneOrientationFollowingWindow.h"
#import "SBWindowSelfHostWrapper.h"
#import "SBIsolatedSceneOrientationFollowingContainerView.h"

@interface SBIsolatedSceneOrientationFollowingWrapperViewController : UIViewController <SBFTraitsParticipantDelegate, SBDeviceApplicationSceneOverlayViewController>

 {
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIViewController *_contentViewController;
    SBWindowScene *_windowScene;
    SBIsolatedSceneOrientationFollowingWindow *_appOverlayWindow;
    SBFTraitsParticipant *_traitsParticipant;
    id<BSInvalidatable> *_traitsResolutionPolicySpecifier;
    SBFTraitsOrientationResolutionPolicyInfo *_traitsOrientationResolutionPolicy;
    BOOL _initialOrientationHasBeenApplied;
    SBWindowSelfHostWrapper *_appOverlayHostWrapper;
    SBIsolatedSceneOrientationFollowingContainerView *_containerView;
    NSInteger _sceneInterfaceOrientationMode;
    BOOL _rendersWhileLocked;
}


@property (readonly, nonatomic) NSInteger currentInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate> *orientationDelegate; // ivar: _orientationDelegate
@property (readonly, nonatomic) UIView<SBDeviceApplicationSceneOverlayView> *overlayView;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)_isSceneStatusBarHidden;
-(NSInteger)_hostOrientation;
-(id)initWithContentViewController:(id)arg0 sceneHandle:(id)arg1 windowScene:(id)arg2 orientationDelegate:(id)arg3 rendersWhileLocked:(BOOL)arg4 ;
-(id)participantAssociatedWindows:(id)arg0 ;
-(struct CGRect )_boundsForOverlayRootView;
-(void)_containerViewDidSetBounds:(struct CGRect )arg0 ;
-(void)_containerViewDidSetCenter:(struct CGPoint )arg0 ;
-(void)_containerViewDidSetHostOrientation:(NSInteger)arg0 ;
-(void)_updateOrientationResolutionPolicyWithContainerTraitsParticipant:(id)arg0 ;
-(void)containerDidUpdateTraitsParticipant:(id)arg0 ;
-(void)dealloc;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)loadView;
-(void)updatePreferencesForParticipant:(id)arg0 updater:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif