// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_SPLIT828_H
#define _UISTATUSBARVISUALPROVIDER_SPLIT828_H

@class FixedSplit, NSString;
@protocol _UIStatusBarVisualProvider_CustomSplit;



@interface _UIStatusBarVisualProvider_Split828 : FixedSplit <_UIStatusBarVisualProvider_CustomSplit>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shrinksSingleCharacterTypes;
+(CGFloat)LTEAPlusFontSize;
+(CGFloat)additionalBottomLeadingMargin;
+(CGFloat)baseFontSize;
+(CGFloat)height;
+(CGFloat)leadingCenteringOffset;
+(CGFloat)leadingSmallPillSpacing;
+(CGFloat)nativeDisplayWidth;
+(CGFloat)pillCenteringOffset;
+(struct CGSize )notchSize;
-(BOOL)supportsCondensedBatteryPercentage;
-(CGFloat)baselineBottomInset;
-(CGFloat)bottomLeadingTopOffset;
-(CGFloat)condensedPointSizeForCellularType:(NSInteger)arg0 defaultPointSize:(CGFloat)arg1 baselineOffset:(*CGFloat)arg2 ;
-(CGFloat)expandedIconScale;
-(CGFloat)itemSpacing;
-(CGFloat)leadingItemSpacing;
-(CGFloat)lowerExpandedBaselineOffset;
-(CGFloat)normalIconScale;
-(id)stringForCellularType:(NSInteger)arg0 condensed:(BOOL)arg1 ;
-(struct CGSize )pillSize;
-(struct CGSize )smallPillSize;


@end


#endif