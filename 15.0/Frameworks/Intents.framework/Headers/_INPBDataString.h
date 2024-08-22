// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBDATASTRING_H
#define _INPBDATASTRING_H

@class PBCodable, NSArray, NSString;
@protocol _INPBDataString, NSSecureCoding, NSCopying;



@interface _INPBDataString : PBCodable <_INPBDataString, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *alternatives; // ivar: _alternatives
@property (readonly, nonatomic) NSUInteger alternativesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLocalizedValue;
@property (readonly, nonatomic) BOOL hasPronunciationHint;
@property (readonly, nonatomic) BOOL hasVocabularyIdentifier;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localizedValue; // ivar: _localizedValue
@property (copy, nonatomic) NSString *pronunciationHint; // ivar: _pronunciationHint
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *vocabularyIdentifier; // ivar: _vocabularyIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)alternativesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addAlternatives:(id)arg0 ;
-(void)clearAlternatives;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif