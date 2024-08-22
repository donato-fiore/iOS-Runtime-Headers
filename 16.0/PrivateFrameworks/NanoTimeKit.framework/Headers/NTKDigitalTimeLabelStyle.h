// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKDIGITALTIMELABELSTYLE_H
#define NTKDIGITALTIMELABELSTYLE_H

@class CLKUITimeLabelStyle, NSNumber;
@protocol NSCopying;


#import "NTKLayoutRule.h"

@interface NTKDigitalTimeLabelStyle : CLKUITimeLabelStyle <NSCopying>



@property (retain, nonatomic) NTKLayoutRule *layoutRule; // ivar: _layoutRule
@property (retain, nonatomic) NSNumber *tracking; // ivar: _tracking


+(id)_fontForDesign:(id)arg0 withWeight:(CGFloat)arg1 onDevice:(id)arg2 ;
+(id)defaultRoundedStyleForBounds:(struct CGRect )arg0 withRightSideMargin:(CGFloat)arg1 applyAdvanceFudge:(BOOL)arg2 forDevice:(id)arg3 ;
+(id)defaultStyleForBounds:(struct CGRect )arg0 withRightSideMargin:(CGFloat)arg1 applyAdvanceFudge:(BOOL)arg2 font:(id)arg3 forDevice:(id)arg4 ;
+(id)defaultStyleForBounds:(struct CGRect )arg0 withRightSideMargin:(CGFloat)arg1 applyAdvanceFudge:(BOOL)arg2 forDevice:(id)arg3 ;
+(id)defaultStyleForBounds:(struct CGRect )arg0 withRightSideMargin:(CGFloat)arg1 applyAdvanceFudge:(BOOL)arg2 withBaselineY:(CGFloat)arg3 forDevice:(id)arg4 ;
+(id)defaultStyleForBounds:(struct CGRect )arg0 withRightSideMargin:(CGFloat)arg1 applyAdvanceFudge:(BOOL)arg2 withBaselineY:(CGFloat)arg3 withFont:(id)arg4 forDevice:(id)arg5 ;
+(id)smallInUpperRightCornerStyleForBounds:(struct CGRect )arg0 forDevice:(id)arg1 ;
+(id)smallInUpperRightCornerStyleForBounds:(struct CGRect )arg0 weight:(CGFloat)arg1 forDevice:(id)arg2 ;
+(id)smallInUpperRightCornerStyleForBounds:(struct CGRect )arg0 withBaselineY:(CGFloat)arg1 withFont:(id)arg2 forDevice:(id)arg3 ;
+(id)smallInUpperRightCornerStyleForBounds:(struct CGRect )arg0 withFont:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif