// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCWAVEFORMDATASOURCE_H
#define RCWAVEFORMDATASOURCE_H

@class NSString, NSURL, NSHashTable;
@protocol RCWaveformGeneratorSegmentOutputObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RCWaveform.h"
#import "RCWaveformGenerator.h"

@interface RCWaveformDataSource : NSObject <RCWaveformGeneratorSegmentOutputObserver>

 {
    CGFloat _liveRecordingMergeTime;
}


@property (readonly, nonatomic) RCWaveform *accumulatorWaveform; // ivar: _accumulatorWaveform
@property (readonly, nonatomic) CGFloat averagePowerLevelsRate;
@property (readonly, nonatomic) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) CGFloat durationPerWaveformSlice; // ivar: _durationPerWaveformSlice
@property (readonly, nonatomic) BOOL finished;
@property (readonly, nonatomic) NSURL *generatedWaveformOutputURL; // ivar: _generatedWaveformOutputURL
@property BOOL hasSavedGeneratedWaveform; // ivar: _hasSavedGeneratedWaveform
@property (readonly, nonatomic) BOOL hasStartedLoading; // ivar: _hasStartedLoading
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float loadingProgress;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? timeRangeToHighlight;
@property (readonly, nonatomic) RCWaveformGenerator *waveformGenerator; // ivar: _waveformGenerator
@property (readonly, nonatomic) NSHashTable *weakObservers; // ivar: _weakObservers


-(BOOL)setPaused:(BOOL)arg0 ;
-(BOOL)shouldMergeLiveWaveform;
-(BOOL)waitUntilFinished;
-(id)initWithWaveformGenerator:(id)arg0 generatedWaveformOutputURL:(id)arg1 ;
-(id)saveableWaveform;
-(id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg0 ;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct ? )arg0 ;
-(id)waveformSegmentsInTimeRange:(struct ? )arg0 ;
-(id)waveformSegmentsIntersectingTimeRange:(struct ? )arg0 ;
-(void)_performObserversBlock:(id)arg0 ;
-(void)_performOnObserversBlock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)beginLoading;
-(void)cancelLoading;
-(void)dealloc;
-(void)finishLoadingWithCompletionTimeout:(NSUInteger)arg0 completionBlock:(id)arg1 ;
-(void)mergeGeneratedWaveformIfNecessary;
-(void)removeObserver:(id)arg0 ;
-(void)saveGeneratedWaveformIfNecessary;
-(void)startLoading;
-(void)updateAccumulatorWaveformSegmentsWithBlock:(id)arg0 ;
-(void)waveformGenerator:(id)arg0 didLoadWaveformSegment:(id)arg1 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg0 error:(id)arg1 ;
-(void)waveformGeneratorWillBeginLoading:(id)arg0 ;


@end


#endif