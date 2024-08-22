// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIPSDGRADIENTOPACITYSTOP_H
#define CUIPSDGRADIENTOPACITYSTOP_H

@protocol NSCoding;


#import "CUIPSDGradientStop.h"

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding>

 {
    CGFloat opacity;
}




+(id)opacityStopWithLocation:(CGFloat)arg0 opacity:(CGFloat)arg1 ;
+(void)initialize;
-(BOOL)isOpacityStop;
-(CGFloat)opacity;
-(CGFloat)opacityLocation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(CGFloat)arg0 opacity:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif