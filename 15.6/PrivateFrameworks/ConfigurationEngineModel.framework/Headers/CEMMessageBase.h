// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMMESSAGEBASE_H
#define CEMMESSAGEBASE_H

@class NSString, NSDate;


#import "CEMPayloadBase.h"
#import "CEMAnyPayload.h"

@interface CEMMessageBase : CEMPayloadBase

@property (copy, nonatomic) NSString *messageIdentifier; // ivar: _messageIdentifier
@property (copy, nonatomic) NSString *messageInReplyTo; // ivar: _messageInReplyTo
@property (copy, nonatomic) CEMAnyPayload *messagePayload; // ivar: _messagePayload
@property (copy, nonatomic) NSDate *messageTimestamp; // ivar: _messageTimestamp
@property (copy, nonatomic) NSString *messageType; // ivar: _messageType


+(id)messageForData:(id)arg0 error:(*id)arg1 ;
+(id)messageForPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadMessageFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serialize;
-(id)serializeAsDataWithError:(*id)arg0 ;


@end


#endif