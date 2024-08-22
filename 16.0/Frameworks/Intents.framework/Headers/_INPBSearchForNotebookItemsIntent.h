// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSEARCHFORNOTEBOOKITEMSINTENT_H
#define _INPBSEARCHFORNOTEBOOKITEMSINTENT_H

@class PBCodable, NSString;
@protocol _INPBSearchForNotebookItemsIntent, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRange.h"
#import "_INPBDataString.h"
#import "_INPBIntentMetadata.h"
#import "_INPBLocation.h"

@interface _INPBSearchForNotebookItemsIntent : PBCodable <_INPBSearchForNotebookItemsIntent, NSSecureCoding, NSCopying>

 {
    ? _temporalEventTriggerTypes;
    ? _has;
}


@property (copy, nonatomic) NSString *content; // ivar: _content
@property (nonatomic) int dateSearchType; // ivar: _dateSearchType
@property (retain, nonatomic) _INPBDateTimeRange *dateTime; // ivar: _dateTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDataString *groupName; // ivar: _groupName
@property (readonly, nonatomic) BOOL hasContent;
@property (nonatomic) BOOL hasDateSearchType;
@property (readonly, nonatomic) BOOL hasDateTime;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (nonatomic) BOOL hasIncludeAllNoteContents;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasItemType;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasLocationSearchType;
@property (readonly, nonatomic) BOOL hasNotebookItemIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTaskPriority;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeAllNoteContents; // ivar: _includeAllNoteContents
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int itemType; // ivar: _itemType
@property (retain, nonatomic) _INPBLocation *location; // ivar: _location
@property (nonatomic) int locationSearchType; // ivar: _locationSearchType
@property (copy, nonatomic) NSString *notebookItemIdentifier; // ivar: _notebookItemIdentifier
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;
@property (nonatomic) int taskPriority; // ivar: _taskPriority
@property (readonly, nonatomic) *int temporalEventTriggerTypes;
@property (readonly, nonatomic) NSUInteger temporalEventTriggerTypesCount;
@property (retain, nonatomic) _INPBDataString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateSearchTypeAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)itemTypeAsString:(int)arg0 ;
-(id)locationSearchTypeAsString:(int)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(id)taskPriorityAsString:(int)arg0 ;
-(id)temporalEventTriggerTypesAsString:(int)arg0 ;
-(int)StringAsDateSearchType:(id)arg0 ;
-(int)StringAsItemType:(id)arg0 ;
-(int)StringAsLocationSearchType:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(int)StringAsTaskPriority:(id)arg0 ;
-(int)StringAsTemporalEventTriggerTypes:(id)arg0 ;
-(int)temporalEventTriggerTypeAtIndex:(NSUInteger)arg0 ;
-(void)addTemporalEventTriggerType:(int)arg0 ;
-(void)clearTemporalEventTriggerTypes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif