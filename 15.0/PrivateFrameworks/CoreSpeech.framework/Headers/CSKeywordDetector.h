// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSKEYWORDDETECTOR_H
#define CSKEYWORDDETECTOR_H

@class CSAsset, NSString;
@protocol CSKeywordAnalyzerQuasarScoreDelegate, CSSpeechManagerDelegate, CSVoiceTriggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSKeywordAnalyzerQuasar.h"
#import "CSSpeechManager.h"

@interface CSKeywordDetector : NSObject <CSKeywordAnalyzerQuasarScoreDelegate, CSSpeechManagerDelegate>



@property (nonatomic) NSUInteger analyzedSampleCount; // ivar: _analyzedSampleCount
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger decisionWaitSampleCount; // ivar: _decisionWaitSampleCount
@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRunningRecognizer; // ivar: _isRunningRecognizer
@property (retain, nonatomic) CSKeywordAnalyzerQuasar *keywordAnalyzer; // ivar: _keywordAnalyzer
@property (nonatomic) float keywordThreshold; // ivar: _keywordThreshold
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) CSSpeechManager *speechManager; // ivar: _speechManager
@property (readonly) Class superclass;


-(id)initWithManager:(id)arg0 asset:(id)arg1 ;
-(void)_reset;
-(void)_setAsset:(id)arg0 ;
-(void)keywordAnalyzerQuasar:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)reset;
-(void)setAsset:(id)arg0 ;
-(void)speechManagerDidStartForwarding:(id)arg0 successfully:(BOOL)arg1 error:(id)arg2 ;
-(void)speechManagerDidStopForwarding:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)speechManagerLPCMRecordBufferAvailable:(id)arg0 chunk:(id)arg1 ;
-(void)speechManagerRecordBufferAvailable:(id)arg0 buffer:(id)arg1 ;
-(void)startDetectKeyword:(id)arg0 ;


@end


#endif