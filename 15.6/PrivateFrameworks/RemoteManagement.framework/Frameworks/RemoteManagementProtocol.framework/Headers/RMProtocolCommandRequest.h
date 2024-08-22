// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPROTOCOLCOMMANDREQUEST_H
#define RMPROTOCOLCOMMANDREQUEST_H

@class RMModelPayloadBase, NSString, NSArray, RMModelAnyPayload;



@interface RMProtocolCommandRequest : RMModelPayloadBase

@property (copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (copy, nonatomic) NSArray *requestReasons; // ivar: _requestReasons
@property (copy, nonatomic) RMModelAnyPayload *requestResult; // ivar: _requestResult
@property (copy, nonatomic) NSString *requestStatus; // ivar: _requestStatus


+(id)requestWithStatus:(id)arg0 identifier:(id)arg1 result:(id)arg2 reasons:(id)arg3 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif