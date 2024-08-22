// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPINSTSCHEMACLPCDMREPLAYSAMPLESTARTED_H
#define CLPINSTSCHEMACLPCDMREPLAYSAMPLESTARTED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface CLPInstSchemaCLPCDMReplaySampleStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasOriginalRequestId; // ivar: _hasOriginalRequestId
@property (nonatomic) BOOL hasResultCandidateId; // ivar: _hasResultCandidateId
@property (nonatomic) BOOL hasUtteranceRepetitionsInCalendarWeek;
@property (nonatomic) BOOL hasWasHabitualUserDuringCalendarWeek;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalRequestId; // ivar: _originalRequestId
@property (copy, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId
@property (nonatomic) unsigned int utteranceRepetitionsInCalendarWeek; // ivar: _utteranceRepetitionsInCalendarWeek
@property (nonatomic) BOOL wasHabitualUserDuringCalendarWeek; // ivar: _wasHabitualUserDuringCalendarWeek


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteOriginalRequestId;
-(void)deleteResultCandidateId;
-(void)deleteUtteranceRepetitionsInCalendarWeek;
-(void)deleteWasHabitualUserDuringCalendarWeek;
-(void)writeTo:(id)arg0 ;


@end


#endif