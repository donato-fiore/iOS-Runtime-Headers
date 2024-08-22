// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXPIXELROTATIONSESSION_H
#define JFXPIXELROTATIONSESSION_H


#import <Foundation/Foundation.h>

#import "JFXPixelBufferPool.h"

@interface JFXPixelRotationSession : NSObject {
    *OpaqueVTImageRotationSession _imageRotationSession;
}


@property (readonly, nonatomic) BOOL mirror; // ivar: _mirror
@property (retain, nonatomic) JFXPixelBufferPool *pixelBufferPool; // ivar: _pixelBufferPool
@property (readonly, nonatomic) int rotationCardinalAngle; // ivar: _rotationCardinalAngle


+(void)JFX_rotateFrameSet:(*id)arg0 toOrientation:(NSInteger)arg1 pixelRotationSession:(*id)arg2 ;
+(void)rotateFrameSetToDeviceOrientation:(*id)arg0 pixelRotationSession:(*id)arg1 ;
+(void)rotateFrameSetToUIOrientation:(*id)arg0 pixelRotationSession:(*id)arg1 ;
-(id)createRotatedFrameSet:(id)arg0 ;
-(id)initWithRotation:(int)arg0 mirror:(BOOL)arg1 ;
-(struct __CVBuffer *)createRotatedPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)JT_releaseImageRotationSession;
-(void)dealloc;


@end


#endif