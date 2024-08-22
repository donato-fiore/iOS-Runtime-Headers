// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBINTENTSLOTVOCABULARYVALUE_H
#define _INPBINTENTSLOTVOCABULARYVALUE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBIntentSlotVocabularyValue, NSSecureCoding, NSCopying;



@interface _INPBIntentSlotVocabularyValue : PBCodable <_INPBIntentSlotVocabularyValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *examples; // ivar: _examples
@property (readonly, nonatomic) NSUInteger examplesCount;
@property (readonly, nonatomic) BOOL hasPhrase;
@property (readonly, nonatomic) BOOL hasPronunciation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *phrase; // ivar: _phrase
@property (copy, nonatomic) NSString *pronunciation; // ivar: _pronunciation
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)examplesAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addExamples:(id)arg0 ;
-(void)clearExamples;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif