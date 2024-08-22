// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARVISUALPROVIDER_SPLIT1170_H
#define _UISTATUSBARVISUALPROVIDER_SPLIT1170_H

@class Split, NSString;
@protocol _UIStatusBarVisualProvider_CustomSplit;



@interface _UIStatusBarVisualProvider_Split1170 : Split <_UIStatusBarVisualProvider_CustomSplit>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)LTEAPlusFontSize;
+(CGFloat)baseFontSize;
+(CGFloat)bottomLeadingTopOffset;
+(CGFloat)expandedFontSize;
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