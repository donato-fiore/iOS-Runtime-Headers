// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPLATTERHEADERCONTENTVIEWLAYOUTMANAGER_H
#define PLPLATTERHEADERCONTENTVIEWLAYOUTMANAGER_H

@class NSDate, UILabel, NSArray, UIButton, UIView;

#import <Foundation/Foundation.h>

#import "PLPlatterHeaderContentView.h"

@interface PLPlatterHeaderContentViewLayoutManager : NSObject

@property (readonly, nonatomic) CGFloat contentBaseline;
@property (readonly, nonatomic, getter=_date) NSDate *date;
@property (readonly, nonatomic, getter=_dateLabel) UILabel *dateLabel;
@property (readonly, weak, nonatomic) PLPlatterHeaderContentView *headerContentView; // ivar: _headerContentView
@property (readonly, nonatomic, getter=_heedsHorizontalLayoutMargins) BOOL heedsHorizontalLayoutMargins;
@property (readonly, nonatomic, getter=_iconButtons) NSArray *iconButtons;
@property (readonly, nonatomic, getter=_layoutMargins) UIEdgeInsets layoutMargins;
@property (readonly, nonatomic, getter=_shouldReverseLayoutDirection) BOOL shouldReverseLayoutDirection;
@property (readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel;
@property (readonly, nonatomic, getter=_utilityButton) UIButton *utilityButton;
@property (readonly, nonatomic, getter=_utilityView) UIView *utilityView;


+(CGFloat)_headerHeightWithFont:(id)arg0 forWidth:(CGFloat)arg1 ;
+(CGFloat)_titleLabelBaselineOffsetWithFont:(id)arg0 ;
+(CGFloat)contentBaselineToBoundsBottomWithFont:(id)arg0 boundsWidth:(CGFloat)arg1 scale:(CGFloat)arg2 ;
-(CGFloat)headerHeightForWidth:(CGFloat)arg0 ;
-(id)initWithPlatterHeaderContentView:(id)arg0 ;
-(struct CGRect )_titleLabelBoundsForSize:(struct CGSize )arg0 withNumberOfLines:(CGFloat)arg1 ;
-(struct CGSize )_measuringSizeForWidth:(CGFloat)arg0 ;
-(void)invalidateCachedSizeInfo;
-(void)layoutDateLabelWithScale:(CGFloat)arg0 ;
-(void)layoutIconButtonsWithScale:(CGFloat)arg0 ;
-(void)layoutTitleLabelWithTrailingXLimit:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(void)layoutUtilityButtonWithScale:(CGFloat)arg0 ;


@end


#endif