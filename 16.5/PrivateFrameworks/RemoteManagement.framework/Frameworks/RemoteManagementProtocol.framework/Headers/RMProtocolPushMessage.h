// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMPROTOCOLPUSHMESSAGE_H
#define RMPROTOCOLPUSHMESSAGE_H

@class RMModelPayloadBase, NSString;


#import "RMProtocolSynchronizationTokens.h"

@interface RMProtocolPushMessage : RMModelPayloadBase

@property (copy, nonatomic) NSString *messageEnrollmentToken; // ivar: _messageEnrollmentToken
@property (copy, nonatomic) RMProtocolSynchronizationTokens *messageSyncTokens; // ivar: _messageSyncTokens


+(id)requestWithEnrollmentToken:(id)arg0 syncTokens:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif