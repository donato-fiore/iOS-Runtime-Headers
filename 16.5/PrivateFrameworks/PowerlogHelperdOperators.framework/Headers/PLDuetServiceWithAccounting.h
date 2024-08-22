// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUETSERVICEWITHACCOUNTING_H
#define PLDUETSERVICEWITHACCOUNTING_H



#import "PLDuetServiceImpl.h"

@interface PLDuetServiceWithAccounting : PLDuetServiceImpl



+(id)mapBundleID:(id)arg0 ;
-(id)energyResponse;
-(id)energyResponseWithQualificationID:(int)arg0 ;
-(id)eventTransitionsWithEvents:(id)arg0 ;
-(id)init;
-(void)accumulateWithLastCompletedDate:(id)arg0 withNow:(id)arg1 ;
-(void)accumulateWithLastCompletedDate:(id)arg0 withNow:(id)arg1 withQualificationID:(int)arg2 ;
-(void)createQualificationEventsWithEventTransitions:(id)arg0 withQualificationID:(int)arg1 ;
-(void)didReceiveEventWithPayload:(id)arg0 ;
-(void)initOperatorDependancies:(id)arg0 ;


@end


#endif