// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIROTATION_H
#define SIROTATION_H


#import <Foundation/Foundation.h>


@interface SIRotation : NSObject {
    *__CVPixelBufferPool _pixelBufferCreatePool;
    *OpaqueVTPixelRotationSession _sessionRotate;
    CGSize _outputResolution;
    unsigned int _outputPixelFormat;
    NSUInteger _algorithmKey;
    BOOL _isCrop;
}




-(BOOL)rotateAndCropImage:(struct __CVBuffer *)arg0 outputBuffer:(struct __CVBuffer *)arg1 ;
-(BOOL)rotateImage:(struct __CVBuffer *)arg0 outputBuffer:(struct __CVBuffer *)arg1 ;
-(id)initForRotationDegree:(int)arg0 resolution:(struct CGSize )arg1 pixelFormat:(unsigned int)arg2 algorithmKey:(id)arg3 ;
-(struct CGRect )getCenterCropSrcSize:(struct CGSize )arg0 dstSize:(struct CGSize )arg1 ;
-(struct OpaqueVTPixelRotationSession *)_createRotationSessionByRotationDegree:(int)arg0 ;
-(struct __CVBuffer *)_createCVPixelBufferWithResolution:(struct CGSize )arg0 pixelFormat:(unsigned int)arg1 ;
-(struct __CVBuffer *)rotateAndCropImage:(struct __CVBuffer *)arg0 ;
-(struct __CVBuffer *)rotateImage:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif