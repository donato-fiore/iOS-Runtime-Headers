// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVLLISTENENGINE_H
#define TVLLISTENENGINE_H

@class AVAudioEngine, NSMutableArray, NSString, SNEstimateAudioOffsetRequest, AVAudioFile, NSDate, AVAudioInputNode, AVAudioUnit, AVAudioPlayerNode, SNAudioStreamAnalyzer;
@protocol SNResultsObserving, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface TVLListenEngine : NSObject <SNResultsObserving>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analysisQueue; // ivar: _analysisQueue
@property (retain, nonatomic) AVAudioEngine *audioEngine; // ivar: _audioEngine
@property (copy, nonatomic) id *callback; // ivar: _callback
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSMutableArray *confidentResults; // ivar: _confidentResults
@property (nonatomic) NSInteger convergenceLossCount; // ivar: _convergenceLossCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didMissDeadline; // ivar: _didMissDeadline
@property (retain, nonatomic) SNEstimateAudioOffsetRequest *estimateAudioOffsetRequest; // ivar: _estimateAudioOffsetRequest
@property (retain, nonatomic) AVAudioFile *file; // ivar: _file
@property (retain, nonatomic) NSDate *firstObservationDate; // ivar: _firstObservationDate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastObservationWasConfident; // ivar: _lastObservationWasConfident
@property (retain, nonatomic) AVAudioInputNode *microphone; // ivar: _microphone
@property (retain, nonatomic) AVAudioUnit *mixer; // ivar: _mixer
@property (retain, nonatomic) AVAudioPlayerNode *player; // ivar: _player
@property (retain, nonatomic) SNAudioStreamAnalyzer *streamAnalyzer; // ivar: _streamAnalyzer
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeToConverge; // ivar: _timeToConverge
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


+(void)engineWithCompletion:(id)arg0 ;
+(void)invalidate;
-(BOOL)_setupAndStartAudioEngineGraphWithTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)_setupAndStartAudioSessionWithError:(*id)arg0 ;
// -(BOOL)startListeningWithReferenceTone:(id)arg0 at:(NSUInteger)arg1 saveToFile:(id)arg2 withCallback:(id)arg3 completion:(unk)arg4  ;
-(CGFloat)medianOfSortedArray:(id)arg0 ;
-(id)init;
-(void)_handleIterruption:(id)arg0 ;
-(void)_splitMicrophoneAndReferenceToneChannels;
-(void)completeAnalysis;
-(void)invalidate;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)requestDidComplete:(id)arg0 ;


@end


#endif