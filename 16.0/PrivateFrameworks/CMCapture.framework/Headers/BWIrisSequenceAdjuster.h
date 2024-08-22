// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWIRISSEQUENCEADJUSTER_H
#define BWIRISSEQUENCEADJUSTER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "BWMotionDataPreserver.h"

@interface BWIrisSequenceAdjuster : NSObject {
    NSMutableArray *_discontinuities;
    ? _firstIrisAudioOffset;
    NSMutableArray *_interleavingQueues;
    ? _nextAdjustedVideoTime;
    *unsigned int _mediaTypes;
    NSMutableArray *_timeSkews;
    ? _masterMovieOriginalStartTime;
    ? _previewFrameDuration;
    ? _lastVideoAdjustedTime;
    BWMotionDataPreserver *_motionDataPreserver;
    BOOL _generateIFrames;
}


@property (nonatomic) int audioOffsetForOriginalStillImageTimeMaximumFrameLatency; // ivar: _audioOffsetForOriginalStillImageTimeMaximumFrameLatency
@property (nonatomic) ? masterMovieOriginalStartTime;
@property (readonly) NSUInteger maximumNumberOfPreDiscontinuityFramesNeededToSatisfyAllDropFrameRecipes;
@property (readonly) BOOL readyToReleaseAudio;


+(void)initialize;
-(BOOL)discontinuityExistsBetweenCurrentPTS:(struct ? )arg0 previousPTS:(struct ? )arg1 ;
-(id)initWithMediaTypes:(id)arg0 visMotionMetadataPreloadingEnabled:(BOOL)arg1 generateIFrames:(BOOL)arg2 ;
-(struct ? )adjustedTimeForStillImageTime:(struct ? )arg0 ;
-(struct ? )adjustedTimeForTime:(struct ? )arg0 ;
-(struct ? )audioOffsetForOriginalStillImageTime:(struct ? )arg0 ;
-(struct opaqueCMSampleBuffer *)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(NSInteger)arg0 ;
-(void)adjustMovieInfoTimes:(id)arg0 ;
-(void)dealloc;
-(void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forMediaTypeWithIndex:(NSInteger)arg1 ;
-(void)enqueueVideoBufferTime:(struct ? )arg0 nativeTime:(struct ? )arg1 isBracketFrame:(BOOL)arg2 isSISFrame:(BOOL)arg3 ;
-(void)reset;


@end


#endif