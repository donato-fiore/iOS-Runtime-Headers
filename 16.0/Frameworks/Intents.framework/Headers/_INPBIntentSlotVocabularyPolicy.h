// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBINTENTSLOTVOCABULARYPOLICY_H
#define _INPBINTENTSLOTVOCABULARYPOLICY_H

@class PBCodable, NSString, NSArray;
@protocol _INPBIntentSlotVocabularyPolicy, NSSecureCoding, NSCopying;



@interface _INPBIntentSlotVocabularyPolicy : PBCodable <_INPBIntentSlotVocabularyPolicy, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *intentSlotNames; // ivar: _intentSlotNames
@property (readonly, nonatomic) NSUInteger intentSlotNamesCount;
@property (copy, nonatomic) NSArray *intentSlotVocabularyConcepts; // ivar: _intentSlotVocabularyConcepts
@property (readonly, nonatomic) NSUInteger intentSlotVocabularyConceptsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)intentSlotNamesAtIndex:(NSUInteger)arg0 ;
-(id)intentSlotVocabularyConceptsAtIndex:(NSUInteger)arg0 ;
-(void)addIntentSlotNames:(id)arg0 ;
-(void)addIntentSlotVocabularyConcepts:(id)arg0 ;
-(void)clearIntentSlotNames;
-(void)clearIntentSlotVocabularyConcepts;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif