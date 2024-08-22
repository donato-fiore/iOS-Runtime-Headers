// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPROTOCOLENROLLRESPONSE_H
#define RMPROTOCOLENROLLRESPONSE_H

@class RMModelPayloadBase, NSString, NSArray;



@interface RMProtocolEnrollResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responsePushEnvironment; // ivar: _responsePushEnvironment
@property (copy, nonatomic) NSString *responsePushTopic; // ivar: _responsePushTopic
@property (copy, nonatomic) NSArray *responseStatusItems; // ivar: _responseStatusItems


+(id)requestWithPushTopic:(id)arg0 pushEnvironment:(id)arg1 statusItems:(id)arg2 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif