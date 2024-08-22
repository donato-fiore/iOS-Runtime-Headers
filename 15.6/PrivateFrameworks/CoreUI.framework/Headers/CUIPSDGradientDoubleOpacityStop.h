// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIPSDGRADIENTDOUBLEOPACITYSTOP_H
#define CUIPSDGRADIENTDOUBLEOPACITYSTOP_H

@protocol NSCoding;


#import "CUIPSDGradientOpacityStop.h"

@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding>

 {
    CGFloat leadOutOpacity;
}




+(id)doubleOpacityStopWithLocation:(CGFloat)arg0 leadInOpacity:(CGFloat)arg1 leadOutOpacity:(CGFloat)arg2 ;
+(void)initialize;
-(BOOL)isDoubleStop;
-(CGFloat)leadInOpacity;
-(CGFloat)leadOutOpacity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(CGFloat)arg0 leadInOpacity:(CGFloat)arg1 leadOutOpacity:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif