// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISETUPSCHEMASIRISETUPPHSENROLLMENTUTTERANCECOMPLETED_H
#define SIRISETUPSCHEMASIRISETUPPHSENROLLMENTUTTERANCECOMPLETED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int endSampleCount; // ivar: _endSampleCount
@property (nonatomic) BOOL hasEndSampleCount;
@property (nonatomic) BOOL hasHasSpeechDetected;
@property (nonatomic) BOOL hasPageNumber;
@property (nonatomic) BOOL hasPhraseId; // ivar: _hasPhraseId
@property (nonatomic) BOOL hasSpeechDetected; // ivar: _hasSpeechDetected
@property (nonatomic) BOOL hasStartSampleCount;
@property (nonatomic) BOOL hasTopScoreForUtterance;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int pageNumber; // ivar: _pageNumber
@property (copy, nonatomic) NSString *phraseId; // ivar: _phraseId
@property (nonatomic) unsigned int startSampleCount; // ivar: _startSampleCount
@property (nonatomic) float topScoreForUtterance; // ivar: _topScoreForUtterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEndSampleCount;
-(void)deleteHasSpeechDetected;
-(void)deletePageNumber;
-(void)deletePhraseId;
-(void)deleteStartSampleCount;
-(void)deleteTopScoreForUtterance;
-(void)writeTo:(id)arg0 ;


@end


#endif