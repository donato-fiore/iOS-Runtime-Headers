// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUCURATEDGUIDESSECTIONVIEW_H
#define MUCURATEDGUIDESSECTIONVIEW_H

@class UIView, MKCollectionsCarouselView, NSArray;
@protocol MKPlaceCollectionsDelegate;


#import "MUPagingScrollContainerView.h"

@interface MUCuratedGuidesSectionView : UIView {
    MUPagingScrollContainerView *_pagingContainerView;
    BOOL _isSingleCollection;
}


@property (readonly, nonatomic) NSInteger carouselContext;
@property (retain, nonatomic) MKCollectionsCarouselView *carouselView; // ivar: _carouselView
@property (weak, nonatomic) NSObject<MKPlaceCollectionsDelegate> *collectionsDelegate; // ivar: _collectionsDelegate
@property (readonly, nonatomic, getter=isShowingExploreGuides) BOOL showingExploreGuides;
@property (copy, nonatomic) NSArray *visibleFocusItems; // ivar: _visibleFocusItems


-(id)initCollectionsCarouselViewWithPlaceCollections:(id)arg0 usingSyncCoordinator:(id)arg1 withRoutingDelegate:(id)arg2 withScrollViewDelegate:(id)arg3 withAnalyticsDelegate:(id)arg4 exploreGuides:(id)arg5 ;
-(void)_setupSubviews;
-(void)displayCollectionsIfNeeded;
-(void)refreshCollections;


@end


#endif