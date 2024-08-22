// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAUSERSPEECHDURATION_H
#define SISCHEMAUSERSPEECHDURATION_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaUserSpeechDuration : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSInteger durationMs; // ivar: _durationMs
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasResultCandidateId; // ivar: _hasResultCandidateId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDurationMs;
-(void)deleteResultCandidateId;
-(void)writeTo:(id)arg0 ;


@end


#endif