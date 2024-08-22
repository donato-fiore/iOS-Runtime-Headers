// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPROTOCOLENROLLREFERRALRESPONSE_H
#define RMPROTOCOLENROLLREFERRALRESPONSE_H

@class RMModelPayloadBase, NSString;



@interface RMProtocolEnrollReferralResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseReferralBaseURL; // ivar: _responseReferralBaseURL


+(id)requestWithReferralBaseURL:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif