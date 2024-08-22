// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMPROTOCOLWELLKNOWNRESPONSE_WELLKNOWNRESPONSESERVER_H
#define RMPROTOCOLWELLKNOWNRESPONSE_WELLKNOWNRESPONSESERVER_H

@class RMModelPayloadBase, NSString;



@interface RMProtocolWellKnownResponse_WellKnownResponseServer : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseBaseURL; // ivar: _responseBaseURL
@property (copy, nonatomic) NSString *responseVersion; // ivar: _responseVersion


+(id)allowedResponseKeys;
+(id)buildRequiredOnlyWithVersion:(id)arg0 baseURL:(id)arg1 ;
+(id)buildWithVersion:(id)arg0 baseURL:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif