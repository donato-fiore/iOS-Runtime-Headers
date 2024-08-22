// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSSCHEMATTSSPEECHSTARTED_H
#define TTSSCHEMATTSSPEECHSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "TTSSchemaTTSAudioInterface.h"
#import "TTSSchemaTTSVoiceContext.h"

@interface TTSSchemaTTSSpeechStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) TTSSchemaTTSAudioInterface *audioInterface; // ivar: _audioInterface
@property (nonatomic) int audioOutputRoute; // ivar: _audioOutputRoute
@property (nonatomic) float customerPerceivedLatencyInSecond; // ivar: _customerPerceivedLatencyInSecond
@property (nonatomic) BOOL hasAudioInterface; // ivar: _hasAudioInterface
@property (nonatomic) BOOL hasAudioOutputRoute;
@property (nonatomic) BOOL hasCustomerPerceivedLatencyInSecond;
@property (nonatomic) BOOL hasSynthesisEffect;
@property (nonatomic) BOOL hasSynthesisSource;
@property (nonatomic) BOOL hasVoiceContext; // ivar: _hasVoiceContext
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int synthesisEffect; // ivar: _synthesisEffect
@property (nonatomic) int synthesisSource; // ivar: _synthesisSource
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *voiceContext; // ivar: _voiceContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAudioInterface;
-(void)deleteAudioOutputRoute;
-(void)deleteCustomerPerceivedLatencyInSecond;
-(void)deleteSynthesisEffect;
-(void)deleteSynthesisSource;
-(void)deleteVoiceContext;
-(void)writeTo:(id)arg0 ;


@end


#endif