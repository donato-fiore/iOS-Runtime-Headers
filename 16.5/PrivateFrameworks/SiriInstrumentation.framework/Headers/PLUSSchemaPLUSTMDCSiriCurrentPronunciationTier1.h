// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSTMDCSIRICURRENTPRONUNCIATIONTIER1_H
#define PLUSSCHEMAPLUSTMDCSIRICURRENTPRONUNCIATIONTIER1_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1 : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasPhonemes; // ivar: _hasPhonemes
@property (nonatomic) BOOL hasSource;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *phonemes; // ivar: _phonemes
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deletePhonemes;
-(void)deleteSource;
-(void)writeTo:(id)arg0 ;


@end


#endif