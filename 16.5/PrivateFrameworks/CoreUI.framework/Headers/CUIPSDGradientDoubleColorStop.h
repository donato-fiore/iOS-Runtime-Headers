// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIPSDGRADIENTDOUBLECOLORSTOP_H
#define CUIPSDGRADIENTDOUBLECOLORSTOP_H

@protocol NSCoding;


#import "CUIPSDGradientColorStop.h"

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding>

 {
    _psdGradientColor leadOutColor;
}




+(id)doubleColorStopWithLocation:(CGFloat)arg0 leadInColor:(struct _psdGradientColor )arg1 leadOutColor:(struct _psdGradientColor )arg2 ;
+(void)initialize;
-(BOOL)isDoubleStop;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(CGFloat)arg0 leadInColor:(struct _psdGradientColor )arg1 leadOutColor:(struct _psdGradientColor )arg2 ;
-(struct _psdGradientColor )leadInColor;
-(struct _psdGradientColor )leadOutColor;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif