// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISEARCHFIELDTABLEVIEW_H
#define SKUISEARCHFIELDTABLEVIEW_H

@class UITableView;
@protocol SKUITrendingSearchPageViewDelegate;


#import "SKUITrendingSearchPage.h"
#import "SKUITrendingSearchPageView.h"
#import "SKUITrendingSearchProvider.h"

@interface SKUISearchFieldTableView : UITableView {
    SKUITrendingSearchPage *_page;
    SKUITrendingSearchPageView *_pageView;
}


@property (weak, nonatomic) NSObject<SKUITrendingSearchPageViewDelegate> *trendingSearchDelegate; // ivar: _trendingSearchDelegate
@property (retain, nonatomic) SKUITrendingSearchProvider *trendingSearchProvider; // ivar: _trendingSearchProvider
@property (nonatomic) BOOL trendingSearchesVisible; // ivar: _trendingSearchesVisible


-(void)_reloadData;
-(void)_reloadView;
-(void)_setTrendingResponse:(id)arg0 error:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif