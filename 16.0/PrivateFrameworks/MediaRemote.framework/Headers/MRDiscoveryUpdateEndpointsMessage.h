// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRDISCOVERYUPDATEENDPOINTSMESSAGE_H
#define MRDISCOVERYUPDATEENDPOINTSMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"
#import "MRAVRoutingDiscoverySessionConfiguration.h"

@interface MRDiscoveryUpdateEndpointsMessage : MRProtocolMessage

@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSArray *endpoints; // ivar: _endpoints


-(NSUInteger)type;
-(id)initWithEndpoints:(id)arg0 configuration:(id)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg0 error:(id)arg1 ;


@end


#endif