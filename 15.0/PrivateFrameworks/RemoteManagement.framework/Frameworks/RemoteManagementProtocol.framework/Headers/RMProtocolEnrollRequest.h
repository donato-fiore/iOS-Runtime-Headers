// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMPROTOCOLENROLLREQUEST_H
#define RMPROTOCOLENROLLREQUEST_H

@class RMModelPayloadBase, NSString, RMModelAnyPayload;



@interface RMProtocolEnrollRequest : RMModelPayloadBase

@property (copy, nonatomic) NSString *requestEnrollmentToken; // ivar: _requestEnrollmentToken
@property (copy, nonatomic) RMModelAnyPayload *requestStatusItems; // ivar: _requestStatusItems


+(id)requestWithEnrollmentToken:(id)arg0 statusItems:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif