// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUANTITYSERIESSAMPLEQUERYSERVER_H
#define HDQUANTITYSERIESSAMPLEQUERYSERVER_H

@class HKQuantitySample, NSDate, NSUUID;


#import "HDQueryServer.h"

@interface HDQuantitySeriesSampleQueryServer : HDQueryServer {
    HKQuantitySample *_sample;
    NSInteger _batchThreshold;
    NSInteger _lastDatumIndex;
    NSInteger _mode;
    NSUInteger _options;
    NSDate *_maximumDeliveredStartDate;
    NSUUID *_latestDeliveredUUID;
    NSDate *_latestDeliveredSampleStartDate;
}


@property (copy, nonatomic) id *unitTest_batchWillDeliver; // ivar: _unitTest_batchWillDeliver


+(Class)queryClass;
+(id)requiredEntitlements;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;
-(void)unitTest_setBatchThreshold:(NSInteger)arg0 ;


@end


#endif