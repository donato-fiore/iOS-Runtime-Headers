// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRIMAGEINDEPENDENT_H
#define TXRIMAGEINDEPENDENT_H



#import "TXRImage.h"

@interface TXRImageIndependent : TXRImage {
    ? _dimensions;
}


@property (nonatomic) NSUInteger alphaInfo; // ivar: _alphaInfo
@property ? dimensions;
@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat


-(BOOL)exportToURL:(id)arg0 uttype:(struct __CFString *)arg1 error:(*id)arg2 ;
-(id)initWithCGImage:(struct CGImage *)arg0 bufferAllocator:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithCGImage:(struct CGImage *)arg0 pixelFormat:(NSUInteger)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)initWithDimensions:(NSUInteger)arg0 pixelFormat:(NSUInteger)arg1 alphaInfo:(id)arg2 bufferAllocator;
-(id)initWithImage:(id)arg0 dimensions:(NSUInteger)arg1 pixelFormat;
-(id)initWithImage:(id)arg0 dimensions:(NSUInteger)arg1 pixelFormat:(NSUInteger)arg2 alphaInfo;
-(struct CGImage *)newCGImageWithColorSpace:(struct CGColorSpace *)arg0 error:(*id)arg1 ;


@end


#endif