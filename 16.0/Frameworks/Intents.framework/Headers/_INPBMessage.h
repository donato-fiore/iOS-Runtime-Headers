// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBMESSAGE_H
#define _INPBMESSAGE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBMessage, NSSecureCoding, NSCopying;


#import "_INPBFile.h"
#import "_INPBDateTime.h"
#import "_INPBMessageLinkMetadata.h"
#import "_INPBInteger.h"
#import "_INPBCurrencyAmountValue.h"
#import "_INPBMessage.h"
#import "_INPBContact.h"
#import "_INPBDataString.h"

@interface _INPBMessage : PBCodable <_INPBMessage, NSSecureCoding, NSCopying>

 {
    ? _attributes;
    ? _has;
}


@property (readonly, nonatomic) *int attributes;
@property (readonly, nonatomic) NSUInteger attributesCount;
@property (retain, nonatomic) _INPBFile *audioMessageFile; // ivar: _audioMessageFile
@property (copy, nonatomic) NSString *content; // ivar: _content
@property (copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (retain, nonatomic) _INPBDateTime *dateLastMessageRead; // ivar: _dateLastMessageRead
@property (retain, nonatomic) _INPBDateTime *dateSent; // ivar: _dateSent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int effect; // ivar: _effect
@property (copy, nonatomic) NSString *fileExtension; // ivar: _fileExtension
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly, nonatomic) BOOL hasAudioMessageFile;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasConversationIdentifier;
@property (readonly, nonatomic) BOOL hasDateLastMessageRead;
@property (readonly, nonatomic) BOOL hasDateSent;
@property (nonatomic) BOOL hasEffect;
@property (readonly, nonatomic) BOOL hasFileExtension;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLinkMetadata;
@property (readonly, nonatomic) BOOL hasLocationName;
@property (readonly, nonatomic) BOOL hasNumberOfAttachments;
@property (readonly, nonatomic) BOOL hasPaymentAmount;
@property (readonly, nonatomic) BOOL hasReferencedMessage;
@property (readonly, nonatomic) BOOL hasSender;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (readonly, nonatomic) BOOL hasSpeakableGroupName;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _INPBMessageLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (copy, nonatomic) NSString *locationName; // ivar: _locationName
@property (retain, nonatomic) _INPBInteger *numberOfAttachments; // ivar: _numberOfAttachments
@property (retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount; // ivar: _paymentAmount
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSUInteger recipientsCount;
@property (retain, nonatomic) _INPBMessage *referencedMessage; // ivar: _referencedMessage
@property (retain, nonatomic) _INPBContact *sender; // ivar: _sender
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) _INPBDataString *speakableGroupName; // ivar: _speakableGroupName
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(Class)recipientType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)attributesAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)effectAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)recipientAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsAttributes:(id)arg0 ;
-(int)StringAsEffect:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(int)attributeAtIndex:(NSUInteger)arg0 ;
-(void)addAttribute:(int)arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)clearAttributes;
-(void)clearRecipients;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif