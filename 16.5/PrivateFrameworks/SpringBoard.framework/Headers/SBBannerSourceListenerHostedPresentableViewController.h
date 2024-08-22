// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBANNERSOURCELISTENERHOSTEDPRESENTABLEVIEWCONTROLLER_H
#define SBBANNERSOURCELISTENERHOSTEDPRESENTABLEVIEWCONTROLLER_H

@class BNBannerSourceListenerHostedPresentableViewController, NSMutableArray, NSMutableDictionary, NSString, UIViewController;
@protocol SBBarSwipeAffordanceObserver, SBBannerManagerPresentable, SBUIPresentableLocalHomeGestureParticipant, SBButtonEventsHandler, SBUIPresentableHomeGestureContext, BNPresentableContext;


#import "SBBannerGestureRecognizerPriorityAssertion.h"
#import "SBBarSwipeAffordanceView.h"

@interface SBBannerSourceListenerHostedPresentableViewController : BNBannerSourceListenerHostedPresentableViewController <SBBarSwipeAffordanceObserver, SBBannerManagerPresentable, SBUIPresentableLocalHomeGestureParticipant, SBButtonEventsHandler>

 {
    NSMutableArray *_wantsHomeAffordanceActionsAwaitingResponse;
    SBBannerGestureRecognizerPriorityAssertion *_gestureRecognizerPriorityAssertion;
    NSMutableDictionary *_buttonEventsToActions;
    SBBarSwipeAffordanceView *_barSwipeAffordanceView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBUIPresentableHomeGestureContext> *homeGestureContext; // ivar: _homeGestureContext
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)shouldDismissForReason:(id)arg0 outReason:(*id)arg1 ;
-(void)_invalidateAllButtonEventActions;
-(void)dealloc;
-(void)homeGestureOwnershipDidChange:(BOOL)arg0 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg0 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;


@end


#endif