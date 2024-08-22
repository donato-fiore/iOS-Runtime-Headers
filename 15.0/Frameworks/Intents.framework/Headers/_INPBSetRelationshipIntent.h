// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSETRELATIONSHIPINTENT_H
#define _INPBSETRELATIONSHIPINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBSetRelationshipIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBModifyRelationship.h"

@interface _INPBSetRelationshipIntent : PBCodable <_INPBSetRelationshipIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly, nonatomic) NSUInteger contactIdentifiersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasTargetRelationship;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBModifyRelationship *targetRelationship; // ivar: _targetRelationship


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)contactIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addContactIdentifiers:(id)arg0 ;
-(void)clearContactIdentifiers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif