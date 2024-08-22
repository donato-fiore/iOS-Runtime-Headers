// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRAVROUTINGDISCOVERYSESSION_H
#define MRAVROUTINGDISCOVERYSESSION_H

@class NSArray, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRAVOutputDevice.h"

@interface MRAVRoutingDiscoverySession : NSObject {
    NSArray *_endpoints;
    NSArray *_outputDevices;
}


@property (nonatomic) BOOL alwaysAllowUpdates; // ivar: _alwaysAllowUpdates
@property (readonly, nonatomic) NSArray *availableEndpoints;
@property (readonly, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (retain, nonatomic) NSMapTable *clientDiscoveryStates; // ivar: _clientDiscoveryStates
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (nonatomic) unsigned int discoveryMode;
@property (readonly, nonatomic) unsigned int endpointFeatures;
@property (copy, nonatomic) NSArray *endpoints;
@property (retain, nonatomic) NSMutableDictionary *endpointsAddedCallbacks; // ivar: _endpointsAddedCallbacks
@property (retain, nonatomic) NSMutableDictionary *endpointsChangedCallbacks; // ivar: _endpointsChangedCallbacks
@property (retain, nonatomic) NSMutableDictionary *endpointsModifiedCallbacks; // ivar: _endpointsModifiedCallbacks
@property (retain, nonatomic) NSMutableDictionary *endpointsRemovedCallbacks; // ivar: _endpointsRemovedCallbacks
@property (copy, nonatomic) NSArray *outputDevices;
@property (retain, nonatomic) NSMutableDictionary *outputDevicesAddedCallbacks; // ivar: _outputDevicesAddedCallbacks
@property (retain, nonatomic) NSMutableDictionary *outputDevicesChangedCallbacks; // ivar: _outputDevicesChangedCallbacks
@property (retain, nonatomic) NSMutableDictionary *outputDevicesModifiedCallbacks; // ivar: _outputDevicesModifiedCallbacks
@property (retain, nonatomic) NSMutableDictionary *outputDevicesRemovedCallbacks; // ivar: _outputDevicesRemovedCallbacks
@property (nonatomic) BOOL populatesExternalDevice; // ivar: _populatesExternalDevice
@property (copy, nonatomic) NSString *routingContextUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (nonatomic) unsigned int targetAudioSessionID;
@property (readonly, nonatomic) MRAVOutputDevice *unclusteredLocalOutputDevice; // ivar: _unclusteredLocalOutputDevice
@property (readonly, nonatomic) NSArray *unclusteredOutputDevices; // ivar: _unclusteredOutputDevices


+(id)discoverySessionWithConfiguration:(id)arg0 ;
+(id)discoverySessionWithEndpointFeatures:(unsigned int)arg0 ;
+(id)discoverySessionWithEndpointFeatures:(unsigned int)arg0 enableThrottling:(BOOL)arg1 ;
+(id)sharedDiscoverySessionForClass:(Class)arg0 configuration:(id)arg1 ;
-(id)addEndpointsAddedCallback:(id)arg0 ;
-(id)addEndpointsChangedCallback:(id)arg0 ;
-(id)addEndpointsModifiedCallback:(id)arg0 ;
-(id)addEndpointsRemovedCallback:(id)arg0 ;
-(id)addOutputDevicesAddedCallback:(id)arg0 ;
-(id)addOutputDevicesChangedCallback:(id)arg0 ;
-(id)addOutputDevicesModifiedCallback:(id)arg0 ;
-(id)addOutputDevicesRemovedCallback:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithFeatures:(unsigned int)arg0 ;
-(void)logEndpointsChanged:(id)arg0 oldEndpoints:(id)arg1 ;
-(void)logOutputDevicesChanged:(id)arg0 oldOutputDevices:(id)arg1 ;
-(void)notifyEndpointsChanged:(id)arg0 ;
-(void)notifyOutputDevicesChanged:(id)arg0 ;
-(void)removeEndpointsAddedCallback:(id)arg0 ;
-(void)removeEndpointsChangedCallback:(id)arg0 ;
-(void)removeEndpointsModifiedCallback:(id)arg0 ;
-(void)removeEndpointsRemovedCallback:(id)arg0 ;
-(void)removeOutputDevicesAddedCallback:(id)arg0 ;
-(void)removeOutputDevicesChangedCallback:(id)arg0 ;
-(void)removeOutputDevicesModifiedCallback:(id)arg0 ;
-(void)removeOutputDevicesRemovedCallback:(id)arg0 ;


@end


#endif