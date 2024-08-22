// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDRACEROUTELOCATIONSERIESQUERYSERVER_H
#define HDRACEROUTELOCATIONSERIESQUERYSERVER_H

@class NSUUID;


#import "HDQueryServer.h"

@interface HDRaceRouteLocationSeriesQueryServer : HDQueryServer {
    NSUUID *_clusterUUID;
    NSUInteger _workoutSelection;
    CGFloat _timestampAnchor;
    NSUInteger _limit;
}




+(Class)queryClass;
+(id)requiredEntitlements;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;


@end


#endif