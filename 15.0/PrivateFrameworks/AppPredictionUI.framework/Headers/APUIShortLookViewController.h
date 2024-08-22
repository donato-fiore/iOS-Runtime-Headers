// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APUISHORTLOOKVIEWCONTROLLER_H
#define APUISHORTLOOKVIEWCONTROLLER_H

@class UIViewController, APUILongLookViewController<PLClickPresentationInteractionPresentable>, NSUserDefaults, ATXAction, NSString, CRKCardPresentation, PLClickPresentationInteractionManager, UIViewController<CRKCardViewControlling>, INIntent, INInteraction, SFSearchResult, NSUserActivity, UIView;
@protocol APUIIntentHandlingViewControllerDelegate, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate, APUIActionFeedbackDelegate, APUIShortLookViewControllerDelegate;


#import "APUITVIntentHandler.h"
#import "APUIIntentHandlingViewController.h"

@interface APUIShortLookViewController : UIViewController <APUIIntentHandlingViewControllerDelegate, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate>

 {
    APUILongLookViewController<PLClickPresentationInteractionPresentable> *_presentableViewController;
    APUITVIntentHandler *_tvIntentHandler;
    CGFloat _preferredPlatterContentHeight;
    BOOL _acceptPlatterTaps;
    NSInteger _dismissalReason;
    BOOL _actionCompletedSuccessfully;
    BOOL _hasShownLongLook;
    BOOL _wasPresentedImmediately;
    BOOL _representsVoiceShortcut;
    NSUserDefaults *_userDefaults;
}


@property (weak, nonatomic) NSObject<APUIActionFeedbackDelegate> *actionFeedbackDelegate; // ivar: _actionFeedbackDelegate
@property (retain, nonatomic) ATXAction *atxAction; // ivar: _atxAction
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) CRKCardPresentation *cardPresentation; // ivar: _cardPresentation
@property (readonly, nonatomic) NSObject<CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager; // ivar: _clickPresentationInteractionManager
@property (retain, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController; // ivar: _currentCardViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APUIShortLookViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayContext; // ivar: _displayContext
@property (readonly, nonatomic) CGRect finalDismissedFrameOfViewForPreview;
@property (readonly, nonatomic) CGRect finalPresentedFrameOfViewForPreview;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) CGRect initialPresentedFrameOfViewForPreview;
@property (retain, nonatomic) INIntent *intent; // ivar: _intent
@property (retain, nonatomic) APUIIntentHandlingViewController *intentHandlingViewController; // ivar: _intentHandlingViewController
@property (retain, nonatomic) INInteraction *interaction; // ivar: _interaction
@property (retain, nonatomic) SFSearchResult *searchResult; // ivar: _searchResult
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity
@property (readonly, nonatomic) UIView *viewForPreview;


-(BOOL)_canShowWhileLocked;
-(BOOL)_isDoNotDisturbIntent;
-(BOOL)_isLongLookDebugUIEnabled;
-(BOOL)_shouldAcceptPlatterTaps;
-(BOOL)_shouldTellDelegateToClearActionOnDismissal:(NSInteger)arg0 ;
-(BOOL)clickPresentationInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg0 ;
-(BOOL)fetchViewControllerForContentViewInLongLook:(id)arg0 completion:(id)arg1 ;
-(BOOL)longLookPlatterShouldShowUtilityButton:(id)arg0 ;
-(BOOL)presentImmediately:(id)arg0 ;
-(CGFloat)preferredContentHeightForLongLook:(id)arg0 ;
-(NSInteger)_actionTypeForMetrics;
-(id)_cardContentWithIntentResponse:(id)arg0 ;
-(id)_debugStringForNSUA;
-(id)_defaults;
-(id)_titleForLongLookViewController:(id)arg0 ;
-(id)appIconImageForLongLook:(id)arg0 ;
-(id)bundleIdentifierForAppIconInLongLook:(id)arg0 ;
-(id)containerViewForclickPresentationInteractionManager:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)interfaceActionsForLongLook:(id)arg0 ;
-(id)presentedViewControllerForClickPresentationInteractionManager:(id)arg0 ;
-(id)titleForLongLookHeaderInLongLook:(id)arg0 ;
-(void)_dismissLongLookWithReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_handleActionButtonForIntent;
-(void)_resetRepresentedObjectState;
-(void)cardViewControllerBoundsDidChange:(id)arg0 ;
-(void)cardViewControllerDidLoad:(id)arg0 ;
-(void)clickPresentationInteractionManager:(id)arg0 willDismissPresentedContentWithTrigger:(NSInteger)arg1 ;
-(void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg0 ;
-(void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg0 ;
-(void)handOverIntentHandlingToApp;
-(void)intentHandlingViewController:(id)arg0 didComplete:(BOOL)arg1 ;
-(void)intentHandlingViewController:(id)arg0 requiresConfirmationWithResponse:(id)arg1 confirmationActionTitle:(id)arg2 ;
-(void)intentHandlingViewController:(id)arg0 wantsPreferredSize:(struct CGSize )arg1 ;
-(void)intentHandlingViewController:(id)arg0 willContinueInAppForIntent:(id)arg1 completion:(id)arg2 ;
-(void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg0 ;
-(void)longLookPlatterDidReceiveTap:(id)arg0 ;
-(void)longLookPlatterDidTapUtilityButton:(id)arg0 ;
-(void)setView:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif