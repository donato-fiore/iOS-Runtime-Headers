// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBINTENTVOCABULARY_H
#define _INPBINTENTVOCABULARY_H

@class PBCodable, NSString, NSArray;
@protocol _INPBIntentVocabulary, NSSecureCoding, NSCopying;



@interface _INPBIntentVocabulary : PBCodable <_INPBIntentVocabulary, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *intentSlotVocabularyPolicies; // ivar: _intentSlotVocabularyPolicies
@property (readonly, nonatomic) NSUInteger intentSlotVocabularyPoliciesCount;
@property (copy, nonatomic) NSArray *intentTypePhrases; // ivar: _intentTypePhrases
@property (readonly, nonatomic) NSUInteger intentTypePhrasesCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)intentSlotVocabularyPoliciesAtIndex:(NSUInteger)arg0 ;
-(id)intentTypePhrasesAtIndex:(NSUInteger)arg0 ;
-(void)addIntentSlotVocabularyPolicies:(id)arg0 ;
-(void)addIntentTypePhrases:(id)arg0 ;
-(void)clearIntentSlotVocabularyPolicies;
-(void)clearIntentTypePhrases;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif