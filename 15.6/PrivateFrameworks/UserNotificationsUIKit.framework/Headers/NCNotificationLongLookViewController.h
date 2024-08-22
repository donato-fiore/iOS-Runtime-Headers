// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONLONGLOOKVIEWCONTROLLER_H
#define NCNOTIFICATIONLONGLOOKVIEWCONTROLLER_H

@class NSString, UIView;
@protocol NCNotificationLongLookViewDelegate, PLExpandedPlatterPresentationControllerDelegate, NCLongLookDefaultPresentationControllerDelegate, NCNotificationCustomContentDelegate, PLClickPresentationInteractionPresentable, PLExpandedPlatterDismissing, PLExpandedPlatterPresentationViewDelegate, PLExpandedPlatterPresentable, PLClickPresentationInteractionPresenting;


#import "NCNotificationViewController.h"
#import "NCLongLookTransitioningDelegate.h"

@interface NCNotificationLongLookViewController : NCNotificationViewController <NCNotificationLongLookViewDelegate, PLExpandedPlatterPresentationControllerDelegate, NCLongLookDefaultPresentationControllerDelegate, NCNotificationCustomContentDelegate, PLClickPresentationInteractionPresentable, PLExpandedPlatterDismissing, PLExpandedPlatterPresentationViewDelegate, PLExpandedPlatterPresentable>

 {
    NCLongLookTransitioningDelegate *_longLookTransitionDelegate;
    id *_cancelTouchesToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PLExpandedPlatterDismissing> *dismisser; // ivar: _dismisser
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, getter=_notificationTapBlock, setter=_setNotificationTapBlock:) id *notificationTapBlock; // ivar: _notificationTapBlock
@property (weak, nonatomic) NSObject<PLClickPresentationInteractionPresenting> *presenter; // ivar: _presenter
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *viewForTouchContinuation;
@property (readonly, nonatomic) UIView *viewWithContent;


+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldPadScrollViewContentSizeHeight;
-(BOOL)associatedViewControllerDidAppearForExpandedPlatterView:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)expandedPlatterPresentationControllerShouldAllowKeyboardOnAppearance:(id)arg0 ;
-(BOOL)expandedPlatterPresentationControllerShouldProvideBackground:(id)arg0 ;
-(BOOL)isContentExtensionVisible:(id)arg0 ;
-(BOOL)isLookStyleLongLook;
-(BOOL)notificationLongLookView:(id)arg0 tapGestureRecognizerShouldReceiveTouch:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)restoreInputViews;
-(NSInteger)viewControllerTransitionTypeForTransitionDelegate:(id)arg0 ;
-(NSUInteger)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
-(NSUInteger)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
-(NSUInteger)_maximumNumberOfTextLinesForProvidedStaticContentWithDefaultNumber:(NSUInteger)arg0 isPrimary:(BOOL)arg1 isLarge:(BOOL)arg2 ;
-(id)_expandedPlatterPresentationViewLoadingIfNecessary:(BOOL)arg0 ;
-(id)_expandedPlatterPresentationViewScrollView;
-(id)_extensionIdentifier;
-(id)_initWithNotificationRequest:(id)arg0 andPresentingNotificationViewController:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2 ;
-(id)_initWithNotificationRequest:(id)arg0 revealingAdditionalContentOnPresentation:(BOOL)arg1 ;
-(id)_longLookViewIfLoaded;
-(id)_longLookViewLoadingIfNecessary;
-(id)_longLookViewScrollView;
-(id)_presentedLongLookViewController;
-(id)_presentingNotificationViewController;
-(id)_scrollView;
-(id)customBackgroundContainerViewForExpandedPlatterPresentationController:(id)arg0 ;
-(id)expandedPlatterPresentationController:(id)arg0 keyboardAssertionForGestureWindow:(id)arg1 ;
-(id)expandedPlatterViewForPresentationView:(id)arg0 ;
-(id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg0 ;
-(id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg0 ;
-(id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg0 ;
-(struct CGRect )expandedPlatterPresentationController:(id)arg0 frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(struct CGSize )_preferredCustomContentSizeForSize:(struct CGSize )arg0 parentContentContainerBounds:(struct CGRect )arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_dismissPresentedViewControllerAnimated:(BOOL)arg0 ;
-(void)_handleIconButton:(id)arg0 ;
-(void)_handleNotificationTap:(id)arg0 ;
-(void)_loadLookView;
-(void)_notificationViewControllerViewDidLoad;
-(void)_setPreferredCustomContentSize:(struct CGSize )arg0 ;
-(void)_updateLookView:(id)arg0 withTitleFromProvidedStaticContent:(id)arg1 ;
-(void)_updateTitleWithProvidedCustomContent;
-(void)_updateWithProvidedAuxiliaryOptionsContent;
-(void)_updateWithProvidedCustomContent;
-(void)_updateWithProvidedStaticContent;
-(void)contentProviderDismissCustomContent:(id)arg0 animated:(BOOL)arg1 ;
-(void)customContent:(id)arg0 didUpdateUserNotificationActions:(id)arg1 ;
-(void)customContentDidLoadExtension:(id)arg0 ;
-(void)customContentDidUpdateTitle:(id)arg0 ;
-(void)dismissViewControllerWithTransition:(int)arg0 completion:(id)arg1 ;
-(void)expandedPlatterPresentable:(id)arg0 requestsDismissalWithTrigger:(NSInteger)arg1 ;
-(void)loadView;
-(void)notificationLongLookView:(id)arg0 willInteractWithURL:(id)arg1 ;
-(void)playMedia;
-(void)presentLongLookAnimated:(BOOL)arg0 trigger:(NSInteger)arg1 completion:(id)arg2 ;
-(void)preserveInputViews;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg0 ;
-(void)setCustomContentHomeAffordanceVisible:(BOOL)arg0 ;
-(void)setNotificationRequest:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif