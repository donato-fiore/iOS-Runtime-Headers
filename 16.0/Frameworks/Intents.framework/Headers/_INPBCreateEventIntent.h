// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCREATEEVENTINTENT_H
#define _INPBCREATEEVENTINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBCreateEventIntent, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRangeValue.h"
#import "_INPBIntentMetadata.h"
#import "_INPBLocation.h"

@interface _INPBCreateEventIntent : PBCodable <_INPBCreateEventIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDateTimeRangeValue *dateTimeRange; // ivar: _dateTimeRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDateTimeRange;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBLocation *location; // ivar: _location
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSUInteger participantsCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)participantsAtIndex:(NSUInteger)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)clearParticipants;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif