// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WMTABLECELLSTYLE_H
#define WMTABLECELLSTYLE_H



#import "WMStyle.h"

@interface WMTableCellStyle : WMStyle {
    CGFloat mLeftPadding;
    CGFloat mRightPadding;
}




+(float)resolveColorValueWithPercentage:(float)arg0 foregroundComponent:(float)arg1 backgroundComponent:(float)arg2 ;
+(id)dominantColorOf:(id)arg0 ;
+(id)resolveStyleColorWithPercentage:(float)arg0 foregroundColor:(id)arg1 backgroundColor:(id)arg2 ;
+(id)resolveStyleColorWithPercentage:(float)arg0 shading:(id)arg1 ;
-(CGFloat)leftPadding;
-(CGFloat)rightPadding;
-(id)initWithTableCellProperties:(id)arg0 ;
-(void)addTableCellProperties:(id)arg0 ;
-(void)addTableCellStyleProperties:(id)arg0 ;


@end


#endif