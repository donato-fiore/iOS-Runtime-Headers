// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTROUTEQUERYSERVER_H
#define HDWORKOUTROUTEQUERYSERVER_H

@class HKWorkoutRoute;


#import "HDQueryServer.h"

@interface HDWorkoutRouteQueryServer : HDQueryServer {
    NSUInteger _batchThreshold;
    HKWorkoutRoute *_locationSeries;
}




+(Class)queryClass;
+(id)requiredEntitlements;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;
-(void)unitTest_setBatchThreshold:(NSUInteger)arg0 ;


@end


#endif