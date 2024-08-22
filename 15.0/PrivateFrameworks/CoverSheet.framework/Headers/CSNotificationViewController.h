// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSNOTIFICATIONVIEWCONTROLLER_H
#define CSNOTIFICATIONVIEWCONTROLLER_H

@class NCNotificationShortLookViewController, NSString;
@protocol SBBarSwipeAffordanceObserver, SBUIPresentableLocalHomeGestureParticipant, SBUIPresentableHomeGestureContext;



@interface CSNotificationViewController : NCNotificationShortLookViewController <SBBarSwipeAffordanceObserver, SBUIPresentableLocalHomeGestureParticipant>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBUIPresentableHomeGestureContext> *homeGestureContext; // ivar: _homeGestureContext
@property (readonly) Class superclass;


-(void)expandedPlatter:(id)arg0 willDismissWithReason:(id)arg1 ;
-(void)expandedPlatterDidPresent:(id)arg0 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg0 ;


@end


#endif