// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMADICTATIONALTERNATIVESELECTED_H
#define SISCHEMADICTATIONALTERNATIVESELECTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaLocaleIdentifier.h"

@interface SISchemaDictationAlternativeSelected : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int alternativeListPosition; // ivar: _alternativeListPosition
@property (retain, nonatomic) SISchemaLocaleIdentifier *alternativesLocale; // ivar: _alternativesLocale
@property (nonatomic) int countOfAlternativesAvailable; // ivar: _countOfAlternativesAvailable
@property (nonatomic) int countOfWordsReplaced; // ivar: _countOfWordsReplaced
@property (nonatomic) BOOL hasAlternativeListPosition;
@property (nonatomic) BOOL hasAlternativesLocale; // ivar: _hasAlternativesLocale
@property (nonatomic) BOOL hasCountOfAlternativesAvailable;
@property (nonatomic) BOOL hasCountOfWordsReplaced;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAlternativeListPosition;
-(void)deleteAlternativesLocale;
-(void)deleteCountOfAlternativesAvailable;
-(void)deleteCountOfWordsReplaced;
-(void)writeTo:(id)arg0 ;


@end


#endif