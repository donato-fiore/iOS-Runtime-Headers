// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSEARCHFORMESSAGESINTENT_H
#define _INPBSEARCHFORMESSAGESINTENT_H

@class PBCodable, NSString;
@protocol _INPBSearchForMessagesIntent, NSSecureCoding, NSCopying;


#import "_INPBStringList.h"
#import "_INPBDateTimeRange.h"
#import "_INPBIntentMetadata.h"
#import "_INPBContactList.h"
#import "_INPBDataStringList.h"

@interface _INPBSearchForMessagesIntent : PBCodable <_INPBSearchForMessagesIntent, NSSecureCoding, NSCopying>

 {
    ? _attributes;
    ? _has;
}


@property (readonly, nonatomic) *int attributes;
@property (readonly, nonatomic) NSUInteger attributesCount;
@property (retain, nonatomic) _INPBStringList *content; // ivar: _content
@property (retain, nonatomic) _INPBStringList *conversationIdentifier; // ivar: _conversationIdentifier
@property (retain, nonatomic) _INPBDateTimeRange *dateTimeRange; // ivar: _dateTimeRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBStringList *groupName; // ivar: _groupName
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasConversationIdentifier;
@property (readonly, nonatomic) BOOL hasDateTimeRange;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasNotificationIdentifier;
@property (readonly, nonatomic) BOOL hasRecipient;
@property (readonly, nonatomic) BOOL hasSearchTerm;
@property (readonly, nonatomic) BOOL hasSender;
@property (readonly, nonatomic) BOOL hasSpeakableGroupName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBStringList *identifier; // ivar: _identifier
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBStringList *notificationIdentifier; // ivar: _notificationIdentifier
@property (retain, nonatomic) _INPBContactList *recipient; // ivar: _recipient
@property (retain, nonatomic) _INPBStringList *searchTerm; // ivar: _searchTerm
@property (retain, nonatomic) _INPBContactList *sender; // ivar: _sender
@property (retain, nonatomic) _INPBDataStringList *speakableGroupName; // ivar: _speakableGroupName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)attributesAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsAttributes:(id)arg0 ;
-(int)attributeAtIndex:(NSUInteger)arg0 ;
-(void)addAttribute:(int)arg0 ;
-(void)clearAttributes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif