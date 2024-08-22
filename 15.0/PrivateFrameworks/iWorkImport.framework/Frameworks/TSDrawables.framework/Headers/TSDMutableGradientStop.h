// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMUTABLEGRADIENTSTOP_H
#define TSDMUTABLEGRADIENTSTOP_H

@class TSUColor;


#import "TSDGradientStop.h"

@interface TSDMutableGradientStop : TSDGradientStop

@property (copy, nonatomic) TSUColor *color;
@property (nonatomic) CGFloat fraction;
@property (nonatomic) CGFloat inflection;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif