// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPIMAGECONVERTER_H
#define VCPIMAGECONVERTER_H


#import <Foundation/Foundation.h>


@interface VCPImageConverter : NSObject {
    int _pixelFormat;
    int _width;
    int _height;
    *CGColorSpace _rgbColorSpace;
    *CGContext _cgContext;
    *__CVBuffer _rgbFrame;
    *__CVPixelBufferPool _yuvFrames;
    *OpaqueVTPixelTransferSession _rgbToYuv;
}




-(?)convertImageyuvFrame;
-(id)init;
-(id)initWithPixelFormat:(int)arg0 ;
-(int)resize:(int)arg0 height:(int)arg1 ;
-(void)dealloc;


@end


#endif