// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMPROTOCOLCOMMANDREQUEST_STATUSREASON_H
#define RMPROTOCOLCOMMANDREQUEST_STATUSREASON_H

@class RMModelPayloadBase, NSString, RMModelAnyPayload;



@interface RMProtocolCommandRequest_StatusReason : RMModelPayloadBase

@property (copy, nonatomic) NSString *requestCode; // ivar: _requestCode
@property (copy, nonatomic) NSString *requestDescription; // ivar: _requestDescription
@property (copy, nonatomic) RMModelAnyPayload *requestDetails; // ivar: _requestDetails


+(id)allowedRequestKeys;
+(id)buildRequiredOnlyWithCode:(id)arg0 ;
+(id)buildWithCode:(id)arg0 description:(id)arg1 details:(id)arg2 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif