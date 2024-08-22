// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXACTIONTIMEESTIMATEAWDTRACKER_H
#define ATXACTIONTIMEESTIMATEAWDTRACKER_H


#import <Foundation/Foundation.h>

#import "_ATXDuetHelper.h"

@interface ATXActionTimeEstimateAWDTracker : NSObject {
    _ATXDuetHelper *_duetHelper;
}




-(id)_createTimeEstimateContainers:(id)arg0 withSessionLengths:(id)arg1 withSessionIndices:(id)arg2 withParameterSet:(id)arg3 withLaunchReasons:(id)arg4 withNoMatchCount:(id)arg5 forActionType:(NSUInteger)arg6 ;
-(id)_defaultActionTimeEstimateTimestampPath;
-(id)_effectiveEndDateFor:(id)arg0 ;
-(id)_effectiveStartDateFor:(id)arg0 ;
-(id)_getActionKeyFor:(id)arg0 ;
-(id)_queryStartTime;
-(id)_readTimestamp;
-(id)getTimeEstimatesFor:(id)arg0 forAppLaunches:(id)arg1 withActionType:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithDuetHelper:(id)arg0 ;
-(void)_writeTimestamp:(id)arg0 ;
-(void)logActionTimeEstimatesWithActivity:(id)arg0 ;
-(void)logActionTimeEstimatesWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)logActionTimeEstimatesWithStartDate:(id)arg0 endDate:(id)arg1 withActivity:(id)arg2 ;
-(void)postTimeEstimates:(id)arg0 ;


@end


#endif