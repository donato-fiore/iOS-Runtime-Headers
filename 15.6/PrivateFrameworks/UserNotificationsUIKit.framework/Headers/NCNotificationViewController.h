// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONVIEWCONTROLLER_H
#define NCNOTIFICATIONVIEWCONTROLLER_H

@class UIViewController, NSHashTable, UIView<PLContentSizeManaging>, UIView<PLPlatter><NCNotificationStaticContentAccepting><PLContentSizeCategoryAdjusting>, UIView, UIPanGestureRecognizer, UIViewController<NCNotificationCustomContent>, NSString, NCNotificationRequest;
@protocol NCNotificationRequestInlineActionsProviderDelegate, NCNotificationCustomContentDelegate, PLExpandedPlatterPresentationControllerDelegate, PLContentSizeCategoryAdjusting, UIViewControllerTransitionCoordinator, NCAuxiliaryOptionsProviding, NCNotificationCustomContentProviding, NCNotificationViewControllerDelegate, NCNotificationStaticContentProviding;


#import "NCNotificationViewControllerView.h"
#import "NCNotificationViewController.h"

@interface NCNotificationViewController : UIViewController <NCNotificationRequestInlineActionsProviderDelegate, NCNotificationCustomContentDelegate, PLExpandedPlatterPresentationControllerDelegate, PLContentSizeCategoryAdjusting>

 {
    BOOL _didQueryCanPan;
    BOOL _canPan;
    NSInteger _ncTransitionAnimationState;
    NSHashTable *_observers;
    UIView<PLContentSizeManaging> *_contentSizeManagingView;
    UIView<PLPlatter><NCNotificationStaticContentAccepting><PLContentSizeCategoryAdjusting> *_lookView;
}


@property (retain, nonatomic, getter=_activeTransitionCoordinator, setter=_setActiveTransitionCoordinator:) NSObject<UIViewControllerTransitionCoordinator> *activeTransitionCoordinator; // ivar: _activeTransitionCoordinator
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (weak, nonatomic) UIView *associatedView; // ivar: _associatedView
@property (retain, nonatomic) NSObject<NCAuxiliaryOptionsProviding> *auxiliaryOptionsContentProvider; // ivar: _auxiliaryOptionsContentProvider
@property (readonly, nonatomic, getter=isCoalescedNotificationBundle) BOOL coalescedNotificationBundle;
@property (readonly, nonatomic, getter=hasCommittedToPresentingCustomContentProvidingViewController) BOOL committedToPresentingCustomContentProvidingViewController;
@property (nonatomic, getter=isContentReplacedWithSnapshot) BOOL contentReplacedWithSnapshot; // ivar: _contentReplacedWithSnapshot
@property (weak, nonatomic) UIPanGestureRecognizer *customContentHomeAffordanceGestureRecognizer; // ivar: _customContentHomeAffordanceGestureRecognizer
@property (nonatomic, getter=isCustomContentHomeAffordanceVisible) BOOL customContentHomeAffordanceVisible; // ivar: _customContentHomeAffordanceVisible
@property (retain, nonatomic) NSObject<NCNotificationCustomContentProviding> *customContentProvider; // ivar: _customContentProvider
@property (retain, nonatomic, getter=_customContentProvidingViewController, setter=_setCustomContentProvidingViewController:) UIViewController<NCNotificationCustomContent> *customContentProvidingViewController; // ivar: _customContentProvidingViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasShadow; // ivar: _hasShadow
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInteractionEnabled) BOOL interactionEnabled; // ivar: _interactionEnabled
@property (readonly, nonatomic, getter=isLookStyleLongLook) BOOL lookStyleLongLook;
@property (retain, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (readonly, nonatomic, getter=isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController) BOOL notPresentingOrHasCommittedToDismissingCustomContentProvidingViewController;
@property (nonatomic, getter=isNotificationContentViewHidden) BOOL notificationContentViewHidden; // ivar: _notificationContentViewHidden
@property (retain, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _notificationRequest
@property (readonly, nonatomic, getter=_notificationViewControllerView) NCNotificationViewControllerView *notificationViewControllerView;
@property (copy, nonatomic, getter=_pendingPresentationTransitionDidEndBlock, setter=_setPendingPresentationTransitionDidEndBlock:) id *pendingPresentationTransitionDidEndBlock; // ivar: _pendingPresentationTransitionDidEndBlock
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic, getter=_presentedLongLookViewController) NCNotificationViewController *presentedLongLookViewController;
@property (readonly, nonatomic, getter=_isPresentingCustomContentProvidingViewController) BOOL presentingCustomContentProvidingViewController;
@property (nonatomic) BOOL revealAdditionalContentOnPresentation; // ivar: _revealAdditionalContentOnPresentation
@property (readonly, nonatomic, getter=isShortLook) BOOL shortLook;
@property (nonatomic, getter=_shouldRestorePresentingShortLookOnDismiss, setter=_setShouldRestorePresentingShortLookOnDismiss:) BOOL shouldRestorePresentingShortLookOnDismiss; // ivar: _shouldRestorePresentingShortLookOnDismiss
@property (retain, nonatomic) NSObject<NCNotificationStaticContentProviding> *staticContentProvider; // ivar: _staticContentProvider
@property (readonly) Class superclass;


+(CGFloat)prominentIconDimension;
-(BOOL)_canPan;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)didForwardNotificationRequestToCustomContent:(id)arg0 ;
-(BOOL)didReceiveNotificationRequest:(id)arg0 ;
-(BOOL)dismissPresentedViewControllerAnimated:(BOOL)arg0 ;
-(BOOL)isContentExtensionVisible:(id)arg0 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)restoreInputViews;
-(BOOL)shouldAutorotate;
-(BOOL)shouldCommitToExpandedPlatterPresentationWithFeedback;
-(BOOL)shouldRestorePresentingShortLookOnDismiss;
-(NSInteger)_dateFormatStyle;
-(NSInteger)materialRecipe;
-(NSInteger)ncTransitionAnimationState;
-(NSUInteger)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
-(NSUInteger)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_contentSizeManagingView;
-(id)_initWithNotificationRequest:(id)arg0 revealingAdditionalContentOnPresentation:(BOOL)arg1 ;
-(id)_lookView;
-(id)_lookViewIfLoaded;
-(id)_lookViewLoadingIfNecessary:(BOOL)arg0 ;
-(id)containerViewForExpandedContent;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)expandedPlatterPresentationController:(id)arg0 keyboardAssertionForGestureWindow:(id)arg1 ;
-(id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg0 ;
-(id)initWithNotificationRequest:(id)arg0 ;
-(id)initWithNotificationRequest:(id)arg0 revealingAdditionalContentOnPresentation:(BOOL)arg1 ;
-(id)notificationUsageTrackingState;
-(id)presentedExpandedPlatterViewController;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg0 ;
-(struct CGSize )_preferredCustomContentSizeForSize:(struct CGSize )arg0 parentContentContainerBounds:(struct CGRect )arg1 ;
-(struct CGSize )preferredContentSizeWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
-(void)_askDelegateToExecuteAction:(id)arg0 withParameters:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissPresentedViewControllerAnimated:(BOOL)arg0 ;
-(void)_executeCancelAction:(BOOL)arg0 ;
-(void)_executeClearAction:(BOOL)arg0 ;
-(void)_executeCloseAction:(BOOL)arg0 ;
-(void)_executeDefaultAction:(BOOL)arg0 ;
-(void)_executeNilAction:(BOOL)arg0 ;
-(void)_loadLookView;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)_setPreferredCustomContentSize:(struct CGSize )arg0 ;
-(void)_setupAuxiliaryOptionsContentProvider;
-(void)_setupCustomContentProvider;
-(void)_setupStaticContentProvider;
-(void)_updateLookView:(id)arg0 withTitleFromProvidedStaticContent:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(void)_updateWithProvidedAuxiliaryOptionsContent;
-(void)_updateWithProvidedCustomContent;
-(void)_updateWithProvidedStaticContent;
-(void)addObserver:(id)arg0 ;
-(void)contentProvider:(id)arg0 performAction:(id)arg1 animated:(BOOL)arg2 ;
-(void)customContent:(id)arg0 forwardAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3 ;
-(void)customContent:(id)arg0 requestPermissionToExecuteAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3 completionHandler:(id)arg4 ;
-(void)customContentRequestsDefaultAction:(id)arg0 ;
-(void)customContentRequestsDismiss:(id)arg0 ;
-(void)dismissViewControllerWithTransition:(int)arg0 completion:(id)arg1 ;
-(void)expandAndPlayMedia;
-(void)invalidateContentProviders;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentLongLookAnimated:(BOOL)arg0 trigger:(NSInteger)arg1 completion:(id)arg2 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)preserveInputViews;
-(void)reloadContentProviders;
-(void)removeObserver:(id)arg0 ;
-(void)setHasUpdatedContent;
-(void)setNCTransitionAnimationState:(NSInteger)arg0 ;
-(void)updateContent;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif