// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXIMAGE_H
#define FXIMAGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FxImage : NSObject <NSCopying>

 {
    *FxImagePriv _imagePriv;
}




+(id)alloc;
+(void)setColorSpaceVendor:(*unk)arg0 ;
-(BOOL)_verifyImage;
-(BOOL)containsPointX:(int)arg0 Y:(int)arg1 ;
-(BOOL)isPremultiplied;
-(CGFloat)pixelAspect;
-(CGFloat)scaleX;
-(CGFloat)scaleY;
-(NSUInteger)bytes;
-(NSUInteger)colorInfo;
-(NSUInteger)depth;
-(NSUInteger)field;
-(NSUInteger)fieldOrder;
-(NSUInteger)fxColorPrimaries;
-(NSUInteger)height;
-(NSUInteger)imageType;
-(NSUInteger)nclcValue;
-(NSUInteger)numActiveChannels;
-(NSUInteger)origin;
-(NSUInteger)pixelFormat;
-(NSUInteger)size;
-(NSUInteger)version;
-(NSUInteger)width;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithInfo:(struct ? )arg0 ;
-(id)inversePixelTransform;
-(id)pixelTransform;
-(int)eyeType;
-(struct ? )imageInfo;
-(struct CGColorSpace *)colorSpace;
-(struct CGRect )bounds;
-(struct FxRect )dod;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setBytes:(NSUInteger)arg0 ;
-(void)setColorInfo:(NSUInteger)arg0 ;
-(void)setColorSpace:(struct CGColorSpace *)arg0 ;
-(void)setDeallocCallback:(*unk)arg0 refcon:(*void)arg1 ;
-(void)setDepth:(NSUInteger)arg0 ;
-(void)setDod:(struct FxRect )arg0 ;
-(void)setEyeType:(int)arg0 ;
-(void)setField:(NSUInteger)arg0 ;
-(void)setFieldOrder:(NSUInteger)arg0 ;
-(void)setFxColorPrimaries:(NSUInteger)arg0 ;
-(void)setHeight:(NSUInteger)arg0 ;
-(void)setImageType:(NSUInteger)arg0 ;
-(void)setIsPremultiplied:(BOOL)arg0 ;
-(void)setNCLCValue:(NSUInteger)arg0 ;
-(void)setNumActiveChannels:(NSUInteger)arg0 ;
-(void)setOrigin:(NSUInteger)arg0 ;
-(void)setPixelAspect:(CGFloat)arg0 ;
-(void)setPixelFormat:(NSUInteger)arg0 ;
-(void)setPixelTransform:(id)arg0 ;
-(void)setScaleX:(CGFloat)arg0 ;
-(void)setScaleY:(CGFloat)arg0 ;
-(void)setWidth:(NSUInteger)arg0 ;
-(void)setWidth:(NSUInteger)arg0 andHeight:(NSUInteger)arg1 ;


@end


#endif