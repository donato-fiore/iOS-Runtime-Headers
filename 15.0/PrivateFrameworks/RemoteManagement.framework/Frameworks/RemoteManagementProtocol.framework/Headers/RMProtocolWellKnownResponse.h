// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMPROTOCOLWELLKNOWNRESPONSE_H
#define RMPROTOCOLWELLKNOWNRESPONSE_H

@class RMModelPayloadBase, NSArray;



@interface RMProtocolWellKnownResponse : RMModelPayloadBase

@property (copy, nonatomic) NSArray *responseServers; // ivar: _responseServers


+(id)requestWithServers:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif