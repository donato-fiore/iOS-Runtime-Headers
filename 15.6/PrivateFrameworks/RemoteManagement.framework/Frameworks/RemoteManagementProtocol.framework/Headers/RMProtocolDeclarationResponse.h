// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPROTOCOLDECLARATIONRESPONSE_H
#define RMPROTOCOLDECLARATIONRESPONSE_H

@class RMModelPayloadBase, NSString, RMModelAnyPayload;



@interface RMProtocolDeclarationResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseIdentifier; // ivar: _responseIdentifier
@property (copy, nonatomic) RMModelAnyPayload *responsePayload; // ivar: _responsePayload
@property (copy, nonatomic) NSString *responseServerToken; // ivar: _responseServerToken
@property (copy, nonatomic) NSString *responseType; // ivar: _responseType


+(id)requestWithType:(id)arg0 identifier:(id)arg1 serverToken:(id)arg2 payload:(id)arg3 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif