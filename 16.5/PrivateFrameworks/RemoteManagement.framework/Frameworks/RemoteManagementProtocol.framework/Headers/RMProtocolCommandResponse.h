// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMPROTOCOLCOMMANDRESPONSE_H
#define RMPROTOCOLCOMMANDRESPONSE_H

@class RMModelPayloadBase, NSString;


#import "RMProtocolCommandResponse_Command.h"

@interface RMProtocolCommandResponse : RMModelPayloadBase

@property (copy, nonatomic) RMProtocolCommandResponse_Command *responseCommand; // ivar: _responseCommand
@property (copy, nonatomic) NSString *responseCommandToken; // ivar: _responseCommandToken


+(id)requestWithCommandToken:(id)arg0 command:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif