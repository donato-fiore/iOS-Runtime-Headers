// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMDATASONIFIER_H
#define AXMDATASONIFIER_H

@class NSMutableOrderedSet, NSTimer, NSPointerArray;

#import <Foundation/Foundation.h>

#import "AXMLiveContinuousTone.h"
#import "AXMChartDescriptor.h"
#import "AXMDataSeriesDescriptor.h"
#import "AXMAudioDataSource.h"
#import "AXMAudioDataSourceMixer.h"
#import "AXMSynthPatch.h"

@interface AXMDataSonifier : NSObject {
    *OpaqueAudioComponentInstance _audioUnit;
}


@property (readonly, nonatomic) AXMLiveContinuousTone *continuousScrubbingTone; // ivar: _continuousScrubbingTone
@property (retain, nonatomic) AXMChartDescriptor *currentChartDescriptor; // ivar: _currentChartDescriptor
@property (readonly, nonatomic) CGFloat currentPlaybackPosition;
@property (readonly, nonatomic) AXMDataSeriesDescriptor *currentSeries;
@property (nonatomic) NSInteger currentSeriesIndex; // ivar: _currentSeriesIndex
@property (readonly, nonatomic) NSMutableOrderedSet *dataCategories; // ivar: _dataCategories
@property (readonly, nonatomic) int dataMode; // ivar: _dataMode
@property (readonly, nonatomic) id *function; // ivar: _function
@property (readonly, nonatomic) int interpolationMode; // ivar: _interpolationMode
@property (readonly, nonatomic) BOOL isEndingScrubbing; // ivar: _isEndingScrubbing
@property (readonly, nonatomic) BOOL isInLiveContinuousToneSession; // ivar: _isInLiveContinuousToneSession
@property (readonly, nonatomic) BOOL isPaused; // ivar: _paused
@property (readonly, nonatomic) BOOL isPlaying; // ivar: _playing
@property (readonly, nonatomic) BOOL isScrubbing; // ivar: _scrubbing
@property (retain, nonatomic) AXMAudioDataSource *liveContinuousAudioDataSource; // ivar: _liveContinuousAudioDataSource
@property (readonly, nonatomic) AXMLiveContinuousTone *liveContinuousDataTone; // ivar: _liveContinuousDataTone
@property (retain, nonatomic) AXMAudioDataSourceMixer *liveContinuousMixerDataSource; // ivar: _liveContinuousMixerDataSource
@property (readonly, nonatomic) *void liveTonePlaybackCallbackRenderingContext; // ivar: _liveTonePlaybackCallbackRenderingContext
@property (nonatomic) CGFloat masterVolume;
@property (nonatomic) CGFloat maximumDiscreteToneLength; // ivar: _maximumDiscreteToneLength
@property (nonatomic) CGFloat maximumPlaybackFrequency; // ivar: _maximumPlaybackFrequency
@property (nonatomic) CGFloat maximumToneVolume; // ivar: _maximumToneVolume
@property (nonatomic) CGFloat minimumDiscreteToneLength; // ivar: _minimumDiscreteToneLength
@property (nonatomic) CGFloat minimumPlaybackFrequency; // ivar: _minimumPlaybackFrequency
@property (nonatomic) CGFloat minimumToneVolume; // ivar: _minimumToneVolume
@property (retain, nonatomic) AXMSynthPatch *patch; // ivar: _patch
@property (retain, nonatomic) AXMAudioDataSource *playbackChartDataAudioDataSource; // ivar: _playbackChartDataAudioDataSource
@property (nonatomic) CGFloat playbackDuration; // ivar: _playbackDuration
@property (retain, nonatomic) AXMAudioDataSourceMixer *playbackMixerDataSource; // ivar: _playbackMixerDataSource
@property (retain, nonatomic) NSTimer *playbackObserverUpdateTimer; // ivar: _playbackObserverUpdateTimer
@property (retain, nonatomic) NSPointerArray *playbackObservers; // ivar: _playbackObservers
@property (readonly, nonatomic) NSUInteger playbackSampleCount; // ivar: _playbackSampleCount
@property (retain, nonatomic) AXMAudioDataSource *playbackTrendlineAudioDataSource; // ivar: _playbackTrendlineAudioDataSource
@property (retain, nonatomic) AXMAudioDataSource *scrubbingContinuousAudioDataSource; // ivar: _scrubbingContinuousAudioDataSource
@property (retain, nonatomic) AXMAudioDataSource *scrubbingDiscreteAudioDataSource; // ivar: _scrubbingDiscreteAudioDataSource
@property (readonly, nonatomic) *void scrubbingDiscreteDataRenderingContext; // ivar: _scrubbingDiscreteDataRenderingContext
@property (retain, nonatomic) AXMAudioDataSourceMixer *scrubbingMixerDataSource; // ivar: _scrubbingMixerDataSource
@property (readonly, nonatomic) *void scrubbingPlaybackCallbackRenderingContext; // ivar: _scrubbingPlaybackCallbackRenderingContext
@property (retain, nonatomic) AXMAudioDataSource *scrubbingTrendlineAudioDataSource; // ivar: _scrubbingTrendlineAudioDataSource
@property (copy, nonatomic) id *trendlineFunction; // ivar: _trendlineFunction
@property (readonly, nonatomic) AXMLiveContinuousTone *trendlineScrubbingTone; // ivar: _trendlineScrubbingTone
@property (nonatomic) BOOL usesBinauralPanning; // ivar: _usesBinauralPanning


+(id)sharedInstance;
-(BOOL)_initializeAudioComponent;
-(BOOL)_initializeAudioUnit;
-(BOOL)_setAudioFormat;
-(BOOL)_setOutputCallback;
-(BOOL)_uninitializeAudioUnit;
-(BOOL)series:(id)arg0 hasContinuousPitchDataForTimePosition:(CGFloat)arg1 ;
-(CGFloat)durationForDurationEncodingValue:(CGFloat)arg0 ;
-(CGFloat)frequencyForPitchEncodingValue:(CGFloat)arg0 ;
-(CGFloat)interpolatedPitchValueForNormalizedTimePosition:(CGFloat)arg0 inSeries:(id)arg1 ;
-(CGFloat)normalizedTimeEncodingValueForValue:(id)arg0 ;
-(CGFloat)normalizedValueForValue:(CGFloat)arg0 min:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(CGFloat)timeOffsetForTimeEncodingValue:(id)arg0 ;
-(CGFloat)valueFromNormalizedValue:(CGFloat)arg0 min:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(CGFloat)volumeForVolumeEncodingValue:(CGFloat)arg0 ;
-(NSUInteger)sampleIndexForTimeOffset:(CGFloat)arg0 ;
-(id)_newContinuousToneEnvelope;
-(id)init;
-(void)_initializeAXMAudioDataSources;
-(void)_initializeLiveToneDataSource;
-(void)_peakNormalizeBuffer:(*void)arg0 length:(NSUInteger)arg1 level:(CGFloat)arg2 ;
-(void)_regenerateTimeEncodingValuesForDataPoints;
-(void)_renderContinuousAudioForSeries:(id)arg0 ;
-(void)_renderDiscreteAudioForSeries:(id)arg0 ;
-(void)_renderSeries:(id)arg0 ;
-(void)_renderUnivariateFunctionAudio;
-(void)addPlaybackObserver:(id)arg0 ;
-(void)beginLiveContinuousToneSession;
-(void)beginScrubbing;
-(void)dealloc;
-(void)endLiveContinuousToneSession;
-(void)endScrubbing;
-(void)pause;
-(void)play;
-(void)removePlaybackObserver:(id)arg0 ;
-(void)renderSonification;
-(void)scrubToPlaybackFrame:(NSUInteger)arg0 ;
-(void)setLiveContinuousToneNormalizedFrequency:(CGFloat)arg0 ;
-(void)setPlaybackPosition:(CGFloat)arg0 ;
-(void)stopPlaying;
-(void)stopScrubbing;


@end


#endif