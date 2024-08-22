// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSENDMESSAGEINTENT_H
#define _INPBSENDMESSAGEINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBSendMessageIntent, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBIntentMetadata.h"
#import "_INPBContact.h"
#import "_INPBDataString.h"

@interface _INPBSendMessageIntent : PBCodable <_INPBSendMessageIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, nonatomic) NSUInteger attachmentsCount;
@property (retain, nonatomic) _INPBString *content; // ivar: _content
@property (copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int effect; // ivar: _effect
@property (retain, nonatomic) _INPBString *groupName; // ivar: _groupName
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasConversationIdentifier;
@property (nonatomic) BOOL hasEffect;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasNotificationThreadIdentifier;
@property (nonatomic) BOOL hasOutgoingMessageType;
@property (readonly, nonatomic) BOOL hasSender;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (readonly, nonatomic) BOOL hasSpeakableGroupName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (copy, nonatomic) NSString *notificationThreadIdentifier; // ivar: _notificationThreadIdentifier
@property (nonatomic) int outgoingMessageType; // ivar: _outgoingMessageType
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSUInteger recipientsCount;
@property (retain, nonatomic) _INPBContact *sender; // ivar: _sender
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) _INPBDataString *speakableGroupName; // ivar: _speakableGroupName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)recipientType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)attachmentsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)effectAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)outgoingMessageTypeAsString:(int)arg0 ;
-(id)recipientAtIndex:(NSUInteger)arg0 ;
-(int)StringAsEffect:(id)arg0 ;
-(int)StringAsOutgoingMessageType:(id)arg0 ;
-(void)addAttachments:(id)arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)clearAttachments;
-(void)clearRecipients;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif