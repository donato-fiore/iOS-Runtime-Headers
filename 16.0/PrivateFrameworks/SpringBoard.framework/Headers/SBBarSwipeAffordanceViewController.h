// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBARSWIPEAFFORDANCEVIEWCONTROLLER_H
#define SBBARSWIPEAFFORDANCEVIEWCONTROLLER_H

@class UIViewController, NSString, SBFZStackParticipant;
@protocol SBBarSwipeAffordanceControlling, SBBarSwipeAffordanceControllingDelegate, SBHomeGrabberPointerClickDelegate;


#import "SBBarSwipeAffordanceController.h"
#import "SBBarSwipeAffordanceView.h"

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
@property (weak, nonatomic) NSObject<SBHomeGrabberPointerClickDelegate> *pointerClickDelegate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressAffordance;
@property (retain, nonatomic) SBBarSwipeAffordanceView *view;
@property (nonatomic) BOOL wantsToBeActiveAffordance;
@property (readonly, nonatomic) SBFZStackParticipant *zStackParticipant;


-(BOOL)_canShowWhileLocked;
-(id)initWithZStackParticipantIdentifier:(NSInteger)arg0 windowScene:(id)arg1 ;
-(void)loadView;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif