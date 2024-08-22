// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRSCHEMAASRRECOGNITIONMETRICS_H
#define ASRSCHEMAASRRECOGNITIONMETRICS_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "ASRSchemaASRRecognizerComponents.h"

@interface ASRSchemaASRRecognitionMetrics : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger audioDurationInNs; // ivar: _audioDurationInNs
@property (nonatomic) float averageActiveTokensPerFrame; // ivar: _averageActiveTokensPerFrame
@property (nonatomic) BOOL continuousListeningEnabled; // ivar: _continuousListeningEnabled
@property (nonatomic) float cpuRealTimeFactor; // ivar: _cpuRealTimeFactor
@property (nonatomic) NSUInteger eagerCustomerPerceivedLatencyInNs; // ivar: _eagerCustomerPerceivedLatencyInNs
@property (nonatomic) BOOL eagerEnabled; // ivar: _eagerEnabled
@property (nonatomic) BOOL hasAudioDurationInNs;
@property (nonatomic) BOOL hasAverageActiveTokensPerFrame;
@property (nonatomic) BOOL hasContinuousListeningEnabled;
@property (nonatomic) BOOL hasCpuRealTimeFactor;
@property (nonatomic) BOOL hasEagerCustomerPerceivedLatencyInNs;
@property (nonatomic) BOOL hasEagerEnabled;
@property (nonatomic) BOOL hasNumLanguageModelEnrollmentDataStreams;
@property (nonatomic) BOOL hasPersonalizedLanguageModelAgeInNs;
@property (nonatomic) BOOL hasPersonalizedLanguageModelWeight;
@property (nonatomic) BOOL hasRecognitionDurationInNs;
@property (nonatomic) BOOL hasRecognizerComponents; // ivar: _hasRecognizerComponents
@property (nonatomic) BOOL hasSignalToNoiseRatioInDecibels;
@property (nonatomic) BOOL hasUtteranceConcatenationEnabled;
@property (nonatomic) BOOL hasUtteranceDetectionEnabled;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *languageModelInterpolationWeights; // ivar: _languageModelInterpolationWeights
@property (nonatomic) unsigned int numLanguageModelEnrollmentDataStreams; // ivar: _numLanguageModelEnrollmentDataStreams
@property (nonatomic) NSUInteger personalizedLanguageModelAgeInNs; // ivar: _personalizedLanguageModelAgeInNs
@property (nonatomic) float personalizedLanguageModelWeight; // ivar: _personalizedLanguageModelWeight
@property (nonatomic) NSUInteger recognitionDurationInNs; // ivar: _recognitionDurationInNs
@property (retain, nonatomic) ASRSchemaASRRecognizerComponents *recognizerComponents; // ivar: _recognizerComponents
@property (nonatomic) float signalToNoiseRatioInDecibels; // ivar: _signalToNoiseRatioInDecibels
@property (nonatomic) BOOL utteranceConcatenationEnabled; // ivar: _utteranceConcatenationEnabled
@property (nonatomic) BOOL utteranceDetectionEnabled; // ivar: _utteranceDetectionEnabled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)languageModelInterpolationWeightsAtIndex:(NSUInteger)arg0 ;
-(void)addLanguageModelInterpolationWeights:(id)arg0 ;
-(void)clearLanguageModelInterpolationWeights;
-(void)writeTo:(id)arg0 ;


@end


#endif