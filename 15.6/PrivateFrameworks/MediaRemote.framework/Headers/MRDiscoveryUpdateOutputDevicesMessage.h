// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRDISCOVERYUPDATEOUTPUTDEVICESMESSAGE_H
#define MRDISCOVERYUPDATEOUTPUTDEVICESMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"
#import "MRAVRoutingDiscoverySessionConfiguration.h"

@interface MRDiscoveryUpdateOutputDevicesMessage : MRProtocolMessage

@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSArray *outputDevices; // ivar: _outputDevices


-(NSUInteger)type;
-(id)initWithOutputDevices:(id)arg0 configuration:(id)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg0 error:(id)arg1 ;


@end


#endif