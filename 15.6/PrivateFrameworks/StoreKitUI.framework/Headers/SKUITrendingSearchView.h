// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUITRENDINGSEARCHVIEW_H
#define SKUITRENDINGSEARCHVIEW_H

@class UIScrollView, UIStackView, NSArray, UIView;



@interface SKUITrendingSearchView : UIScrollView

@property (weak, nonatomic) UIStackView *titleStackView; // ivar: _titleStackView
@property (copy, nonatomic) NSArray *trendingSearchViews; // ivar: _trendingSearchViews
@property (weak, nonatomic) UIStackView *trendingSearchesStackView; // ivar: _trendingSearchesStackView
@property (copy, nonatomic) UIView *trendingTitleView; // ivar: _trendingTitleView
@property (retain, nonatomic) NSArray *verticalMarginRelatedConstraints; // ivar: _verticalMarginRelatedConstraints


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInitWithFrame:(struct CGRect )arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif