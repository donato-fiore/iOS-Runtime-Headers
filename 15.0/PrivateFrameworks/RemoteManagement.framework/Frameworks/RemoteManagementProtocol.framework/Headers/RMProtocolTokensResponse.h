// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMPROTOCOLTOKENSRESPONSE_H
#define RMPROTOCOLTOKENSRESPONSE_H

@class RMModelPayloadBase;


#import "RMProtocolSynchronizationTokens.h"

@interface RMProtocolTokensResponse : RMModelPayloadBase

@property (copy, nonatomic) RMProtocolSynchronizationTokens *responseSyncTokens; // ivar: _responseSyncTokens


+(id)requestWithSyncTokens:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif