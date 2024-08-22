// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMPROTOCOLCOMMANDRESPONSE_COMMAND_H
#define RMPROTOCOLCOMMANDRESPONSE_COMMAND_H

@class RMModelPayloadBase, NSString, RMModelAnyPayload;



@interface RMProtocolCommandResponse_Command : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseIdentifier; // ivar: _responseIdentifier
@property (copy, nonatomic) RMModelAnyPayload *responsePayload; // ivar: _responsePayload
@property (copy, nonatomic) NSString *responseType; // ivar: _responseType


+(id)allowedResponseKeys;
+(id)buildRequiredOnlyWithType:(id)arg0 identifier:(id)arg1 ;
+(id)buildWithType:(id)arg0 identifier:(id)arg1 payload:(id)arg2 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif