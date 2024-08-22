// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMPIPELINECONTEXTINPUT_H
#define AXMPIPELINECONTEXTINPUT_H

@class CIImage, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXMPixelBufferWrapper.h"

@interface AXMPipelineContextInput : NSObject <NSSecureCoding>

 {
    NSInteger _inputType;
    CIImage *_ciImage;
    NSURL *_photoLibraryURL;
    AXMPixelBufferWrapper *_pixelBuffer;
    *CGColorSpace _extendedSRGBColorSpace;
    NSURL *_URL;
    CGSize _cachedImageURLSize;
}


@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) CIImage *ciImage;
@property (readonly, nonatomic) *CGColorSpace imageColorSpace;
@property (readonly, nonatomic) NSInteger inputType;
@property (readonly, nonatomic) NSURL *photoLibraryURL;
@property (readonly, nonatomic) AXMPixelBufferWrapper *pixelBuffer;
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) *__CVBuffer wrappedPixelBuffer;


+(BOOL)supportsSecureCoding;
+(id)inputWithCIImage:(id)arg0 ;
+(id)inputWithCIImage:(id)arg0 photoLibraryURL:(id)arg1 ;
+(id)inputWithPixelBuffer:(id)arg0 ;
+(id)inputWithURL:(id)arg0 ;
+(id)inputWithURL:(id)arg0 photoLibraryURL:(id)arg1 ;
+(id)new;
-(id)_initWithCIImage:(id)arg0 ;
-(id)_initWithCIImage:(id)arg0 photoLibraryURL:(id)arg1 ;
-(id)_initWithPixelBuffer:(id)arg0 ;
-(id)_initWithURL:(id)arg0 ;
-(id)_initWithURL:(id)arg0 photoLibraryURL:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGImage *)createCGImageWithMetrics:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif