// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSSCHEMATTSSPEECHENDED_H
#define TTSSCHEMATTSSPEECHENDED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface TTSSchemaTTSSpeechEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *errorCodes; // ivar: _errorCodes
@property (nonatomic) BOOL hasPromptCount;
@property (nonatomic) BOOL hasSynthesisLatencyInSecond;
@property (nonatomic) BOOL hasSynthesisRealTimeFactor;
@property (nonatomic) BOOL hasSynthesizedAudioDurationInSecond;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int promptCount; // ivar: _promptCount
@property (nonatomic) float synthesisLatencyInSecond; // ivar: _synthesisLatencyInSecond
@property (nonatomic) float synthesisRealTimeFactor; // ivar: _synthesisRealTimeFactor
@property (nonatomic) float synthesizedAudioDurationInSecond; // ivar: _synthesizedAudioDurationInSecond


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)errorCodesAtIndex:(NSUInteger)arg0 ;
-(void)addErrorCodes:(int)arg0 ;
-(void)clearErrorCodes;
-(void)deleteErrorCodes;
-(void)deletePromptCount;
-(void)deleteSynthesisLatencyInSecond;
-(void)deleteSynthesisRealTimeFactor;
-(void)deleteSynthesizedAudioDurationInSecond;
-(void)writeTo:(id)arg0 ;


@end


#endif