// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPARALLAXCOLOR_H
#define PFPARALLAXCOLOR_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PFParallaxColor.h"

@interface PFParallaxColor : NSObject <NSSecureCoding>

 {
    ? _srgb;
    ? _lhc;
    *CGColor _cgColor;
}


@property (readonly, nonatomic) *CGColor CGColor;
@property (readonly, nonatomic) NSArray *RGBValues;
@property (readonly, nonatomic) CGFloat blue;
@property (readonly, nonatomic) CGFloat chroma;
@property (readonly, nonatomic) PFParallaxColor *complementaryColor;
@property (readonly, nonatomic) CGFloat green;
@property (readonly, nonatomic) CGFloat hue;
@property (readonly, nonatomic) BOOL isCool;
@property (readonly, nonatomic) BOOL isWarm;
@property (readonly, nonatomic) CGFloat luma;
@property (readonly, nonatomic) CGFloat luminance;
@property (readonly, nonatomic) CGPoint pt;
@property (readonly, nonatomic) CGFloat red;
@property (readonly, nonatomic) CGFloat tone;


+(BOOL)supportsSecureCoding;
+(id)blackColor;
+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithRGBValues:(id)arg0 error:(*id)arg1 ;
+(id)colorWithTone:(CGFloat)arg0 hue:(CGFloat)arg1 ;
+(id)coolColor;
+(id)warmColor;
+(id)whiteColor;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToParallaxColor:(id)arg0 ;
-(CGFloat)distanceToColor:(id)arg0 ;
-(id)debugQuickLookObject;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHue:(CGFloat)arg0 tone:(CGFloat)arg1 ;
-(id)initWithLuma:(CGFloat)arg0 hue:(CGFloat)arg1 chroma:(CGFloat)arg2 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif