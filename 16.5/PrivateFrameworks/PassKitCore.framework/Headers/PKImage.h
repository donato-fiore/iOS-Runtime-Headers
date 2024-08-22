// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIMAGE_H
#define PKIMAGE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKImage : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    BOOL _shouldTile;
    BOOL _shouldStretch;
    PKEdgeInsets _capInsets;
}


@property (readonly, nonatomic) PKEdgeInsets capInsets;
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) *CGImage imageRef; // ivar: _imageRef
@property (readonly, nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) BOOL stretches;
@property (readonly, nonatomic) BOOL tiles;


+(BOOL)supportsSecureCoding;
+(id)URLForImageNamed:(id)arg0 inBundle:(id)arg1 scale:(*CGFloat)arg2 ;
+(id)URLForImageNamed:(id)arg0 inBundle:(id)arg1 scale:(*CGFloat)arg2 preferredScreenScale:(CGFloat)arg3 suffix:(id)arg4 ;
+(id)hashOfImageNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)imageNamed:(id)arg0 inBundle:(id)arg1 screenScale:(CGFloat)arg2 suffix:(id)arg3 ;
+(id)newImageNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)newImageNamed:(id)arg0 inBundle:(id)arg1 screenScale:(CGFloat)arg2 suffix:(id)arg3 ;
+(id)passesImageNamed:(id)arg0 ;
-(BOOL)_isTiledWhenStretchedToSize:(struct CGSize )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToImage:(id)arg0 ;
-(id)blurredImageWithRadius:(NSUInteger)arg0 constraints:(id)arg1 ;
-(id)croppedImageWithInsets:(struct PKEdgeInsets )arg0 ;
-(id)imageHash;
-(id)imageWithoutCapInsets;
-(id)init;
-(id)initWithCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 orientation:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 scale:(CGFloat)arg1 ;
-(id)resizableImageByStretchingWithCapInsets:(struct PKEdgeInsets )arg0 ;
-(id)resizableImageByTilingCenterPixel;
-(id)resizableImageByTilingWithCapInsets:(struct PKEdgeInsets )arg0 ;
-(id)resizedImageWithConstraints:(id)arg0 ;
-(struct CGSize )downscaleSizeMatchingScale:(CGFloat)arg0 ;
-(void)_queue_createImageRefIfNecessary;
-(void)dealloc;
-(void)drawInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 withBlendMode:(int)arg2 alpha:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preheatBitmapData;


@end


#endif