// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSSCHEMAPLUSTMDCCORRECTEDPRONUNCIATIONTIER1_H
#define PLUSSCHEMAPLUSTMDCCORRECTEDPRONUNCIATIONTIER1_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSTMDCCorrectedPronunciationTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *firstNamePhonemes; // ivar: _firstNamePhonemes
@property (nonatomic) BOOL hasFirstNamePhonemes; // ivar: _hasFirstNamePhonemes
@property (nonatomic) BOOL hasLastNamePhonemes; // ivar: _hasLastNamePhonemes
@property (nonatomic) BOOL hasNicknamePhonemes; // ivar: _hasNicknamePhonemes
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *lastNamePhonemes; // ivar: _lastNamePhonemes
@property (copy, nonatomic) NSString *nicknamePhonemes; // ivar: _nicknamePhonemes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFirstNamePhonemes;
-(void)deleteLastNamePhonemes;
-(void)deleteNicknamePhonemes;
-(void)writeTo:(id)arg0 ;


@end


#endif