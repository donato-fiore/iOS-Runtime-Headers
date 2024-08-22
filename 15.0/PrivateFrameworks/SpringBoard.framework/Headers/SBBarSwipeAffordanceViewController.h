// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBARSWIPEAFFORDANCEVIEWCONTROLLER_H
#define SBBARSWIPEAFFORDANCEVIEWCONTROLLER_H

@class UIViewController, NSString, SBFZStackParticipant;
@protocol SBBarSwipeAffordanceControlling, SBBarSwipeAffordanceControllingDelegate, SBHomeGrabberPointerClickDelegate;


#import "SBBarSwipeAffordanceController.h"
#import "SBBarSwipeAffordanceView.h"
#import "SBHomeGestureParticipant.h"

@interface SBBarSwipeAffordanceViewController : UIViewController <SBBarSwipeAffordanceControlling>

 {
    SBBarSwipeAffordanceController *_barSwipeAffordanceController;
}


@property (nonatomic) NSInteger activationPolicyForParticipantsBelow;
@property (readonly, nonatomic) SBBarSwipeAffordanceView *barSwipeAffordanceView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBBarSwipeAffordanceControllingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (weak, nonatomic) NSObject<SBHomeGrabberPointerClickDelegate> *pointerClickDelegate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressAffordance;
@property (retain, nonatomic) SBBarSwipeAffordanceView *view;
@property (nonatomic) BOOL wantsToBeActiveAffordance;
@property (readonly, nonatomic) SBFZStackParticipant *zStackParticipant;


-(BOOL)_canShowWhileLocked;
-(id)initWithHomeGestureParticipantIdentifier:(NSInteger)arg0 ;
-(id)initWithHomeGestureParticipantIdentifier:(NSInteger)arg0 zStackParticipantIdentifier:(NSInteger)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)loadView;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif