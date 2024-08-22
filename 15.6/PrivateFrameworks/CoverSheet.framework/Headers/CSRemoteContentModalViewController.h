// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSREMOTECONTENTMODALVIEWCONTROLLER_H
#define CSREMOTECONTENTMODALVIEWCONTROLLER_H

@class UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, UIView, SBSRemoteContentDefinition, SBSRemoteContentPreferences, NSString, UIImpactFeedbackGenerator;
@protocol CSRemoteContentHostDelegate, CSDismissableModalViewControllerDelegate, CSRemoteModalContentViewTouchDelegate, PTSettingsKeyObserver, SBFAuthenticationStatusProvider, CSRemoteContentModalViewControllerDelegate;


#import "CSModalViewControllerBase.h"
#import "CSRemoteContentHostViewController.h"
#import "CSLockScreenSettings.h"
#import "CSDashBoardRemoteContentSettings.h"
#import "CSComponent.h"

@interface CSRemoteContentModalViewController : CSModalViewControllerBase <CSRemoteContentHostDelegate, CSDismissableModalViewControllerDelegate, CSRemoteModalContentViewTouchDelegate, PTSettingsKeyObserver>

 {
    CGPoint _previousTranslation;
    UIViewFloatAnimatableProperty *_scaleProperty;
    SBFFluidBehaviorSettings *_scaleSettings;
    UIViewFloatAnimatableProperty *_alphaProperty;
    SBFFluidBehaviorSettings *_alphaSettings;
    UIView *_grabberView;
    BOOL _userHasInteractedSinceWake;
    BOOL _dismissing;
    SBSRemoteContentDefinition *_definition;
    CSRemoteContentHostViewController *_contentViewController;
    SBSRemoteContentPreferences *_remoteContentPreferences;
}


@property (readonly, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSRemoteContentModalViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSLockScreenSettings *lockScreenSettings; // ivar: _lockScreenSettings
@property (retain, nonatomic) CSDashBoardRemoteContentSettings *remoteContentSettings; // ivar: _remoteContentSettings
@property (retain, nonatomic) UIImpactFeedbackGenerator *rubberBandFeedbackGenerator; // ivar: _rubberBandFeedbackGenerator
@property (retain, nonatomic) CSComponent *scalableContent; // ivar: _scalableContent
@property (readonly) Class superclass;


-(BOOL)_reducesWhitePoint;
-(BOOL)_shouldCancelInteractiveDismissGesture;
-(BOOL)_supportsLuminanceReductionForCurrentBackgroundStyle;
-(BOOL)_suppressesBottomEdgeContent;
-(BOOL)dismissForDismissType:(NSInteger)arg0 completion:(id)arg1 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)isInUnlockGestureMode;
-(BOOL)shouldCaptureHomeGesture;
-(BOOL)shouldHideHomeAffordance;
-(BOOL)suppressesDismissalForNotification;
-(BOOL)suppressesDismissalGesture;
-(NSInteger)_backgroundStyle;
-(NSInteger)_dateTimeStyle;
-(NSInteger)_homeGestureMode;
-(id)displayLayoutElementIdentifier;
-(id)initWithContentDefinition:(id)arg0 preferences:(id)arg1 authenticationStatusProvider:(id)arg2 ;
-(void)_createProperties;
-(void)_dismissForced:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setCornerRounded:(BOOL)arg0 ;
-(void)_setUserHasInteractedSinceWake:(BOOL)arg0 ;
-(void)_updateContentAlpha:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)_updateContentScale:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)_updateForPropertyChanged;
-(void)_updateGrabberViewVisibility;
-(void)_updateSecondaryActionButtonText;
-(void)activateWithCompletion:(id)arg0 ;
-(void)addGrabberView:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)configureDisplayLayoutElement:(id)arg0 ;
-(void)dealloc;
-(void)didChangeStyle;
-(void)didInvalidate;
-(void)didReceiveTouch;
-(void)dismissForHomeButton;
-(void)handleBottomEdgeGestureBegan:(id)arg0 ;
-(void)handleBottomEdgeGestureChanged:(id)arg0 ;
-(void)handleBottomEdgeGestureEnded:(id)arg0 ;
-(void)handleSecondaryActionForView:(id)arg0 ;
-(void)loadView;
-(void)remoteContentHostViewController:(id)arg0 didTerminateWithError:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif