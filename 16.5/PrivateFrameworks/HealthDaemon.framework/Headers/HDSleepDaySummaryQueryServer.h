// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSLEEPDAYSUMMARYQUERYSERVER_H
#define HDSLEEPDAYSUMMARYQUERYSERVER_H

@class HKSleepDaySummaryQueryConfiguration;


#import "HDQueryServer.h"

@interface HDSleepDaySummaryQueryServer : HDQueryServer {
    HKSleepDaySummaryQueryConfiguration *_configuration;
}




+(Class)queryClass;
+(id)requiredEntitlements;
-(id)_newCachingSessionWithProfile:(id)arg0 cachingIdentifier:(id)arg1 sourceEntity:(id)arg2 queryDescriptor:(id)arg3 cachedClass:(Class)arg4 queryInterval:(id)arg5 anchorDate:(id)arg6 intervalComponents:(id)arg7 timeIntervalToBucketIndex:(id)arg8 ;
-(id)_newCalendarCache;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)objectTypes;
-(void)_queue_start;


@end


#endif