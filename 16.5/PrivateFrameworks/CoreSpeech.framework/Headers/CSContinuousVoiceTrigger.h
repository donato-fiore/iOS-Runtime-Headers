// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCONTINUOUSVOICETRIGGER_H
#define CSCONTINUOUSVOICETRIGGER_H

@class CSAudioRecordContext, CSAudioTimeConverter, CSAsset, CSContinuousVoiceTriggerConfig, CSKeywordAnalyzerNDAPI, NSMutableDictionary;
@protocol CSContinuousVoiceTriggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSContinuousVoiceTrigger : NSObject

@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (nonatomic) NSUInteger analyzedSampleCount; // ivar: _analyzedSampleCount
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext; // ivar: _audioRecordContext
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // ivar: _audioTimeConverter
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (retain, nonatomic) CSContinuousVoiceTriggerConfig *cvtConfig; // ivar: _cvtConfig
@property (weak, nonatomic) NSObject<CSContinuousVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hasResetShotAnalyzerBestScore; // ivar: _hasResetShotAnalyzerBestScore
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer; // ivar: _keywordAnalyzer
@property (nonatomic) float keywordThreshold; // ivar: _keywordThreshold
@property (retain, nonatomic) NSMutableDictionary *lastVoiceTriggerScores; // ivar: _lastVoiceTriggerScores
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSUInteger triggerEndSampleCount; // ivar: _triggerEndSampleCount
@property (nonatomic) NSUInteger twoShotDecisionWaitSamples; // ivar: _twoShotDecisionWaitSamples
@property (nonatomic) float twoShotThreshold; // ivar: _twoShotThreshold


-(id)init;
-(void)_keywordAnalyzerNDAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 lastVoiceTriggerScore:(float)arg3 phId:(NSUInteger)arg4 ;
-(void)_reset;
-(void)_setAsset:(id)arg0 ;
-(void)_shotAnalyzerNDAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)processAudioSamples:(id)arg0 ;
-(void)resetWithAudioRecordContext:(id)arg0 ;
-(void)setAsset:(id)arg0 ;
-(void)start;
-(void)startDetectTwoShot:(id)arg0 ;


@end


#endif