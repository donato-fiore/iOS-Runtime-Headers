// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWIRISMOVIEGENERATOR_H
#define BWIRISMOVIEGENERATOR_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BWIrisStillImageMovieMetadataCache.h"
#import "BWVideoOrientationTimeMachine.h"
#import "BWLimitedGMErrorLogger.h"

@interface BWIrisMovieGenerator : NSObject {
    BOOL _sourceIsFrontFacingCamera;
    BOOL _sampleReferenceMoviesEnabled;
    ? _masterMovieDuration;
    *OpaqueCMByteStream _byteStream;
    *OpaqueFigFormatReader _masterMovieReader;
    BOOL _masterMovieParsingComplete;
    NSInteger _masterMovieAudioExtractionID;
    *OpaqueFigSimpleMutex _movieInfoAndCallbacksMutex;
    NSMutableArray *_movieInfoAndCallbacks;
    int _numberOfPendingReferenceMovies;
    NSObject<OS_dispatch_queue> *_movieGenerationQueue;
    BOOL _suspended;
    BWIrisStillImageMovieMetadataCache *_irisStillImageMovieMetadataCache;
    BWVideoOrientationTimeMachine *_videoOrientationTimeMachine;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}


@property (nonatomic) ? actualMovieStartTime; // ivar: _actualMovieStartTime
@property (readonly) int numberOfPendingReferenceMovies;
@property int streamForcedOffErrorCode; // ivar: _streamForcedOffErrorCode
@property BOOL suspended;
@property BOOL vitalInputStreamHasBeenForcedOff; // ivar: _vitalInputStreamHasBeenForcedOff


+(BOOL)_addNewMetadataTrackToAssetWriter:(struct OpaqueFigAssetWriter *)arg0 forTrackTimeScale:(int)arg1 yieldingTrackID:(*int)arg2 ;
+(void)initialize;
-(BOOL)_generateCompletedIrisMovies:(id)arg0 ;
-(BOOL)_generateIrisMovies:(BOOL)arg0 ;
-(BOOL)flush;
-(BOOL)flushAsync;
-(id)_completedMovieInfoAndCallbacksForShortestTrackDuration:(struct ? )arg0 audioTrackDuration:(struct ? )arg1 flush:(BOOL)arg2 ;
-(id)initWithReadableByteStream:(struct OpaqueCMByteStream *)arg0 forFrontFacingCamera:(BOOL)arg1 sampleReferenceMoviesEnabled:(BOOL)arg2 movieGenerationQueue:(id)arg3 irisStillImageMovieMetadataCache:(id)arg4 videoOrientationTimeMachine:(id)arg5 ;
-(id)initWithReadableByteStream:(struct OpaqueCMByteStream *)arg0 metadataByteStream:(struct OpaqueCMByteStream *)arg1 forFrontFacingCamera:(BOOL)arg2 sampleReferenceMoviesEnabled:(BOOL)arg3 movieGenerationQueue:(id)arg4 irisStillImageMovieMetadataCache:(id)arg5 videoOrientationTimeMachine:(id)arg6 ;
-(int)_doIrisMovieParsing:(BOOL)arg0 ;
-(int)_generateRefMovieForInfo:(id)arg0 movieLevelMetadata:(id)arg1 generateMetadataMovie:(BOOL)arg2 ;
-(int)_getAdjustedRefMovieEndTime:(struct ? )arg0 adjustedRefMovieEndTimeOut:(struct ? *)arg1 ;
-(int)_getAdjustedRefMovieStartTime:(struct ? )arg0 adjustedRefMovieStartTimeOut:(struct ? *)arg1 ;
-(struct ? )_determineMasterMovieStartTimeForInfo:(id)arg0 ;
-(void)_cancelAllPendingIrisMoviesWithError:(int)arg0 ;
-(void)_findIrisShortestTrackDuration:(struct ? *)arg0 audioTrackDuration:(struct ? *)arg1 flush:(BOOL)arg2 ;
-(void)dealloc;
-(void)parseAdditionalFragments;
-(void)updateOverCaptureQualityScoresForMoviesEndingBefore:(struct ? )arg0 fromMetadataRingBuffer:(id)arg1 ;
-(void)writeMovieWithInfo:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif