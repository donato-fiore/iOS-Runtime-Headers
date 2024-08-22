// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMUTABLEIMAGEADJUSTMENTS_H
#define TSDMUTABLEIMAGEADJUSTMENTS_H



#import "TSDImageAdjustments.h"

@interface TSDMutableImageAdjustments : TSDImageAdjustments

@property (nonatomic) CGFloat bottomLevel;
@property (nonatomic) CGFloat contrast;
@property (nonatomic) CGFloat denoise;
@property (nonatomic) BOOL enhance;
@property (nonatomic) CGFloat exposure;
@property (nonatomic) CGFloat gamma;
@property (nonatomic) CGFloat highlights;
@property (nonatomic) BOOL representsSageAdjustments;
@property (nonatomic) CGFloat saturation;
@property (nonatomic) CGFloat shadows;
@property (nonatomic) CGFloat sharpness;
@property (nonatomic) CGFloat temperature;
@property (nonatomic) CGFloat tint;
@property (nonatomic) CGFloat topLevel;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif