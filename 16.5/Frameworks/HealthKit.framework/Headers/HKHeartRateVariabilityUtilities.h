// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEARTRATEVARIABILITYUTILITIES_H
#define HKHEARTRATEVARIABILITYUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKHeartRateVariabilityUtilities : NSObject



+(id)_hrvType;
+(id)_sequenceType;
+(id)instantaneousBPMsForHeartbeatSeriesSample:(id)arg0 ;
+(void)deleteHRVSample:(id)arg0 healthStore:(id)arg1 predicate:(id)arg2 options:(NSUInteger)arg3 completion:(id)arg4 ;
+(void)deleteHRVSamplesFromStartDate:(id)arg0 endDate:(id)arg1 predicate:(id)arg2 options:(NSUInteger)arg3 healthStore:(id)arg4 completion:(id)arg5 ;
+(void)queryForParentSequenceOfHRV:(id)arg0 healthStore:(id)arg1 completion:(id)arg2 ;


@end


#endif