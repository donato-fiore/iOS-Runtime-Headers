// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMPROTOCOLSYNCHRONIZATIONTOKENS_H
#define RMPROTOCOLSYNCHRONIZATIONTOKENS_H

@class RMModelPayloadBase, NSString, NSDate;



@interface RMProtocolSynchronizationTokens : RMModelPayloadBase

@property (copy, nonatomic) NSString *tokensDeclarationsToken; // ivar: _tokensDeclarationsToken
@property (copy, nonatomic) NSDate *tokensTimestamp; // ivar: _tokensTimestamp


+(id)requestWithTimestamp:(id)arg0 declarationsToken:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif