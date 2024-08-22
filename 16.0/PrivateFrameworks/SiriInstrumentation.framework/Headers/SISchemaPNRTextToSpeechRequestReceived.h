// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAPNRTEXTTOSPEECHREQUESTRECEIVED_H
#define SISCHEMAPNRTEXTTOSPEECHREQUESTRECEIVED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaPNRTextToSpeechRequestReceived : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsSynthesisCached;
@property (nonatomic) BOOL hasIsWarmStart;
@property (nonatomic) BOOL hasSourceOfTTS;
@property (nonatomic) BOOL hasSpeechError;
@property (nonatomic) BOOL hasVoiceAssetKey; // ivar: _hasVoiceAssetKey
@property (nonatomic) BOOL hasVoiceResourceAssetKey; // ivar: _hasVoiceResourceAssetKey
@property (nonatomic) BOOL isSynthesisCached; // ivar: _isSynthesisCached
@property (nonatomic) BOOL isWarmStart; // ivar: _isWarmStart
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int sourceOfTTS; // ivar: _sourceOfTTS
@property (nonatomic) int speechError; // ivar: _speechError
@property (copy, nonatomic) NSString *voiceAssetKey; // ivar: _voiceAssetKey
@property (copy, nonatomic) NSString *voiceResourceAssetKey; // ivar: _voiceResourceAssetKey


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsSynthesisCached;
-(void)deleteIsWarmStart;
-(void)deleteSourceOfTTS;
-(void)deleteSpeechError;
-(void)deleteVoiceAssetKey;
-(void)deleteVoiceResourceAssetKey;
-(void)writeTo:(id)arg0 ;


@end


#endif