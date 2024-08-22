// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBUPDATEEVENTINTENT_H
#define _INPBUPDATEEVENTINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBUpdateEventIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBDateTimeRangeValue.h"
#import "_INPBLocation.h"

@interface _INPBUpdateEventIntent : PBCodable <_INPBUpdateEventIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *addParticipants; // ivar: _addParticipants
@property (readonly, nonatomic) NSUInteger addParticipantsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasRemoveLocation;
@property (readonly, nonatomic) BOOL hasSetDateTimeRange;
@property (readonly, nonatomic) BOOL hasSetLocation;
@property (readonly, nonatomic) BOOL hasSetTitle;
@property (readonly, nonatomic) BOOL hasTargetEventIdentifier;
@property (nonatomic) BOOL hasUpdateAllOccurrences;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) BOOL removeLocation; // ivar: _removeLocation
@property (copy, nonatomic) NSArray *removeParticipants; // ivar: _removeParticipants
@property (readonly, nonatomic) NSUInteger removeParticipantsCount;
@property (retain, nonatomic) _INPBDateTimeRangeValue *setDateTimeRange; // ivar: _setDateTimeRange
@property (retain, nonatomic) _INPBLocation *setLocation; // ivar: _setLocation
@property (copy, nonatomic) NSString *setTitle; // ivar: _setTitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetEventIdentifier; // ivar: _targetEventIdentifier
@property (nonatomic) BOOL updateAllOccurrences; // ivar: _updateAllOccurrences


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)addParticipantsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)removeParticipantsAtIndex:(NSUInteger)arg0 ;
-(void)addAddParticipants:(id)arg0 ;
-(void)addRemoveParticipants:(id)arg0 ;
-(void)clearAddParticipants;
-(void)clearRemoveParticipants;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif