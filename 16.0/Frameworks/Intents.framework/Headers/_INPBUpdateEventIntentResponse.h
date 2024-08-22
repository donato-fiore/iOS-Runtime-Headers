// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBUPDATEEVENTINTENTRESPONSE_H
#define _INPBUPDATEEVENTINTENTRESPONSE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBUpdateEventIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBCalendarEvent.h"

@interface _INPBUpdateEventIntentResponse : PBCodable <_INPBUpdateEventIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int confirmationReason; // ivar: _confirmationReason
@property (copy, nonatomic) NSArray *conflictingEventIdentifiers; // ivar: _conflictingEventIdentifiers
@property (readonly, nonatomic) NSUInteger conflictingEventIdentifiersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasConfirmationReason;
@property (readonly, nonatomic) BOOL hasUpdatedEvent;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBCalendarEvent *updatedEvent; // ivar: _updatedEvent


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)confirmationReasonAsString:(int)arg0 ;
-(id)conflictingEventIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsConfirmationReason:(id)arg0 ;
-(void)addConflictingEventIdentifiers:(id)arg0 ;
-(void)clearConflictingEventIdentifiers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif