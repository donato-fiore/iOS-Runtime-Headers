// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HLOXYGENSATURATIONSESSION_H
#define HLOXYGENSATURATIONSESSION_H

@protocol HLOxygenSaturationSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HLOxygenSaturationSession : NSObject

@property (weak, nonatomic) NSObject<HLOxygenSaturationSessionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithDelegate:(id)arg0 onQueue:(id)arg1 ;
-(void)abort;
-(void)begin;
-(void)unitTesting_deliverFeedback:(NSUInteger)arg0 ;
-(void)unitTesting_endSessionWithReason:(NSUInteger)arg0 saturation:(id)arg1 barometricPressure:(id)arg2 averageHeartRate:(id)arg3 averageHeartRateUUID:(id)arg4 ;


@end


#endif