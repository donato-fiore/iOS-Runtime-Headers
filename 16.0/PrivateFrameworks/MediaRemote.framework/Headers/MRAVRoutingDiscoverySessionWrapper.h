// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAVROUTINGDISCOVERYSESSIONWRAPPER_H
#define MRAVROUTINGDISCOVERYSESSIONWRAPPER_H

@class NSProxy, NSMutableDictionary;


#import "MRAVRoutingDiscoverySessionConfiguration.h"
#import "MRAVRoutingDiscoverySession.h"

@interface MRAVRoutingDiscoverySessionWrapper : NSProxy {
    NSMutableDictionary *_endpointsChangedCallbacks;
    NSMutableDictionary *_endpointsAddedCallbacks;
    NSMutableDictionary *_endpointsRemovedCallbacks;
    NSMutableDictionary *_endpointsModifiedCallbacks;
    NSMutableDictionary *_outputDevicesChangedCallbacks;
    NSMutableDictionary *_outputDevicesAddedCallbacks;
    NSMutableDictionary *_outputDevicesRemovedCallbacks;
    NSMutableDictionary *_outputDevicesModifiedCallbacks;
    NSMutableDictionary *_endpointsTokensMap;
    NSMutableDictionary *_outputDevicesTokensMap;
    unsigned int _discoveryMode;
}


@property (retain, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) MRAVRoutingDiscoverySession *sharedSession; // ivar: _sharedSession


-(id)addEndpointsAddedCallback:(id)arg0 ;
-(id)addEndpointsChangedCallback:(id)arg0 ;
-(id)addEndpointsModifiedCallback:(id)arg0 ;
-(id)addEndpointsRemovedCallback:(id)arg0 ;
-(id)addOutputDevicesAddedCallback:(id)arg0 ;
-(id)addOutputDevicesChangedCallback:(id)arg0 ;
-(id)addOutputDevicesModifiedCallback:(id)arg0 ;
-(id)addOutputDevicesRemovedCallback:(id)arg0 ;
-(id)debugDescription;
-(id)initWithSession:(id)arg0 configuration:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(unsigned int)discoveryMode;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)reevaluateDiscoveryModeForSession:(id)arg0 ;
-(void)removeEndpointsAddedCallback:(id)arg0 ;
-(void)removeEndpointsChangedCallback:(id)arg0 ;
-(void)removeEndpointsModifiedCallback:(id)arg0 ;
-(void)removeEndpointsRemovedCallback:(id)arg0 ;
-(void)removeOutputDevicesAddedCallback:(id)arg0 ;
-(void)removeOutputDevicesChangedCallback:(id)arg0 ;
-(void)removeOutputDevicesModifiedCallback:(id)arg0 ;
-(void)removeOutputDevicesRemovedCallback:(id)arg0 ;
-(void)setAlwaysAllowUpdates:(BOOL)arg0 ;
-(void)setDiscoveryMode:(unsigned int)arg0 ;
-(void)setPopulatesExternalDevice:(BOOL)arg0 ;
-(void)setRoutingContextUID:(id)arg0 ;
-(void)setTargetAudioSessionID:(unsigned int)arg0 ;
-(void)transferCallbacksFromSession:(id)arg0 toSession:(id)arg1 ;
-(void)transferEndpointsAddedCallbacksFromSession:(id)arg0 toSession:(id)arg1 ;
-(void)transferEndpointsChangedCallbacksFromSession:(id)arg0 toSession:(id)arg1 ;
-(void)transferEndpointsModifiedCallbacksFromSession:(id)arg0 toSession:(id)arg1 ;
-(void)transferEndpointsRemovedCallbacksFromSession:(id)arg0 toSession:(id)arg1 ;
-(void)transferOutputDevicesAddedCallbacksFromSession:(id)arg0 toSession:(id)arg1 ;
-(void)transferOutputDevicesChangedCallbacksFromSession:(id)arg0 toSession:(id)arg1 ;
-(void)transferOutputDevicesModifiedCallbacksFromSession:(id)arg0 toSession:(id)arg1 ;
-(void)transferOutputDevicesRemovedCallbacksFromSession:(id)arg0 toSession:(id)arg1 ;
-(void)updateObserversWithPreviousSession:(id)arg0 ;
-(void)updateSharedSession;


@end


#endif