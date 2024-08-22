// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSTMDCGROUNDTRUTH_H
#define PLUSSCHEMAPLUSTMDCGROUNDTRUTH_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "PLUSSchemaPLUSTMDCCorrectedPronunciationTier1.h"
#import "PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1.h"

@interface PLUSSchemaPLUSTMDCGroundTruth : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *asrPostItnLinkId; // ivar: _asrPostItnLinkId
@property (retain, nonatomic) SISchemaUUID *asrRawRecognitionLinkId; // ivar: _asrRawRecognitionLinkId
@property (retain, nonatomic) PLUSSchemaPLUSTMDCCorrectedPronunciationTier1 *correctedPronunciation; // ivar: _correctedPronunciation
@property (retain, nonatomic) SISchemaUUID *groundTruthId; // ivar: _groundTruthId
@property (nonatomic) BOOL hasAsrPostItnLinkId; // ivar: _hasAsrPostItnLinkId
@property (nonatomic) BOOL hasAsrRawRecognitionLinkId; // ivar: _hasAsrRawRecognitionLinkId
@property (nonatomic) BOOL hasCorrectedPronunciation; // ivar: _hasCorrectedPronunciation
@property (nonatomic) BOOL hasGroundTruthId; // ivar: _hasGroundTruthId
@property (nonatomic) BOOL hasIsCorrectionEligible;
@property (nonatomic) BOOL hasIsTTSMispronounced;
@property (nonatomic) BOOL hasIsTmdcPluginEnabled;
@property (nonatomic) BOOL hasPhonemesToPhonemesDistance;
@property (nonatomic) BOOL hasSelfLogSource;
@property (nonatomic) BOOL hasSiriCurrentPronunciation; // ivar: _hasSiriCurrentPronunciation
@property (nonatomic) BOOL hasTtsCurrentPhonemes; // ivar: _hasTtsCurrentPhonemes
@property (nonatomic) BOOL hasTtsSuggestedPhonemes; // ivar: _hasTtsSuggestedPhonemes
@property (nonatomic) BOOL isCorrectionEligible; // ivar: _isCorrectionEligible
@property (nonatomic) BOOL isTTSMispronounced; // ivar: _isTTSMispronounced
@property (nonatomic) BOOL isTmdcPluginEnabled; // ivar: _isTmdcPluginEnabled
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat phonemesToPhonemesDistance; // ivar: _phonemesToPhonemesDistance
@property (nonatomic) int selfLogSource; // ivar: _selfLogSource
@property (retain, nonatomic) PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1 *siriCurrentPronunciation; // ivar: _siriCurrentPronunciation
@property (copy, nonatomic) NSString *ttsCurrentPhonemes; // ivar: _ttsCurrentPhonemes
@property (copy, nonatomic) NSString *ttsSuggestedPhonemes; // ivar: _ttsSuggestedPhonemes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAsrPostItnLinkId;
-(void)deleteAsrRawRecognitionLinkId;
-(void)deleteCorrectedPronunciation;
-(void)deleteGroundTruthId;
-(void)deleteIsCorrectionEligible;
-(void)deleteIsTTSMispronounced;
-(void)deleteIsTmdcPluginEnabled;
-(void)deletePhonemesToPhonemesDistance;
-(void)deleteSelfLogSource;
-(void)deleteSiriCurrentPronunciation;
-(void)deleteTtsCurrentPhonemes;
-(void)deleteTtsSuggestedPhonemes;
-(void)writeTo:(id)arg0 ;


@end


#endif