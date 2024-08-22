// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSENDMESSAGEINTENTRESPONSE_H
#define _INPBSENDMESSAGEINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSendMessageIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBMessage.h"

@interface _INPBSendMessageIntentResponse : PBCodable <_INPBSendMessageIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSentMessage;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBMessage *sentMessage; // ivar: _sentMessage
@property (copy, nonatomic) NSArray *sentMessages; // ivar: _sentMessages
@property (readonly, nonatomic) NSUInteger sentMessagesCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)sentMessagesAtIndex:(NSUInteger)arg0 ;
-(void)addSentMessages:(id)arg0 ;
-(void)clearSentMessages;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif