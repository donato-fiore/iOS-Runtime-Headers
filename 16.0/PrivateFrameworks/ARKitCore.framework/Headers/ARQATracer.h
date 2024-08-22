// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARQATRACER_H
#define ARQATRACER_H

@class NSMutableDictionary, NSMutableData, NSOutputStream, MOVWriterInterface, NSDictionary, NSArray, NSString;
@protocol ARInternalSessionObserver, ARReplaySensorDelegate, OS_dispatch_queue, ARQATracerDelegate;

#import <Foundation/Foundation.h>


@interface ARQATracer : NSObject <ARInternalSessionObserver, ARReplaySensorDelegate>

 {
    NSUInteger _frameIndex;
    BOOL _isTracing;
    NSMutableDictionary *_traceHeader;
    NSMutableData *_dataBuffer;
    NSOutputStream *_framesStreamToFile;
    NSObject<OS_dispatch_queue> *_processingQueue;
    MOVWriterInterface *_segmentationVideoFileWriter;
    MOVWriterInterface *_semanticsVideoFileWriter;
    *__CVPixelBufferPool _segmentationYUVPixelBufferPool;
    *__CVPixelBufferPool _semanticsYUVPixelBufferPool;
    NSObject<OS_dispatch_queue> *_segmentationVideoQueue;
    NSObject<OS_dispatch_queue> *_semanticsVideoQueue;
    *OpaqueVTPixelTransferSession _segmentationTransferSession;
    NSDictionary *_raycastQueryData;
    NSArray *_raycastResultData;
    os_unfair_lock_s _additionalResultsLock;
}


@property (retain) NSMutableDictionary *additionalResults; // ivar: _additionalResults
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARQATracerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceQuitApp; // ivar: _forceQuitApp
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) BOOL recordScreen; // ivar: _recordScreen
@property (retain, nonatomic) id *screenRecorder; // ivar: _screenRecorder
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *traceOutputFilePath; // ivar: _traceOutputFilePath


+(BOOL)isEnabled;
+(id)traceOutputDirectory;
-(BOOL)_shouldDumpSemanticData;
-(BOOL)isSemanticSegmentationDataAvailableForSession:(id)arg0 ;
-(id)init;
-(struct __CVBuffer *)_createRecordablePixelBufferFromSegmentationBuffer:(struct __CVBuffer *)arg0 ;
-(struct __CVBuffer *)_createRecordablePixelBufferFromSemanticsBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;
-(void)flushDataBufferToFile;
-(void)receiveDefaults;
-(void)replaySensorDidFinishReplayingData;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)start:(id)arg0 ;
-(void)stop;
-(void)trace:(id)arg0 forKey:(id)arg1 ;
-(void)traceRaycastQuery:(id)arg0 ;
-(void)traceRaycastResults:(id)arg0 ;
-(void)update:(id)arg0 session:(id)arg1 ;
-(void)writeJSONObjectToStream:(id)arg0 prefix:(id)arg1 ;
-(void)writeStringToOutputStream:(id)arg0 ;


@end


#endif