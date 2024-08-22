// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETWRITERINPUTWRITINGHELPER_H
#define AVASSETWRITERINPUTWRITINGHELPER_H

@class NSString;
@protocol AVAssetWriterInputMediaDataRequesterDelegate, AVWeakObservable, AVKeyPathDependencyHost, OS_dispatch_queue;


#import "AVAssetWriterInputHelper.h"
#import "AVAssetWriterInputMediaDataRequester.h"
#import "AVKeyPathDependencyManager.h"
#import "AVFigAssetWriterTrack.h"
#import "AVAssetWriterInputPassDescription.h"

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate, AVWeakObservable, AVKeyPathDependencyHost>

 {
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
    BOOL _observingSelf;
    *__CVPixelBufferPool _pixelBufferPool;
    AVKeyPathDependencyManager *_keyPathDependencyManager;
    NSObject<OS_dispatch_queue> *_mediaDataRequesterSerialQueue;
    NSObject<OS_dispatch_queue> *_readyForMoreMediaDataObserverSerialQueue;
}


@property (readonly, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack; // ivar: _assetWriterTrack
@property (retain, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription; // ivar: _currentPassDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ? )arg1 ;
-(BOOL)canPerformMultiplePasses;
-(BOOL)isReadyForMoreMediaData;
-(BOOL)mediaDataRequesterShouldRequestMediaData;
-(BOOL)prepareToFinishWritingReturningError:(*id)arg0 ;
-(NSInteger)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(NSInteger)status;
-(id)initWithConfigurationState:(id)arg0 ;
-(id)initWithConfigurationState:(id)arg0 assetWriterTrack:(id)arg1 error:(*id)arg2 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(NSInteger)arg0 ;
-(struct __CVPixelBufferPool *)pixelBufferPool;
-(void)_nudgeMediaDataRequesterIfAppropriate:(id)arg0 ;
-(void)_startObservingReadyForMoreMediaDataKeyPath;
-(void)_stopObservingReadyForMoreMediaDataKeyPath;
-(void)addCallbackToCancelDuringDeallocation:(id)arg0 ;
-(void)beginPassIfAppropriate;
-(void)dealloc;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg0 ;
-(void)didStartInitialSession;
-(void)markAsFinished;
-(void)markAsFinishedAndTransitionCurrentHelper:(id)arg0 ;
-(void)markCurrentPassAsFinished;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareToEndSession;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg0 usingBlock:(id)arg1 ;
-(void)stopRequestingMediaData;


@end


#endif