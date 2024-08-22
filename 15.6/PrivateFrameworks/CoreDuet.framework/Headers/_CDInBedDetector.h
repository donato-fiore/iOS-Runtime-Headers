// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDINBEDDETECTOR_H
#define _CDINBEDDETECTOR_H

@protocol _DKKnowledgeQuerying, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CDInBedDetector : NSObject

@property (retain) NSObject<_DKKnowledgeQuerying> *knowledge; // ivar: _knowledge
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property NSUInteger method; // ivar: _method


+(CGFloat)hoursOfSleepForResult:(id)arg0 ;
+(id)inBedDetector;
+(id)inBedDetectorWithKnowledge:(id)arg0 ;
+(id)inBedDetectorWithKnowledge:(id)arg0 method:(NSUInteger)arg1 ;
+(id)simpleLockBasedInBedDetector;
-(id)detectInBedBetweenBedtimeDate:(id)arg0 wakupDate:(id)arg1 error:(*id)arg2 ;
-(id)detectInBedWithPolicyV1BetweenStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;
-(id)detectInBedWithPolicyV2BetweenStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 motionBased:(BOOL)arg3 ;
-(id)findDateIntervalOfEventInStream:(id)arg0 datePredicate:(id)arg1 valuePredicate:(id)arg2 sortDescriptor:(id)arg3 error:(*id)arg4 ;
-(id)findLastTimeDeviceWasLockedBetweenStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;
-(id)findLastTimeDeviceWasPluggedInBetweenStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;
-(id)findLatestEndOfMovementBetweenStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;
-(id)findMotionTerminusBetweenStartDate:(id)arg0 endDate:(id)arg1 latest:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithKnowledge:(id)arg0 method:(NSUInteger)arg1 ;
-(id)lockedTimesBetweenStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;
-(id)stationaryIntervalsBetweenStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;


@end


#endif