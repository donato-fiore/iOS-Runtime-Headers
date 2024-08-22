// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBINTENTTYPEPHRASES_H
#define _INPBINTENTTYPEPHRASES_H

@class PBCodable, NSString, NSArray;
@protocol _INPBIntentTypePhrases, NSSecureCoding, NSCopying;


#import "_INPBIntentType.h"

@interface _INPBIntentTypePhrases : PBCodable <_INPBIntentTypePhrases, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentType *intentType; // ivar: _intentType
@property (copy, nonatomic) NSArray *intentVocabularyExamples; // ivar: _intentVocabularyExamples
@property (readonly, nonatomic) NSUInteger intentVocabularyExamplesCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)intentVocabularyExamplesAtIndex:(NSUInteger)arg0 ;
-(void)addIntentVocabularyExamples:(id)arg0 ;
-(void)clearIntentVocabularyExamples;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif