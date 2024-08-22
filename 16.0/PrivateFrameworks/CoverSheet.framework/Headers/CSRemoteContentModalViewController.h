// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREMOTECONTENTMODALVIEWCONTROLLER_H
#define CSREMOTECONTENTMODALVIEWCONTROLLER_H

@class UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, UIView, SBSRemoteContentDefinition, SBSRemoteContentPreferences, NSArray, NSString, UIImpactFeedbackGenerator;
@protocol CSDismissableModalViewControllerDelegate, CSRemoteModalContentViewTouchDelegate, PTSettingsKeyObserver, CSRemoteContentViewControllerProtocol, SBFAuthenticationStatusProvider, CSRemoteContentViewControllerDelegate;


#import "CSModalViewControllerBase.h"
#import "CSContentComponent.h"
#import "CSDateViewComponent.h"
#import "CSRemoteContentHostViewController.h"
#import "CSLockScreenSettings.h"
#import "CSProudLockComponent.h"
#import "CSQuickActionsComponent.h"
#import "CSDashBoardRemoteContentSettings.h"

@interface CSRemoteContentModalViewController : CSModalViewControllerBase <CSDismissableModalViewControllerDelegate, CSRemoteModalContentViewTouchDelegate, PTSettingsKeyObserver, CSRemoteContentViewControllerProtocol>

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
    SBSRemoteContentPreferences *_remoteContentPreferences;
    NSArray *_components;
}


@property (readonly, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (retain, nonatomic) CSContentComponent *content; // ivar: _content
@property (retain, nonatomic) CSDateViewComponent *dateTimeComponent; // ivar: _dateTimeComponent
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSRemoteContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CSRemoteContentHostViewController *hostViewController; // ivar: _hostViewController
@property (retain, nonatomic) CSLockScreenSettings *lockScreenSettings; // ivar: _lockScreenSettings
@property (retain, nonatomic) CSProudLockComponent *proudLockComponent; // ivar: _proudLockComponent
@property (retain, nonatomic) CSQuickActionsComponent *quickActionsComponent; // ivar: _quickActionsComponent
@property (retain, nonatomic) CSDashBoardRemoteContentSettings *remoteContentSettings; // ivar: _remoteContentSettings
@property (retain, nonatomic) UIImpactFeedbackGenerator *rubberBandFeedbackGenerator; // ivar: _rubberBandFeedbackGenerator
@property (readonly) Class superclass;


-(BOOL)_dismissesOnTap;
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
-(NSInteger)preferredNotificationListMode;
-(id)_newDisplayLayoutElement;
-(id)initWithContentDefinition:(id)arg0 preferences:(id)arg1 hostViewController:(id)arg2 authenticationStatusProvider:(id)arg3 ;
-(void)_addChildHostViewController:(id)arg0 ;
-(void)_createProperties;
-(void)_dismissForced:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_removeChildHostViewController;
-(void)_setCornerRounded:(BOOL)arg0 ;
-(void)_setUserHasInteractedSinceWake:(BOOL)arg0 ;
-(void)_updateContentAlpha:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)_updateContentScale:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)_updateDisplayLayoutElementForActivation:(id)arg0 ;
-(void)_updateForPropertyChanged;
-(void)_updateGrabberViewVisibility;
-(void)_updateSecondaryActionButtonText;
-(void)addGrabberView:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveTouch;
-(void)dismissForHomeButton;
-(void)handleBottomEdgeGestureBegan:(id)arg0 ;
-(void)handleBottomEdgeGestureChanged:(id)arg0 ;
-(void)handleBottomEdgeGestureEnded:(id)arg0 ;
-(void)handleSecondaryActionForView:(id)arg0 ;
-(void)loadView;
-(void)remoteDidChangeStyle;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif