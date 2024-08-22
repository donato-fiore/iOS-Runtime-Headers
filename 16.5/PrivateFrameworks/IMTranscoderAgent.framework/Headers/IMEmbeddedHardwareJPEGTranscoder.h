// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMEMBEDDEDHARDWAREJPEGTRANSCODER_H
#define IMEMBEDDEDHARDWAREJPEGTRANSCODER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface IMEmbeddedHardwareJPEGTranscoder : NSObject {
    *__IOSurface _ioSurfaceRef;
    NSData *_imageData;
    *__CFDictionary _imageProperties;
    BOOL _canHardwareScaleImage;
}


@property (nonatomic) CGFloat targetJPEGCompressionValue; // ivar: _targetJPEGCompressionValue


-(BOOL)_decodeImageToIOSurface;
-(BOOL)_isJPEGImage:(struct CGImageSource *)arg0 ;
-(BOOL)scaleImageToFitLargestDimension:(id)arg0 outputData:(*id)arg1 ;
-(id)initWithImageData:(id)arg0 imageSource:(struct CGImageSource *)arg1 ;
-(void)dealloc;


@end


#endif