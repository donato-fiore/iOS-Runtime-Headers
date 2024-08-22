// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRIVOICETRIGGERSTATISTICS_H
#define BMSIRIVOICETRIGGERSTATISTICS_H

@class BMEventBase, NSDate, NSString;
@protocol BMStoreData;



@interface BMSiriVoiceTriggerStatistics : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_absoluteTimestamp;
    CGFloat _raw_absoluteTimestamp;
}


@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat firstPassPeakScoreHS; // ivar: _firstPassPeakScoreHS
@property (readonly, nonatomic) CGFloat firstPassPeakScoreJS; // ivar: _firstPassPeakScoreJS
@property (readonly, nonatomic) int firstPassTriggerSource; // ivar: _firstPassTriggerSource
@property (nonatomic) BOOL hasFirstPassPeakScoreHS; // ivar: _hasFirstPassPeakScoreHS
@property (nonatomic) BOOL hasFirstPassPeakScoreJS; // ivar: _hasFirstPassPeakScoreJS
@property (nonatomic) BOOL hasFirstPassTriggerSource; // ivar: _hasFirstPassTriggerSource
@property (nonatomic) BOOL hasHwSampleRate; // ivar: _hasHwSampleRate
@property (nonatomic) BOOL hasInvocationTypeID; // ivar: _hasInvocationTypeID
@property (nonatomic) BOOL hasKeywordThresholdHS; // ivar: _hasKeywordThresholdHS
@property (nonatomic) BOOL hasKeywordThresholdJS; // ivar: _hasKeywordThresholdJS
@property (nonatomic) BOOL hasMitigationScore; // ivar: _hasMitigationScore
@property (nonatomic) BOOL hasRecognizerScoreHS; // ivar: _hasRecognizerScoreHS
@property (nonatomic) BOOL hasRecognizerScoreJS; // ivar: _hasRecognizerScoreJS
@property (nonatomic) BOOL hasRepetitionSimilarityScore; // ivar: _hasRepetitionSimilarityScore
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedScore; // ivar: _hasTdSpeakerRecognizerCombinedScore
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedThresholdHS; // ivar: _hasTdSpeakerRecognizerCombinedThresholdHS
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedThresholdJS; // ivar: _hasTdSpeakerRecognizerCombinedThresholdJS
@property (nonatomic) BOOL hasTriggerScoreHS; // ivar: _hasTriggerScoreHS
@property (nonatomic) BOOL hasTriggerScoreJS; // ivar: _hasTriggerScoreJS
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat hwSampleRate; // ivar: _hwSampleRate
@property (readonly, nonatomic) int invocationTypeID; // ivar: _invocationTypeID
@property (readonly, nonatomic) CGFloat keywordThresholdHS; // ivar: _keywordThresholdHS
@property (readonly, nonatomic) CGFloat keywordThresholdJS; // ivar: _keywordThresholdJS
@property (readonly, nonatomic) CGFloat mitigationScore; // ivar: _mitigationScore
@property (readonly, nonatomic) CGFloat recognizerScoreHS; // ivar: _recognizerScoreHS
@property (readonly, nonatomic) CGFloat recognizerScoreJS; // ivar: _recognizerScoreJS
@property (readonly, nonatomic) CGFloat repetitionSimilarityScore; // ivar: _repetitionSimilarityScore
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat tdSpeakerRecognizerCombinedScore; // ivar: _tdSpeakerRecognizerCombinedScore
@property (readonly, nonatomic) CGFloat tdSpeakerRecognizerCombinedThresholdHS; // ivar: _tdSpeakerRecognizerCombinedThresholdHS
@property (readonly, nonatomic) CGFloat tdSpeakerRecognizerCombinedThresholdJS; // ivar: _tdSpeakerRecognizerCombinedThresholdJS
@property (readonly, nonatomic) CGFloat triggerScoreHS; // ivar: _triggerScoreHS
@property (readonly, nonatomic) CGFloat triggerScoreJS; // ivar: _triggerScoreJS


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithAbsoluteTimestamp:(id)arg0 firstPassPeakScoreHS:(id)arg1 firstPassPeakScoreJS:(id)arg2 firstPassTriggerSource:(id)arg3 recognizerScoreHS:(id)arg4 recognizerScoreJS:(id)arg5 triggerScoreHS:(id)arg6 triggerScoreJS:(id)arg7 mitigationScore:(id)arg8 invocationTypeID:(id)arg9 repetitionSimilarityScore:(id)arg10 tdSpeakerRecognizerCombinedScore:(id)arg11 hwSampleRate:(id)arg12 configVersion:(id)arg13 keywordThresholdHS:(id)arg14 keywordThresholdJS:(id)arg15 tdSpeakerRecognizerCombinedThresholdHS:(id)arg16 tdSpeakerRecognizerCombinedThresholdJS:(id)arg17 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif