// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVENDPOINTROUTINGDATASOURCE_H
#define MPAVENDPOINTROUTINGDATASOURCE_H

@class MRAVRoutingDiscoverySession, MRAVRoutingDiscoverySessionConfiguration, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;


#import "MPAVRoutingDataSource.h"

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {
    MRAVRoutingDiscoverySession *_discoverySession;
    id *_callbackToken;
    unsigned int _targetSessionID;
}


@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (retain, nonatomic) NSMutableDictionary *endpoints; // ivar: _endpoints
@property (copy, nonatomic) NSString *routingContextUID; // ivar: _routingContextUID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(BOOL)devicePresenceDetected;
-(NSInteger)discoveryMode;
-(id)getRoutesForCategory:(id)arg0 ;
-(id)init;
-(id)initWithThrottlingEnabled:(BOOL)arg0 ;
-(unsigned int)targetSessionID;
-(void)_endpointsDidChange:(id)arg0 ;
-(void)dealloc;
-(void)setDiscoveryMode:(NSInteger)arg0 ;
-(void)setPickedRoute:(id)arg0 withPassword:(id)arg1 completion:(id)arg2 ;
-(void)setTargetSessionID:(unsigned int)arg0 ;


@end


#endif