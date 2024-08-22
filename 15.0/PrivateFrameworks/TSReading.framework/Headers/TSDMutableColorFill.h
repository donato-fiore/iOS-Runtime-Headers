// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMUTABLECOLORFILL_H
#define TSDMUTABLECOLORFILL_H

@class TSUColor;


#import "TSDColorFill.h"

@interface TSDMutableColorFill : TSDColorFill

@property (nonatomic) CGFloat brightness;
@property (copy, nonatomic) TSUColor *color;
@property (nonatomic) CGFloat hue;
@property (nonatomic) CGFloat opacity;
@property (nonatomic) CGFloat saturation;




@end


#endif