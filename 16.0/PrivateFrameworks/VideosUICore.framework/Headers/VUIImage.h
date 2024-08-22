// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIIMAGE_H
#define VUIIMAGE_H

@class NSURL, NSData, NSString;

#import <Foundation/Foundation.h>


@interface VUIImage : NSObject {
    *CGImage _image;
    *CGImageSource _imageSource;
    CGFloat _imageWidth;
    CGFloat _imageHeight;
    BOOL _enableCache;
    BOOL _cacheImmediately;
    NSURL *_imageURL;
    NSData *_imageData;
    NSString *_imageType;
    BOOL _imageBufferInMemory;
}


@property (readonly, nonatomic) int orientation; // ivar: _imageOrientation
@property (nonatomic) BOOL rotationEnabled; // ivar: _rotationEnabled


+(NSInteger)imageOrientationForExifOrientation:(int)arg0 ;
+(id)imageWithCGImageRef:(struct CGImage *)arg0 imageOrientation:(NSInteger)arg1 preserveAlpha:(BOOL)arg2 ;
+(id)imageWithCGImageRef:(struct CGImage *)arg0 preserveAlpha:(BOOL)arg1 ;
+(id)imageWithData:(id)arg0 ;
+(id)imageWithPath:(id)arg0 ;
+(id)imageWithPath:(id)arg0 cacheImmediately:(BOOL)arg1 ;
+(id)imageWithRotationFromPath:(id)arg0 ;
+(id)imageWithRotationFromURL:(id)arg0 ;
+(id)imageWithURL:(id)arg0 ;
+(id)imageWithURL:(id)arg0 cacheImmediately:(BOOL)arg1 ;
+(int)exifOrientationForImageOrientation:(NSInteger)arg0 ;
-(BOOL)enableCache;
-(BOOL)hasAlpha;
-(BOOL)isImageBufferInMemory;
-(BOOL)isPowerOfTwo;
-(BOOL)sourceRequiresRotation;
-(NSInteger)_uiImageOrientation;
-(float)aspectRatio;
-(id)_initWithCGImageSourceRotationEnabled:(struct CGImageSource *)arg0 ;
-(id)imageType;
-(id)initWithCGImageRef:(struct CGImage *)arg0 exifOrientation:(int)arg1 preserveAlpha:(BOOL)arg2 ;
-(id)initWithCGImageRef:(struct CGImage *)arg0 imageOrientation:(NSInteger)arg1 preserveAlpha:(BOOL)arg2 ;
-(id)initWithCGImageRef:(struct CGImage *)arg0 preserveAlpha:(BOOL)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 cacheImmediately:(BOOL)arg1 ;
-(id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)arg0 ;
-(id)uiImage;
-(struct CGImage *)image;
-(struct CGRect )largestSquareRect;
-(struct CGSize )pixelBounds;
-(void)_initializeCGImageWithRotation;
-(void)dealloc;
-(void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect )arg1 ;
-(void)setEnableCache:(BOOL)arg0 ;


@end


#endif