// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_SPLIT1125_H
#define _UISTATUSBARVISUALPROVIDER_SPLIT1125_H

@class Split, NSString;
@protocol _UIStatusBarVisualProvider_CustomSplit;



@interface _UIStatusBarVisualProvider_Split1125 : Split <_UIStatusBarVisualProvider_CustomSplit>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)LTEAPlusFontSize;
+(CGFloat)additionalBottomLeadingMargin;
+(CGFloat)baseFontSize;
+(CGFloat)expandedEdgeInset;
+(CGFloat)height;
+(CGFloat)leadingCenteringOffset;
+(CGFloat)nativeDisplayWidth;
+(CGFloat)pillCenteringOffset;
+(CGFloat)pillFontSize;
+(struct CGSize )notchSize;
-(CGFloat)expandedIconScale;
-(CGFloat)itemSpacing;
-(CGFloat)leadingItemSpacing;
-(CGFloat)leadingSmallPillSpacing;
-(CGFloat)lowerExpandedBaselineOffset;
-(CGFloat)normalIconScale;
-(id)stringForCellularType:(NSInteger)arg0 condensed:(BOOL)arg1 ;
-(struct CGSize )pillSize;
-(struct CGSize )smallPillSize;


@end


#endif