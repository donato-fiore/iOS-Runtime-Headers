// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUPDATEACTIVESYSTEMENDPOINTMESSAGE_H
#define MRUPDATEACTIVESYSTEMENDPOINTMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRUpdateActiveSystemEndpointRequest.h"

@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage

@property (readonly, nonatomic) MRUpdateActiveSystemEndpointRequest *request; // ivar: _request


-(NSUInteger)type;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithUnderlyingCodableMessage:(id)arg0 error:(id)arg1 ;


@end


#endif