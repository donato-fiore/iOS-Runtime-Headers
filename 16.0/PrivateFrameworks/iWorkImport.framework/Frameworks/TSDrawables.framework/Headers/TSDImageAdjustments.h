// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDIMAGEADJUSTMENTS_H
#define TSDIMAGEADJUSTMENTS_H

@protocol NSCopying, NSMutableCopying, TSDMixing;

#import <Foundation/Foundation.h>


@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing>

 {
    CGFloat _exposure;
    CGFloat _saturation;
    CGFloat _contrast;
    CGFloat _highlights;
    CGFloat _shadows;
    CGFloat _sharpness;
    CGFloat _denoise;
    CGFloat _temperature;
    CGFloat _tint;
    CGFloat _bottomLevel;
    CGFloat _topLevel;
    CGFloat _gamma;
    BOOL _enhance;
    BOOL _representsSageAdjustments;
}


@property (readonly, nonatomic) CGFloat bottomLevel;
@property (readonly, nonatomic) CGFloat contrast;
@property (readonly, nonatomic) CGFloat denoise;
@property (readonly, nonatomic) BOOL enhance;
@property (readonly, nonatomic) CGFloat exposure;
@property (readonly, nonatomic) CGFloat gamma;
@property (readonly, nonatomic) CGFloat highlights;
@property (readonly, nonatomic) BOOL representsSageAdjustments;
@property (readonly, nonatomic) CGFloat saturation;
@property (readonly, nonatomic) CGFloat shadows;
@property (readonly, nonatomic) CGFloat sharpness;
@property (readonly, nonatomic) CGFloat temperature;
@property (readonly, nonatomic) CGFloat tint;
@property (readonly, nonatomic) CGFloat topLevel;


+(BOOL)canMixWithNilObjects;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)imageAdjustmentsWithoutEnhance;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)i_initFromDefaultArchive;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif