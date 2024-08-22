// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFHARDWAREJPEGSCALER_H
#define MFHARDWAREJPEGSCALER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MFHardwareJPEGScaler : NSObject {
    *__IOSurface _ioSurfaceRef;
    NSData *_imageData;
    *__CFDictionary _imageProperties;
    BOOL _canHardwareScaleImage;
}




-(BOOL)_decodeImageToIOSurface;
-(BOOL)_isJPEGImage:(struct CGImageSource *)arg0 ;
-(BOOL)scaleImageToFitLargestDimension:(id)arg0 dataConsumer:(id)arg1 ;
-(id)initWithImageData:(id)arg0 imageSource:(struct CGImageSource *)arg1 ;
-(void)dealloc;


@end


#endif