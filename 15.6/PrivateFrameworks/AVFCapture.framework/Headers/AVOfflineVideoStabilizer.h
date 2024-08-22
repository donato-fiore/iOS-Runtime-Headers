// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVOFFLINEVIDEOSTABILIZER_H
#define AVOFFLINEVIDEOSTABILIZER_H

@class AVWeakReference, NSMutableDictionary, NSMutableArray, NSSet, NSString;
@protocol VISProcessorDelegate, VISProcessor;

#import <Foundation/Foundation.h>


@interface AVOfflineVideoStabilizer : NSObject <VISProcessorDelegate>

 {
    ? _targetFrameDuration;
    int _metadataPrimingCount;
    float _lookAheadTime;
    AVWeakReference *_dataProviderWeakReference;
    *__CVPixelBufferPool _pixelBufferPool;
    BOOL _clientMarkedEndOfVideoData;
    NSInteger _videoOutputFrameNumber;
    *opaqueCMFormatDescription _cachedVideoFormatDescription;
    NSMutableDictionary *_cachedInputBufferAttributes;
    BOOL _clientMarkedEndOfMetadata;
    NSInteger _metadataOutputFrameNumber;
    NSMutableArray *_futureFrameMetadataDicts;
    NSSet *_requiredMetadataKeys;
    NSSet *_optionalMetadataKeys;
    *OpaqueFigSampleBufferProcessor _gvsProcessor;
    BOOL _stabilizationEnabled;
    BOOL _isFirstFrame;
    id<VISProcessor> *_visProcessor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *outputSampleBuffers; // ivar: _outputSampleBuffers
@property (readonly, nonatomic) int preferredSourcePixelBufferPrimingFrameCount;
@property (readonly, nonatomic) int preferredSourceStabilizationMetadataPrimingCount;
@property (readonly) Class superclass;


+(id)offlineVideoStabilizerWithTargetFrameDuration:(struct ? )arg0 dataProvider:(id)arg1 destinationBufferPool:(struct __CVPixelBufferPool *)arg2 stabilizationEnabled:(BOOL)arg3 ;
+(void)initialize;
-(NSUInteger)_extendedRowsOfOutputBuffer;
-(id)initWithTargetFrameDuration:(struct ? )arg0 dataProvider:(id)arg1 destinationBufferPool:(struct __CVPixelBufferPool *)arg2 stabilizationEnabled:(BOOL)arg3 ;
-(int)_setupVISProcessor;
-(int)_validateSourcePixelBuffer:(struct __CVBuffer *)arg0 withSampleTime:(struct ? )arg1 metadata:(id)arg2 isEndOfData:(*BOOL)arg3 ;
-(int)_validateStabilizationMetadata:(id)arg0 withSampleTime:(struct ? )arg1 isEndOfData:(*BOOL)arg2 ;
-(struct opaqueCMSampleBuffer *)_copyStabilizedSampleBuffer:(*id)arg0 ;
-(struct opaqueCMSampleBuffer *)_createSampleBufferWithPixelBuffer:(struct __CVBuffer *)arg0 sampleTime:(struct ? )arg1 futureMetadata:(id)arg2 status:(*int)arg3 ;
-(struct opaqueCMSampleBuffer *)copyStabilizedSampleBuffer:(*id)arg0 ;
-(void)_teardownVISProcessor;
-(void)dealloc;
-(void)didCompleteProcessingOfBuffer:(struct opaqueCMSampleBuffer *)arg0 withStatus:(int)arg1 ;


@end


#endif