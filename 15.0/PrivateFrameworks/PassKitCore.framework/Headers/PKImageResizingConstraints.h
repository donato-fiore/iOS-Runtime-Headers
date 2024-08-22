// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKIMAGERESIZINGCONSTRAINTS_H
#define PKIMAGERESIZINGCONSTRAINTS_H


#import <Foundation/Foundation.h>


@interface PKImageResizingConstraints : NSObject {
    int _constraintType;
    CGFloat _fixedDimension;
    CGSize _size;
    CGFloat _minAspectRatio;
    CGFloat _maxAspectRatio;
    BOOL _respectAspectRatioRange;
}


@property (nonatomic) CGFloat outputBorderTrim; // ivar: _outputBorderTrim
@property (nonatomic) CGFloat outputCornerRadius; // ivar: _outputCornerRadius
@property (nonatomic) BOOL outputMirrored; // ivar: _outputMirrored
@property (nonatomic) CGFloat outputScale; // ivar: _outputScale


+(id)constraintsWithAspectFillToSize:(struct CGSize )arg0 ;
+(id)constraintsWithAspectFitToSize:(struct CGSize )arg0 ;
+(id)constraintsWithFixedHeight:(CGFloat)arg0 minAspectRatio:(CGFloat)arg1 maxAspectRatio:(CGFloat)arg2 ;
+(id)constraintsWithFixedLargeDimenstion:(CGFloat)arg0 minAspectRatio:(CGFloat)arg1 maxAspectRatio:(CGFloat)arg2 ;
+(id)constraintsWithFixedSize:(struct CGSize )arg0 ;
+(id)constraintsWithFixedSmallDimenstion:(CGFloat)arg0 minAspectRatio:(CGFloat)arg1 maxAspectRatio:(CGFloat)arg2 ;
+(id)constraintsWithFixedWidth:(CGFloat)arg0 minAspectRatio:(CGFloat)arg1 maxAspectRatio:(CGFloat)arg2 ;
+(id)constraintsWithMaxSize:(struct CGSize )arg0 ;
+(id)constraintsWithMaxSize:(struct CGSize )arg0 minAspectRatio:(CGFloat)arg1 maxAspectRatio:(CGFloat)arg2 ;
+(id)constraintsWithMinSize:(struct CGSize )arg0 ;
+(id)constraintsWithMinSize:(struct CGSize )arg0 minAspectRatio:(CGFloat)arg1 maxAspectRatio:(CGFloat)arg2 ;
-(BOOL)_getPixelCropRect:(struct CGRect *)arg0 pixelOutputSize:(struct CGSize *)arg1 forImageSize:(struct CGSize )arg2 scale:(CGFloat)arg3 ;
-(BOOL)_reasonable;
-(BOOL)getPixelCropRect:(struct CGRect *)arg0 pixelOutputSize:(struct CGSize *)arg1 forImage:(id)arg2 ;
-(id)_flippedConstraints;
-(id)init;
-(id)resizedImage:(id)arg0 ;
-(struct CGRect )_getDrawRectForImage:(struct CGImage *)arg0 withOutputSize:(struct CGSize )arg1 ;


@end


#endif