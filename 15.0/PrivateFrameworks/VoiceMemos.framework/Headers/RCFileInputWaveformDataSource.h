// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCFILEINPUTWAVEFORMDATASOURCE_H
#define RCFILEINPUTWAVEFORMDATASOURCE_H

@class NSURL;
@protocol OS_dispatch_queue;


#import "RCWaveformDataSource.h"

@interface RCFileInputWaveformDataSource : RCWaveformDataSource {
    NSObject<OS_dispatch_queue> *_serialQueue;
    CGFloat _cachedDuration;
    float _loadingProgress;
}


@property (readonly, copy, nonatomic) NSURL *AVFileURL; // ivar: _AVFileURL
@property (nonatomic) CGFloat destinationBeginTime; // ivar: _destinationBeginTime
@property (readonly, nonatomic) BOOL savesGeneratedWaveform;
@property (nonatomic) ? sourceTimeRange; // ivar: _sourceTimeRange


-(BOOL)setPaused:(BOOL)arg0 ;
-(BOOL)shouldMergeLiveWaveform;
-(CGFloat)duration;
-(float)loadingProgress;
-(id)initWithAVFileURL:(id)arg0 ;
-(id)initWithAVFileURL:(id)arg0 savesGeneratedWaveform:(BOOL)arg1 segmentFlushInterval:(CGFloat)arg2 ;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct ? )arg0 ;
-(void)finishLoadingWithCompletionTimeout:(NSUInteger)arg0 completionBlock:(id)arg1 ;
-(void)saveGeneratedWaveformIfNecessary;
-(void)setLoadingProgress:(float)arg0 ;
-(void)startLoading;


@end


#endif