// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMADICTATIONALTERNATIVESPRESENT_H
#define SISCHEMADICTATIONALTERNATIVESPRESENT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaLocaleIdentifier.h"

@interface SISchemaDictationAlternativesPresent : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaLocaleIdentifier *alternativesLocale; // ivar: _alternativesLocale
@property (nonatomic) int countOfWordsUnderlined; // ivar: _countOfWordsUnderlined
@property (nonatomic) BOOL hasAlternativesLocale; // ivar: _hasAlternativesLocale
@property (nonatomic) BOOL hasCountOfWordsUnderlined;
@property (nonatomic) BOOL hasMultilingualIsLowConfidence;
@property (nonatomic) BOOL hasNumberOfUnderlines;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL multilingualIsLowConfidence; // ivar: _multilingualIsLowConfidence
@property (nonatomic) int numberOfUnderlines; // ivar: _numberOfUnderlines


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAlternativesLocale;
-(void)deleteCountOfWordsUnderlined;
-(void)deleteMultilingualIsLowConfidence;
-(void)deleteNumberOfUnderlines;
-(void)writeTo:(id)arg0 ;


@end


#endif