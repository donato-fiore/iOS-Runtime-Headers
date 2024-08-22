// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSTATISTICSQUERYSERVER_H
#define HDSTATISTICSQUERYSERVER_H

@class NSDateInterval, HKQuantityType;


#import "HDQueryServer.h"

@interface HDStatisticsQueryServer : HDQueryServer {
    NSDateInterval *_dateInterval;
    HKQuantityType *_quantityType;
}


@property (readonly, nonatomic) NSUInteger mergeStrategy; // ivar: _mergeStrategy
@property (readonly, nonatomic) NSUInteger statisticsOptions; // ivar: _statisticsOptions


+(BOOL)supportsAnchorBasedAuthorization;
+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)queryClass;
+(id)requiredEntitlements;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)quantityType;
-(void)_queue_start;


@end


#endif