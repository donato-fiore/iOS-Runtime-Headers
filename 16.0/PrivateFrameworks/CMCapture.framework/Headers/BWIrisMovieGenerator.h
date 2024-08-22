// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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


+(void)initialize;
-(BOOL)flush;
-(BOOL)flushAsync;
-(id)initWithReadableByteStream:(struct OpaqueCMByteStream *)arg0 forFrontFacingCamera:(BOOL)arg1 sampleReferenceMoviesEnabled:(BOOL)arg2 movieGenerationQueue:(id)arg3 irisStillImageMovieMetadataCache:(id)arg4 videoOrientationTimeMachine:(id)arg5 ;
-(void)dealloc;
-(void)parseAdditionalFragments;
-(void)updateOverCaptureQualityScoresForMoviesEndingBefore:(struct ? )arg0 fromMetadataRingBuffer:(id)arg1 ;
-(void)writeMovieWithInfo:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif