// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_DYNAMICSPLITMEDIUM_H
#define _UISTATUSBARVISUALPROVIDER_DYNAMICSPLITMEDIUM_H

@class DynamicSplit;



@interface _UIStatusBarVisualProvider_DynamicSplitMedium : DynamicSplit



+(CGFloat)baseFontSize;
+(CGFloat)expandedFontSize;
-(CGFloat)bottomLeadingTopOffset;
-(CGFloat)expandedIconScale;
-(CGFloat)lowerExpandedBaselineOffset;
-(CGFloat)normalIconScale;
-(NSUInteger)leadingNumberOfItemsForWidth:(CGFloat)arg0 ;
-(NSUInteger)trailingNumberOfItemsForWidth:(CGFloat)arg0 includingPrivacyIndicator:(BOOL)arg1 ;


@end


#endif