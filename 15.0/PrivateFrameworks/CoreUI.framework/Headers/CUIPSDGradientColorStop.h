// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIPSDGRADIENTCOLORSTOP_H
#define CUIPSDGRADIENTCOLORSTOP_H

@protocol NSCoding;


#import "CUIPSDGradientStop.h"

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding>

 {
    _psdGradientColor gradientColor;
}




+(id)colorStopWithLocation:(CGFloat)arg0 gradientColor:(struct _psdGradientColor )arg1 ;
+(void)initialize;
-(BOOL)isColorStop;
-(CGFloat)colorLocation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(CGFloat)arg0 gradientColor:(struct _psdGradientColor )arg1 ;
-(struct _psdGradientColor )gradientColor;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif