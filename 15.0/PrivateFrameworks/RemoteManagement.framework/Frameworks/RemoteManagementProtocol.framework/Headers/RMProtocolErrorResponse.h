// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMPROTOCOLERRORRESPONSE_H
#define RMPROTOCOLERRORRESPONSE_H

@class RMModelPayloadBase, NSString, RMModelAnyPayload;



@interface RMProtocolErrorResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseCode; // ivar: _responseCode
@property (copy, nonatomic) NSString *responseDescription; // ivar: _responseDescription
@property (copy, nonatomic) RMModelAnyPayload *responseDetails; // ivar: _responseDetails


+(id)requestWithCode:(id)arg0 description:(id)arg1 details:(id)arg2 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif