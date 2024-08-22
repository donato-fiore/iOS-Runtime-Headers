// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRSETDISCOVERYMODEMESSAGE_H
#define MRSETDISCOVERYMODEMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRAVRoutingDiscoverySessionConfiguration.h"

@interface MRSetDiscoveryModeMessage : MRProtocolMessage

@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) unsigned int mode; // ivar: _mode


-(NSUInteger)type;
-(id)initWithMode:(unsigned int)arg0 configuration:(id)arg1 ;
-(id)initWithMode:(unsigned int)arg0 features:(unsigned int)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg0 error:(id)arg1 ;


@end


#endif