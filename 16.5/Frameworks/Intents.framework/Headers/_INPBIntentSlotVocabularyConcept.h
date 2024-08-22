// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBINTENTSLOTVOCABULARYCONCEPT_H
#define _INPBINTENTSLOTVOCABULARYCONCEPT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBIntentSlotVocabularyConcept, NSSecureCoding, NSCopying;



@interface _INPBIntentSlotVocabularyConcept : PBCodable <_INPBIntentSlotVocabularyConcept, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasRequiresUserIdentification;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL requiresUserIdentification; // ivar: _requiresUserIdentification
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *synonyms; // ivar: _synonyms
@property (readonly, nonatomic) NSUInteger synonymsCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)synonymsAtIndex:(NSUInteger)arg0 ;
-(void)addSynonyms:(id)arg0 ;
-(void)clearSynonyms;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif