// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FRCIMAGEPROCESSOR_H
#define FRCIMAGEPROCESSOR_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "Normalization.h"
#import "FRCScaler.h"

@interface FRCImageProcessor : NSObject {
    NSInteger _usage;
    Normalization *_normalization;
    FRCScaler *_scaler;
    *__CVBuffer _rgbaFirst;
    *__CVBuffer _rgbaSecond;
    BOOL _rgbaBuffersAllocated;
    unsigned int _rgbaPixelFormat;
    BOOL _isYUV;
    BOOL _inputScaling;
    NSUInteger _width;
    NSUInteger _height;
    ? _normalizationParams;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
}


@property (nonatomic) NSInteger inputRotation; // ivar: _inputRotation
@property (readonly, nonatomic) *__CVBuffer normalizedFirst; // ivar: _normalizedFirst
@property (readonly, nonatomic) *__CVBuffer normalizedSecond; // ivar: _normalizedSecond
@property (nonatomic) BOOL selfNormalization;


-(BOOL)shouldCropOutputFrame:(struct __CVBuffer *)arg0 ;
-(BOOL)shouldScaleBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithUsage:(NSInteger)arg0 ;
-(void)allocateNormalizedBuffers;
-(void)allocteRGBABuffersForBuffer:(struct __CVBuffer *)arg0 ;
-(void)dealloc;
-(void)postProcessNormalizedFrame:(struct __CVBuffer *)arg0 output:(struct __CVBuffer *)arg1 timeScale:(float)arg2 waitForCompletion:(BOOL)arg3 ;
-(void)preProcessFirstInput:(struct __CVBuffer *)arg0 secondInput:(struct __CVBuffer *)arg1 waitForCompletion:(BOOL)arg2 ;


@end


#endif