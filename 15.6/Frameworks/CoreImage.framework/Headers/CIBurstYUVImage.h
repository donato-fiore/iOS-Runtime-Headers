// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIBURSTYUVIMAGE_H
#define CIBURSTYUVIMAGE_H


#import <Foundation/Foundation.h>


@interface CIBurstYUVImage : NSObject {
    *__CFData dataPtr;
    *__CVBuffer pixelBuffer;
    *__IOSurface ioSurf;
}


@property char * Cbuffer; // ivar: Cbuffer
@property char * Ybuffer; // ivar: Ybuffer
@property int bytesPerRow; // ivar: bytesPerRow
@property int height; // ivar: height
@property int width; // ivar: width


-(id)initWithCGImage:(struct CGImage *)arg0 maxDimension:(int)arg1 ;
-(id)initWithCIImage:(id)arg0 ctx:(id)arg1 maxDimension:(int)arg2 ;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 maxDimension:(int)arg1 ;
-(struct __CVBuffer *)pixelBuffer;
-(void)convertRGBAToYUV420:(char *)arg0 rgbaBytesPerRow:(int)arg1 ;
-(void)dealloc;


@end


#endif