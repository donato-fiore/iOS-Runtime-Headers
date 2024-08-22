// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRAVEXTERNALROUTINGDISCOVERYSESSION_H
#define MRAVEXTERNALROUTINGDISCOVERYSESSION_H

@class NSString;
@protocol MREndpointObserver;


#import "MRAVRoutingDiscoverySession.h"
#import "MRAVRoutingDiscoverySessionConfiguration.h"
#import "MRAVEndpoint.h"
#import "MRExternalDevice.h"

@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession <MREndpointObserver>

 {
    unsigned int _discoveryMode;
    MRAVRoutingDiscoverySessionConfiguration *_configuration;
    id *_externalDeviceDiscoveryToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MRAVEndpoint *destination; // ivar: _destination
@property (retain, nonatomic) MRExternalDevice *externalDevice; // ivar: _externalDevice
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)devicePresenceDetected;
-(id)availableEndpoints;
-(id)availableOutputDevices;
-(id)initWithConfiguration:(id)arg0 ;
-(unsigned int)discoveryMode;
-(unsigned int)endpointFeatures;
-(void)dealloc;
-(void)endpointDidDisconnect:(id)arg0 ;
-(void)setDiscoveryMode:(unsigned int)arg0 ;


@end


#endif