// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUITRENDINGSEARCHPAGEVIEW_H
#define SKUITRENDINGSEARCHPAGEVIEW_H

@class UIView;
@protocol SKUITrendingSearchPageViewDelegate;


#import "SKUITrendingSearchView.h"
#import "SKUITrendingSearchPage.h"

@interface SKUITrendingSearchPageView : UIView {
    SKUITrendingSearchView *_trendingSearchView;
}


@property (nonatomic) UIEdgeInsets contentInset;
@property (weak, nonatomic) NSObject<SKUITrendingSearchPageViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SKUITrendingSearchPage *page; // ivar: _page


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif