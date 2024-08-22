// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPAVTELEVISIONROUTINGDATASOURCE_H
#define MPAVTELEVISIONROUTINGDATASOURCE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;


#import "MPAVRoutingDataSource.h"

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource {
    *void _discoveryController;
    NSMutableArray *_discoveredTelevisions;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




-(BOOL)devicePresenceDetected;
-(id)_discoveredTelevisions;
-(id)getRoutesForCategory:(id)arg0 ;
-(id)init;
-(void)_onQueue_controllerDidDiscoverTelevision:(*void)arg0 ;
-(void)_onQueue_controllerDidRemoveTelevision:(*void)arg0 ;
-(void)dealloc;
-(void)getPickedRouteHasVolumeControlWithCompletion:(id)arg0 ;
-(void)setDiscoveryMode:(NSInteger)arg0 ;


@end


#endif