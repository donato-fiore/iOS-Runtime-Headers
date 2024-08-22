// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DODMLASRSCHEMADODMLASRAUDIOFILERESULTTIER1_H
#define DODMLASRSCHEMADODMLASRAUDIOFILERESULTTIER1_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ASRSchemaASRRecognitionResultTier1.h"

@interface DODMLASRSchemaDODMLASRAudioFileResultTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasRecognitionResult; // ivar: _hasRecognitionResult
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ASRSchemaASRRecognitionResultTier1 *recognitionResult; // ivar: _recognitionResult


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteRecognitionResult;
-(void)writeTo:(id)arg0 ;


@end


#endif