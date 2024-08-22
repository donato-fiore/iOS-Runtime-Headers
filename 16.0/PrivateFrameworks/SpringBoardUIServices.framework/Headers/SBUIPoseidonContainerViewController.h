// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIPOSEIDONCONTAINERVIEWCONTROLLER_H
#define SBUIPOSEIDONCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString, _UILegibilitySettings;
@protocol SBUIPoseidonIconViewDelegate, SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerDelegate;


#import "SBUIPoseidonIconView.h"

@interface SBUIPoseidonContainerViewController : UIViewController <SBUIPoseidonIconViewDelegate>

 {
    SBUIPoseidonIconView *_testPoseidonIconView;
}


@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (weak, nonatomic) NSObject<SBUIPoseidonContainerViewControllerLockStatusProvider> *authenticationInformationProvider; // ivar: _authenticationInformationProvider
@property (nonatomic, getter=isBioLockout) BOOL bioLockout; // ivar: _bioLockout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBUIPoseidonContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fingerOffSinceWake; // ivar: _fingerOffSinceWake
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) BOOL resignActive; // ivar: _resignActive
@property (nonatomic, getter=isScreenOn) BOOL screenOn; // ivar: _screenOn
@property (readonly) Class superclass;
@property (nonatomic) int unlockSource; // ivar: _unlockSource


-(BOOL)_canShowWhileLocked;
-(BOOL)coachingActive;
-(id)_poseidonIconView;
-(id)_testPoseidonIconView;
-(id)initWithAuthenticationInformationProvider:(id)arg0 ;
-(void)_setCounterTransformForOrientation:(NSInteger)arg0 ;
-(void)_setLocalTransformForOrientation:(NSInteger)arg0 ;
-(void)_updateRotation;
-(void)fillRestToOpenWithDuration:(CGFloat)arg0 ;
-(void)loadView;
-(void)poseidonIconViewCoachingStateDidChange:(id)arg0 ;
-(void)resetRestToOpen;
-(void)setTestPoseidonIconView:(id)arg0 ;
-(void)showCoaching:(BOOL)arg0 ;
-(void)startRestToOpenCoaching:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif