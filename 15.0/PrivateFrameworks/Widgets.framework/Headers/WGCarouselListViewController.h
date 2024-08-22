// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WGCAROUSELLISTVIEWCONTROLLER_H
#define WGCAROUSELLISTVIEWCONTROLLER_H

@class NSMutableDictionary, NSString;
@protocol WGWidgetPinningTeachingViewDelegate;


#import "WGMajorListViewController.h"
#import "WGWidgetPinningTeachingView.h"

@interface WGCarouselListViewController : WGMajorListViewController <WGWidgetPinningTeachingViewDelegate>

 {
    id *_sizeChangeObserver;
}


@property (retain, nonatomic) NSMutableDictionary *cachedThresholds; // ivar: _cachedThresholds
@property (retain, nonatomic) NSMutableDictionary *catchupProperties; // ivar: _catchupProperties
@property (retain, nonatomic) NSMutableDictionary *catchupTimers; // ivar: _catchupTimers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dismissProgress; // ivar: _dismissProgress
@property (nonatomic, getter=isFooterVisible) BOOL footerVisible; // ivar: _footerVisible
@property (readonly) NSUInteger hash;
@property (nonatomic) WGWidgetListSettings listSettings; // ivar: _listSettings
@property (nonatomic) CGFloat revealProgress; // ivar: _revealProgress
@property (nonatomic, getter=isRevealed) BOOL revealed; // ivar: _revealed
@property (readonly) Class superclass;
@property (retain, nonatomic) WGWidgetPinningTeachingView *teachingView; // ivar: _teachingView
@property (nonatomic, getter=isVisuallyRevealed) BOOL visuallyRevealed; // ivar: _visuallyRevealed
@property (nonatomic) BOOL visuallyRevealedPriorToEditingIcons; // ivar: _visuallyRevealedPriorToEditingIcons


-(BOOL)_hasEnoughContentToScroll;
-(BOOL)_isViewControllerVisible;
-(BOOL)headerVisible;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(BOOL)shouldShowTeachingView;
-(CGFloat)easedOutValueForValue:(CGFloat)arg0 ;
-(NSUInteger)_indexForNextCellAfterContentOffset:(CGFloat)arg0 ;
-(NSUInteger)_indexOfFirstNonFavoritedWidgetInStackView;
-(NSUInteger)_insertionIndexofListItem:(id)arg0 intoWidgetViews:(id)arg1 withOrderedIdentifiers:(id)arg2 ;
-(id)_animatablePropertiesForStackViewUpdate;
-(id)_identifierForCell:(id)arg0 ;
-(id)_newCatchupPropertyForCell:(id)arg0 ;
-(id)_thresholdsForCell:(id)arg0 ;
-(id)extraViews;
-(id)initWithWidgetDiscoveryController:(id)arg0 listSettings:(struct WGWidgetListSettings )arg1 ;
-(struct CGRect )_cellFrameInScrollBoundsForCell:(id)arg0 ;
-(void)_createPropertiesForStackViewUpdate;
-(void)_repopulateStackViewWithWidgetIdentifiers:(id)arg0 ;
-(void)_stackViewArrangedSubviewsTransformPresentationValueChanged;
-(void)_styleCroppedAndScaledCellForBottomEdge:(id)arg0 withCellFrameInScrollViewBounds:(struct CGRect )arg1 intersectionRect:(struct CGRect )arg2 thresholds:(id)arg3 ;
-(void)_styleCroppedAndScaledCellForTopEdge:(id)arg0 withCellFrameInScrollViewBounds:(struct CGRect )arg1 thresholds:(id)arg2 ;
-(void)_styleCroppedCellForBottomEdge:(id)arg0 intersectionRect:(struct CGRect )arg1 thresholds:(id)arg2 ;
-(void)_styleCroppedCellForTopEdge:(id)arg0 withCellFrameInScrollViewBounds:(struct CGRect )arg1 intersectionRect:(struct CGRect )arg2 thresholds:(id)arg3 ;
-(void)_styleDisapearingCellForBottomEdge:(id)arg0 withCellFrameInScrollViewBounds:(struct CGRect )arg1 previousCellFrameInContainerView:(struct CGRect )arg2 thresholds:(id)arg3 ;
-(void)_styleFooterView:(id)arg0 withCellFrameInScrollViewBounds:(struct CGRect )arg1 intersectionRect:(struct CGRect )arg2 containerHeight:(CGFloat)arg3 ;
-(void)_styleFullyInvisibleBottomCell:(id)arg0 withCellFrameInScrollViewBounds:(struct CGRect )arg1 thresholds:(id)arg2 ;
-(void)_styleFullyInvisibleTopCell:(id)arg0 ;
-(void)_styleFullyVisibleCell:(id)arg0 ;
-(void)_styleHeaderView:(id)arg0 withCellFrameInScrollViewBounds:(struct CGRect )arg1 intersectionRect:(struct CGRect )arg2 ;
-(void)_styleTeachingView:(id)arg0 withCellFrameInScrollViewBounds:(struct CGRect )arg1 intersectionRect:(struct CGRect )arg2 ;
-(void)_updateCarouselEffect;
-(void)_updateRevealState;
-(void)_updateScrollViewContentSize;
-(void)_updateTeachingViewVisibilityAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setContainerView:(id)arg0 ;
-(void)setEditingIcons:(BOOL)arg0 ;
-(void)setHeaderVisible:(BOOL)arg0 ;
-(void)updateCarouselAndRevealState;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)widgetPinningTeachingViewDidSelectNo:(id)arg0 ;
-(void)widgetPinningTeachingViewDidSelectYes:(id)arg0 ;


@end


#endif