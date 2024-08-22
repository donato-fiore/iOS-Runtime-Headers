// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBFINDEVENTSINTENT_H
#define _INPBFINDEVENTSINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBFindEventsIntent, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRangeValue.h"
#import "_INPBIntentMetadata.h"
#import "_INPBLocation.h"

@interface _INPBFindEventsIntent : PBCodable <_INPBFindEventsIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDateTimeRangeValue *dateTimeRange; // ivar: _dateTimeRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDateTimeRange;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasRequestedEventAttribute;
@property (readonly, nonatomic) BOOL hasSearchQuery;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBLocation *location; // ivar: _location
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSUInteger participantsCount;
@property (nonatomic) int requestedEventAttribute; // ivar: _requestedEventAttribute
@property (copy, nonatomic) NSString *searchQuery; // ivar: _searchQuery
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)participantsAtIndex:(NSUInteger)arg0 ;
-(id)requestedEventAttributeAsString:(int)arg0 ;
-(int)StringAsRequestedEventAttribute:(id)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)clearParticipants;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif