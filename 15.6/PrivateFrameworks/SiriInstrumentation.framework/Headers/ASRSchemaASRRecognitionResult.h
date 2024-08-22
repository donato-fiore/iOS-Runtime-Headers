// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASRSCHEMAASRRECOGNITIONRESULT_H
#define ASRSCHEMAASRRECOGNITIONRESULT_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface ASRSchemaASRRecognitionResult : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *phrases; // ivar: _phrases
@property (copy, nonatomic) NSArray *utterances; // ivar: _utterances


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)phrasesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)utterancesAtIndex:(NSUInteger)arg0 ;
-(void)addPhrases:(id)arg0 ;
-(void)addUtterances:(id)arg0 ;
-(void)clearPhrases;
-(void)clearUtterances;
-(void)deleteLinkId;
-(void)deletePhrases;
-(void)deleteUtterances;
-(void)writeTo:(id)arg0 ;


@end


#endif