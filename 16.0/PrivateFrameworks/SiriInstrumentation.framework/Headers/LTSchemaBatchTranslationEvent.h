// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LTSCHEMABATCHTRANSLATIONEVENT_H
#define LTSCHEMABATCHTRANSLATIONEVENT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "LTSchemaError.h"
#import "LTSchemaTask.h"

@interface LTSchemaBatchTranslationEvent : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int batchSeqNo; // ivar: _batchSeqNo
@property (retain, nonatomic) LTSchemaError *error; // ivar: _error
@property (nonatomic) BOOL hasBatchSeqNo;
@property (nonatomic) BOOL hasError; // ivar: _hasError
@property (nonatomic) BOOL hasNumParagraphFailures;
@property (nonatomic) BOOL hasNumberOfParagraphs;
@property (nonatomic) BOOL hasRequestID; // ivar: _hasRequestID
@property (nonatomic) BOOL hasResponseTimeMs;
@property (nonatomic) BOOL hasSessionID; // ivar: _hasSessionID
@property (nonatomic) BOOL hasSystemLocale; // ivar: _hasSystemLocale
@property (nonatomic) BOOL hasTask; // ivar: _hasTask
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numParagraphFailures; // ivar: _numParagraphFailures
@property (nonatomic) unsigned int numberOfParagraphs; // ivar: _numberOfParagraphs
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (nonatomic) unsigned int responseTimeMs; // ivar: _responseTimeMs
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (copy, nonatomic) NSString *systemLocale; // ivar: _systemLocale
@property (retain, nonatomic) LTSchemaTask *task; // ivar: _task


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBatchSeqNo;
-(void)deleteError;
-(void)deleteNumParagraphFailures;
-(void)deleteNumberOfParagraphs;
-(void)deleteRequestID;
-(void)deleteResponseTimeMs;
-(void)deleteSessionID;
-(void)deleteSystemLocale;
-(void)deleteTask;
-(void)writeTo:(id)arg0 ;


@end


#endif