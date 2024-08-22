// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIAUTOLAYOUT_H
#define SEARCHUIAUTOLAYOUT_H


#import <Foundation/Foundation.h>


@interface SearchUIAutoLayout : NSObject



+(BOOL)frame:(struct CGRect )arg0 isVisibleInBounds:(struct CGRect )arg1 ;
+(BOOL)view:(id)arg0 isVisibleInBounds:(struct CGRect )arg1 ofView:(id)arg2 ;
+(CGFloat)deviceScaledRoundedValue:(CGFloat)arg0 ;
+(CGFloat)scaledValueForValue:(CGFloat)arg0 withFont:(id)arg1 ;
+(id)alignLeadingView:(id)arg0 toTrailingView:(id)arg1 ;
+(id)alignLeadingView:(id)arg0 toTrailingView:(id)arg1 priority:(float)arg2 ;
+(id)alignLeadingView:(id)arg0 toTrailingView:(id)arg1 spacing:(CGFloat)arg2 ;
+(id)alignLeadingView:(id)arg0 toTrailingView:(id)arg1 spacing:(CGFloat)arg2 minimum:(BOOL)arg3 ;
+(id)alignLeadingView:(id)arg0 toTrailingView:(id)arg1 spacing:(CGFloat)arg2 minimum:(BOOL)arg3 priority:(float)arg4 ;
+(id)alignLeadingView:(id)arg0 toTrailingView:(id)arg1 spacing:(CGFloat)arg2 priority:(float)arg3 ;
+(id)alignView:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toView:(id)arg3 attribute:(NSInteger)arg4 constant:(CGFloat)arg5 ;
+(id)alignView:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toView:(id)arg3 attribute:(NSInteger)arg4 constant:(CGFloat)arg5 priority:(float)arg6 ;
+(id)alignView:(id)arg0 attribute:(NSInteger)arg1 toView:(id)arg2 attribute:(NSInteger)arg3 ;
+(id)alignView:(id)arg0 attribute:(NSInteger)arg1 toView:(id)arg2 attribute:(NSInteger)arg3 constant:(CGFloat)arg4 ;
+(id)alignView:(id)arg0 attribute:(NSInteger)arg1 toView:(id)arg2 attribute:(NSInteger)arg3 priority:(float)arg4 ;
+(id)alignView:(id)arg0 toView:(id)arg1 withAttribute:(NSInteger)arg2 ;
+(id)alignView:(id)arg0 toView:(id)arg1 withAttribute:(NSInteger)arg2 constant:(CGFloat)arg3 ;
+(id)alignView:(id)arg0 toView:(id)arg1 withAttribute:(NSInteger)arg2 priority:(float)arg3 ;
+(id)alignView:(id)arg0 toView:(id)arg1 withAttribute:(NSInteger)arg2 relatedBy:(NSInteger)arg3 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 dynamicSpacing:(CGFloat)arg2 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 dynamicSpacing:(CGFloat)arg2 forFont:(id)arg3 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 dynamicSpacing:(CGFloat)arg2 forFont:(id)arg3 minimum:(BOOL)arg4 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 dynamicSpacing:(CGFloat)arg2 minimum:(BOOL)arg3 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 dynamicSpacing:(CGFloat)arg2 priority:(float)arg3 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 spacing:(CGFloat)arg2 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 spacing:(CGFloat)arg2 isDynamic:(BOOL)arg3 forFont:(id)arg4 minimum:(BOOL)arg5 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 spacing:(CGFloat)arg2 isDynamic:(BOOL)arg3 forFont:(id)arg4 minimum:(BOOL)arg5 priority:(float)arg6 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 spacing:(CGFloat)arg2 minimum:(BOOL)arg3 ;
+(id)baselineAlignBottomView:(id)arg0 toTopView:(id)arg1 spacing:(CGFloat)arg2 priority:(float)arg3 ;
+(id)installConstraintsWithVisualFormat:(id)arg0 views:(id)arg1 ;
+(id)installConstraintsWithVisualFormat:(id)arg0 views:(id)arg1 metrics:(id)arg2 ;
+(id)installConstraintsWithVisualFormat:(id)arg0 views:(id)arg1 options:(NSUInteger)arg2 ;
+(id)installConstraintsWithVisualFormat:(id)arg0 withViews:(id)arg1 metrics:(id)arg2 options:(NSUInteger)arg3 ;
+(id)setHeight:(CGFloat)arg0 forView:(id)arg1 ;
+(id)setWidth:(CGFloat)arg0 forView:(id)arg1 ;
+(struct UIEdgeInsets )customBaselineInsets:(struct UIEdgeInsets )arg0 font:(id)arg1 ;
+(struct UIEdgeInsets )customUnscaledBaselineInsets:(struct UIEdgeInsets )arg0 font:(id)arg1 ;
+(void)alignViews:(id)arg0 withAttribute:(NSInteger)arg1 ;
+(void)constrainViewHeightContainer:(id)arg0 ;
+(void)constrainViewToContainer:(id)arg0 ;
+(void)constrainViewWidthToContainer:(id)arg0 ;
+(void)enableAutoLayoutForItems:(id)arg0 ;
+(void)fillContainerWithView:(id)arg0 ;
+(void)requireIntrinsicSizeForView:(id)arg0 ;
+(void)requireIntrinsicSizeForView:(id)arg0 withPriority:(float)arg1 ;
+(void)setSize:(struct CGSize )arg0 forView:(id)arg1 ;
+(void)setVisibility:(BOOL)arg0 forView:(id)arg1 ;
+(void)spanContainerHeightForView:(id)arg0 ;
+(void)spanContainerWidthForView:(id)arg0 ;


@end


#endif