// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_SPLIT1242_H
#define _UISTATUSBARVISUALPROVIDER_SPLIT1242_H

@class FixedSplit, NSString;
@protocol _UIStatusBarVisualProvider_CustomSplit;



@interface _UIStatusBarVisualProvider_Split1242 : FixedSplit <_UIStatusBarVisualProvider_CustomSplit>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shrinksSingleCharacterTypes;
+(CGFloat)additionalBottomLeadingMargin;
+(CGFloat)baseFontSize;
+(CGFloat)height;
+(CGFloat)nativeDisplayWidth;
+(CGFloat)pillCenteringOffset;
+(CGFloat)trailingEdgeInsetLeadingAdjustment;
+(struct CGSize )notchSize;
-(CGFloat)expandedIconScale;
-(CGFloat)itemSpacing;
-(CGFloat)lowerExpandedBaselineOffset;
-(CGFloat)normalIconScale;
-(struct CGSize )pillSize;


@end


#endif