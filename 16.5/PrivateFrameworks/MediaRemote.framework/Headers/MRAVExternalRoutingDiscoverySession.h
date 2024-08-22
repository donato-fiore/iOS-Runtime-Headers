// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVEXTERNALROUTINGDISCOVERYSESSION_H
#define MRAVEXTERNALROUTINGDISCOVERYSESSION_H



#import "MRAVRoutingDiscoverySession.h"
#import "MRAVRoutingDiscoverySessionConfiguration.h"
#import "MRAVEndpoint.h"
#import "MRExternalDevice.h"

@interface MRAVExternalRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    unsigned int _discoveryMode;
    MRAVRoutingDiscoverySessionConfiguration *_configuration;
    id *_externalDeviceDiscoveryToken;
}


@property (retain, nonatomic) MRAVEndpoint *destination; // ivar: _destination
@property (retain, nonatomic) MRExternalDevice *externalDevice; // ivar: _externalDevice


-(BOOL)devicePresenceDetected;
-(id)availableEndpoints;
-(id)availableOutputDevices;
-(id)debugDescription;
-(id)description;
-(id)initWithConfiguration:(id)arg0 ;
-(unsigned int)discoveryMode;
-(unsigned int)endpointFeatures;
-(void)dealloc;
-(void)setDiscoveryMode:(unsigned int)arg0 ;


@end


#endif