// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUICARPLAYNAVIGATIONLISTSTYLEPROVIDER_H
#define CNUICARPLAYNAVIGATIONLISTSTYLEPROVIDER_H



#import "CNUINavigationListStyleProviderImpl.h"

@interface CNUICarPlayNavigationListStyleProvider : CNUINavigationListStyleProviderImpl



-(BOOL)showCellSeparator;
-(CGFloat)cellContentViewBottomAnchorConstraintConstant;
-(CGFloat)cellTitleLabelFirstBaselineAnchorConstraintConstant;
-(CGFloat)cellUserActionLeftMargin;
-(CGFloat)detailCellContentViewBottomAnchorConstraintConstant;
-(CGFloat)detailCellSubtitleLabelFirstBaselineAnchorConstraintConstant;
-(CGFloat)detailCellTitleLabelFirstBaselineAnchorConstraintConstant;
-(id)actionIconFillColor;
-(id)actionIconFillHighlightedColor;
-(id)cellBackgroundColor;
-(id)cellBackgroundExpandedColor;
-(id)cellBackgroundHighlightedColor;
-(id)cellSubtitleTextColor;
-(id)cellSubtitleTextHighlightedColor;
-(id)cellTitleFont;
-(id)cellTitleTextColor;
-(id)cellTitleTextHighlightedColor;
-(id)detailCellSubtitleFont;
-(id)detailCellSubtitleTextColor;
-(id)detailCellSubtitleTextHighlightedColor;
-(id)detailCellTitleFont;
-(id)detailCellTitleTextColor;
-(id)detailCellTitleTextHighlightedColor;


@end


#endif