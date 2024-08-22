// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUINAVIGATIONLISTSTYLEPROVIDERIMPL_H
#define CNUINAVIGATIONLISTSTYLEPROVIDERIMPL_H

@class UIColor, UIFont, NSString;
@protocol CNUINavigationListStyle;

#import <Foundation/Foundation.h>


@interface CNUINavigationListStyleProviderImpl : NSObject <CNUINavigationListStyle>



@property (readonly, nonatomic) UIColor *actionIconFillColor;
@property (readonly, nonatomic) UIColor *actionIconFillHighlightedColor;
@property (readonly, nonatomic) UIColor *cellBackgroundColor;
@property (readonly, nonatomic) UIColor *cellBackgroundExpandedColor;
@property (readonly, nonatomic) UIColor *cellBackgroundHighlightedColor;
@property (readonly, nonatomic) CGFloat cellContentViewBottomAnchorConstraintConstant;
@property (readonly, nonatomic) UIFont *cellSubtitleFont;
@property (readonly, nonatomic) CGFloat cellSubtitleLabelFirstBaselineAnchorConstraintConstant;
@property (readonly, nonatomic) UIColor *cellSubtitleTextColor;
@property (readonly, nonatomic) UIColor *cellSubtitleTextHighlightedColor;
@property (readonly, nonatomic) UIFont *cellTitleFont;
@property (readonly, nonatomic) CGFloat cellTitleLabelFirstBaselineAnchorConstraintConstant;
@property (readonly, nonatomic) UIColor *cellTitleTextColor;
@property (readonly, nonatomic) UIColor *cellTitleTextHighlightedColor;
@property (readonly, nonatomic) CGFloat cellUserActionLeftMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat detailCellContentViewBottomAnchorConstraintConstant;
@property (readonly, nonatomic) UIFont *detailCellSubtitleFont;
@property (readonly, nonatomic) CGFloat detailCellSubtitleLabelFirstBaselineAnchorConstraintConstant;
@property (readonly, nonatomic) UIColor *detailCellSubtitleTextColor;
@property (readonly, nonatomic) UIColor *detailCellSubtitleTextHighlightedColor;
@property (readonly, nonatomic) UIFont *detailCellTitleFont;
@property (readonly, nonatomic) CGFloat detailCellTitleLabelFirstBaselineAnchorConstraintConstant;
@property (readonly, nonatomic) UIColor *detailCellTitleTextColor;
@property (readonly, nonatomic) UIColor *detailCellTitleTextHighlightedColor;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL showCellSeparator;
@property (readonly) Class superclass;




@end


#endif