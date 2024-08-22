// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSCONTINUOUSVOICETRIGGER_H
#define CSCONTINUOUSVOICETRIGGER_H

@class CSAudioRecordContext, CSAudioTimeConverter, CSAsset, NSString;
@protocol CSKeywordAnalyzerNDAPIScoreDelegate, CSContinuousVoiceTriggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSKeywordAnalyzerNDAPI.h"

@interface CSContinuousVoiceTrigger : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate>



@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (nonatomic) NSUInteger analyzedSampleCount; // ivar: _analyzedSampleCount
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext; // ivar: _audioRecordContext
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // ivar: _audioTimeConverter
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSContinuousVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer; // ivar: _keywordAnalyzer
@property (nonatomic) float keywordThreshold; // ivar: _keywordThreshold
@property (nonatomic) float lastScore; // ivar: _lastScore
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger triggerEndSampleCount; // ivar: _triggerEndSampleCount
@property (nonatomic) NSUInteger twoShotDecisionWaitSamples; // ivar: _twoShotDecisionWaitSamples
@property (nonatomic) float twoShotThreshold; // ivar: _twoShotThreshold


-(id)init;
-(void)_keywordAnalyzerNDAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)_reset;
-(void)_setAsset:(id)arg0 ;
-(void)_shotAnalyzerNDAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)keywordAnalyzerNDAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)processAudioSamples:(id)arg0 ;
-(void)resetWithAudioRecordContext:(id)arg0 ;
-(void)setAsset:(id)arg0 ;
-(void)start;
-(void)startDetectTwoShot:(id)arg0 ;


@end


#endif