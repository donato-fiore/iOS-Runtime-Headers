// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OUCVPIXELROTATE_H
#define OUCVPIXELROTATE_H


#import <Foundation/Foundation.h>


@interface OUCVPixelRotate : NSObject {
    *__CVPixelBufferPool _pixelBufferCreatePool;
    *OpaqueVTPixelRotationSession _sessionRotate;
    CGSize _outputResolution;
    unsigned int _outputPixelFormat;
    *__CVBuffer _rotatePixelBuffer;
    BOOL _isCrop;
}




-(id)initForRotationDegree:(int)arg0 resolution:(struct CGSize )arg1 pixelFormat:(unsigned int)arg2 ;
-(struct OpaqueVTPixelRotationSession *)_createRotationSessionByRotationDegree:(int)arg0 ;
-(struct __CVBuffer *)rotateImage:(struct __CVBuffer *)arg0 ;
-(void)dealloc;


@end


#endif