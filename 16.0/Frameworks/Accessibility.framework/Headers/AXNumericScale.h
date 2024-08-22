// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXNUMERICSCALE_H
#define AXNUMERICSCALE_H



#import "AXScale.h"

@interface AXNumericScale : AXScale

@property (copy, nonatomic) id *apply; // ivar: _apply
@property (copy, nonatomic) id *invert; // ivar: _invert
@property (nonatomic) CGFloat lowerBound; // ivar: _lowerBound
@property (nonatomic) CGFloat upperBound; // ivar: _upperBound


+(id)linearScaleWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 ;
+(id)lnScaleWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 ;
+(id)log10ScaleWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 ;
-(id)init;
// -(id)initWithLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 apply:(id)arg2 invert:(unk)arg3  ;


@end


#endif