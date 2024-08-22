// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCPROTOCOLWELLKNOWNRESPONSE_H
#define DMCPROTOCOLWELLKNOWNRESPONSE_H

@class NSArray;


#import "DMCModelPayloadBase.h"

@interface DMCProtocolWellKnownResponse : DMCModelPayloadBase

@property (copy, nonatomic) NSArray *responseServers; // ivar: _responseServers


+(id)requestWithServers:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif