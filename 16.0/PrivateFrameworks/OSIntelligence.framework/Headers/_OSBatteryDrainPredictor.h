// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSBATTERYDRAINPREDICTOR_H
#define _OSBATTERYDRAINPREDICTOR_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface _OSBatteryDrainPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


+(id)behaviorDescription:(NSInteger)arg0 ;
+(id)predictor;
-(NSInteger)drainForEventsFromStream:(id)arg0 matchingQuery:(id)arg1 ;
-(NSInteger)historicalClassification;
-(id)drainPerDayFromDate:(id)arg0 forNumberOfDays:(int)arg1 ;
-(id)init;
-(void)logCompletion:(id)arg0 ;


@end


#endif