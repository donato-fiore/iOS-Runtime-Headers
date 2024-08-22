// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTCOLLAPSIBLEHEADERCONTROLLER_H
#define AVTCOLLAPSIBLEHEADERCONTROLLER_H

@class NSString, UIView, UIScrollView;
@protocol UIScrollViewDelegate, AVTCollapsibleHeaderControllerDelegate;

#import <Foundation/Foundation.h>


@interface AVTCollapsibleHeaderController : NSObject <UIScrollViewDelegate>



@property (nonatomic) CGFloat additionalTopContentInset; // ivar: _additionalTopContentInset
@property (nonatomic) CGFloat collapseMarginalScrollDistance; // ivar: _collapseMarginalScrollDistance
@property (readonly, nonatomic) CGFloat currentHeightForHeader;
@property (nonatomic) NSUInteger currentScrollDirection; // ivar: _currentScrollDirection
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<AVTCollapsibleHeaderControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat expandMarginalScrollDistance; // ivar: _expandMarginalScrollDistance
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *headerView; // ivar: _headerView
@property (nonatomic) CGFloat maxHeight; // ivar: _maxHeight
@property (nonatomic) CGFloat minHeight; // ivar: _minHeight
@property (nonatomic) CGFloat previousOffset; // ivar: _previousOffset
@property (nonatomic) CGFloat scrollToCompressionMultiplier; // ivar: _scrollToCompressionMultiplier
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (nonatomic) BOOL shouldCollapseOnBottomBounceScroll; // ivar: _shouldCollapseOnBottomBounceScroll
@property (nonatomic) BOOL shouldOnlyExpandWhenScrollingAtEdge; // ivar: _shouldOnlyExpandWhenScrollingAtEdge
@property (nonatomic) BOOL shouldPushContentOffsetOnExpandOrCollapse; // ivar: _shouldPushContentOffsetOnExpandOrCollapse
@property (nonatomic) BOOL shouldResizeHeaderForScrolling; // ivar: _shouldResizeHeaderForScrolling
@property (nonatomic) BOOL shouldSnapToMinOrMax; // ivar: _shouldSnapToMinOrMax
@property (nonatomic) CGFloat singleTouchOffset; // ivar: _singleTouchOffset
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldResizeGivenMarginalScrollDistancesForScrollDirection:(NSUInteger)arg0 ;
-(BOOL)shouldResizeGivenScrollDirection:(NSUInteger)arg0 currentHeaderHeight:(CGFloat)arg1 targetHeaderHeight:(CGFloat)arg2 ;
-(CGFloat)headerHeightForContentOffset:(CGFloat)arg0 contentInset:(struct UIEdgeInsets )arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithScrollView:(id)arg0 headerView:(id)arg1 minHeight:(CGFloat)arg2 maxHeight:(CGFloat)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(struct CGPoint )topContentOffsetWithHeaderHeight:(CGFloat)arg0 ;
-(struct UIEdgeInsets )updatedScrollViewInsetsFromExistingInsets:(struct UIEdgeInsets )arg0 ;
-(void)animationDidUpdateWithDisplayLink:(id)arg0 ;
-(void)collapseAnimated:(BOOL)arg0 ;
-(void)expandAnimated:(BOOL)arg0 ;
-(void)expandAnimated:(BOOL)arg0 withFocusRect:(struct CGRect )arg1 standardItemHeight:(CGFloat)arg2 ;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollToTopPreservingHeaderHeight:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)snapToMinMaxIfNeededAnimated:(BOOL)arg0 ;
-(void)updateHeaderForHeight:(CGFloat)arg0 withOffset:(struct CGPoint )arg1 animated:(BOOL)arg2 ;
-(void)updateHeaderHeightToMatchScrollViewStateForScrollDirection:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)updateHeaderSizeForGlobalHeaderHeight:(CGFloat)arg0 ;
-(void)updateInsetsIfNeeded;
-(void)updateMinHeight:(CGFloat)arg0 maxHeight:(CGFloat)arg1 animated:(BOOL)arg2 ;


@end


#endif