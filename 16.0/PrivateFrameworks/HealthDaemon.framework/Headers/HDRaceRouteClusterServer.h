// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDRACEROUTECLUSTERSERVER_H
#define HDRACEROUTECLUSTERSERVER_H

@class NSString;
@protocol HKRaceRouteClusterStoreServer;


#import "HDStandardTaskServer.h"
#import "HDRaceRouteClusterManager.h"

@interface HDRaceRouteClusterServer : HDStandardTaskServer <HKRaceRouteClusterStoreServer>

 {
    HDRaceRouteClusterManager *_raceRouteClusterManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchRaceRouteClustersForActivityType:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif