// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCCOMPOSITIONWAVEFORMDATASOURCE_H
#define RCCOMPOSITIONWAVEFORMDATASOURCE_H

@class NSString;
@protocol RCWaveformDataSourceObserver, OS_dispatch_queue;


#import "RCWaveformDataSource.h"
#import "_RCTimeRangeFileInputWaveformDataSource.h"
#import "RCComposition.h"

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    float _progressOfFinishedFragments;
    float _progressWeightPerFragment;
}


@property (retain) _RCTimeRangeFileInputWaveformDataSource *activeFragmentDataSource; // ivar: _activeFragmentDataSource
@property (readonly, nonatomic) RCComposition *composition; // ivar: _composition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightLastDecomposedFragment; // ivar: _highlightLastDecomposedFragment
@property (readonly, nonatomic) BOOL preferLoadingFragmentWaveforms; // ivar: _preferLoadingFragmentWaveforms
@property (nonatomic) BOOL saveGeneratedWaveform; // ivar: _saveGeneratedWaveform
@property (readonly) Class superclass;


-(BOOL)_synchronouslyAppendSegmentsFromDataSource:(id)arg0 ;
-(BOOL)shouldMergeLiveWaveform;
-(CGFloat)duration;
-(float)loadingProgress;
-(id)_dataSourceForAVContentURL:(id)arg0 isDecomposedFragment:(BOOL)arg1 sourceTimeRange:(struct ? )arg2 destinationTime:(CGFloat)arg3 ;
-(id)initWithComposition:(id)arg0 ;
-(id)saveableWaveform;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct ? )arg0 ;
-(struct ? )timeRangeToHighlight;
-(void)cancelLoading;
-(void)dealloc;
-(void)startLoading;
-(void)waveformDataSource:(id)arg0 didLoadWaveformSegment:(id)arg1 ;
-(void)waveformDataSourceDidFinishLoading:(id)arg0 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg0 error:(id)arg1 ;


@end


#endif