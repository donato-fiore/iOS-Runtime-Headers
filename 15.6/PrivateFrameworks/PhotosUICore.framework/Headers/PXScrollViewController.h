// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSCROLLVIEWCONTROLLER_H
#define PXSCROLLVIEWCONTROLLER_H

@class NSHashTable, NSString;
@protocol PXTilingScrollController, UICoordinateSpace, PXAnonymousScrollView, PXTilingScrollControllerUpdateDelegate;

#import <Foundation/Foundation.h>

#import "PXTilingScrollInfo.h"

@interface PXScrollViewController : NSObject <PXTilingScrollController>

 {
    NSHashTable *_willLayoutSubviewsObservers;
    NSHashTable *_didLayoutSubviewsObservers;
    NSHashTable *_didScrollObservers;
}


@property (readonly, nonatomic) NSHashTable *_observers; // ivar: __observers
@property (readonly, nonatomic) CGRect activeRect;
@property (readonly, nonatomic) NSInteger activeScrollAnimations; // ivar: _activeScrollAnimations
@property (nonatomic) BOOL clipsToBounds; // ivar: _clipsToBounds
@property (readonly, nonatomic) CGRect constrainedVisibleRect;
@property (nonatomic) CGRect contentBounds;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *contentCoordinateSpace; // ivar: _contentCoordinateSpace
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger decelerationRate; // ivar: _decelerationRate
@property (nonatomic) BOOL deferContentOffsetUpdates; // ivar: _deferContentOffsetUpdates
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL draggingPerformsScroll; // ivar: _draggingPerformsScroll
@property (readonly, nonatomic) BOOL hasWindow;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAnimatingScroll;
@property (readonly, nonatomic) BOOL isDecelerating; // ivar: _isDecelerating
@property (readonly, nonatomic) BOOL isDragging; // ivar: _isDragging
@property (readonly, nonatomic) BOOL isManuallyChanging; // ivar: _isManuallyChanging
@property (readonly, nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (readonly, nonatomic) BOOL isTracking; // ivar: _isTracking
@property (nonatomic) CGSize presentedContentSize; // ivar: presentedContentSize
@property (readonly, nonatomic) CGSize referenceSize;
@property (nonatomic) BOOL respectsContentZOrder; // ivar: _respectsContentZOrder
@property (copy, nonatomic) PXTilingScrollInfo *scrollInfo; // ivar: _scrollInfo
@property (readonly, nonatomic) NSObject<PXAnonymousScrollView> *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) CGRect scrollViewActiveRect;
@property (readonly, nonatomic) CGRect scrollViewConstrainedVisibleRect;
@property (nonatomic) CGRect scrollViewContentBounds;
@property (readonly, nonatomic) CGSize scrollViewContentSize; // ivar: _scrollViewContentSize
@property (readonly, nonatomic) CGSize scrollViewReferenceSize;
@property (readonly, nonatomic) CGRect scrollViewTargetRect;
@property (readonly, nonatomic) CGRect scrollViewVisibleRect;
@property (readonly, nonatomic) CGRect scrollViewVisibleRectOutsideBounds;
@property (nonatomic) BOOL showsHorizontalScrollIndicator; // ivar: _showsHorizontalScrollIndicator
@property (nonatomic) BOOL showsVerticalScrollIndicator; // ivar: _showsVerticalScrollIndicator
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect targetRect;
@property (weak, nonatomic) NSObject<PXTilingScrollControllerUpdateDelegate> *updateDelegate; // ivar: _updateDelegate
@property (nonatomic) CGPoint visibleOrigin;
@property (readonly, nonatomic) CGRect visibleRect;
@property (readonly, nonatomic) CGRect visibleRectOutsideBounds;


-(BOOL)isScrolledAtEdge:(unsigned int)arg0 tolerance:(CGFloat)arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addFloatingSublayer:(id)arg0 forAxis:(NSInteger)arg1 ;
-(void)addSubview:(id)arg0 ;
-(void)addSubviewToScrollView:(id)arg0 ;
-(void)applyScrollInfo:(id)arg0 ;
-(void)performManualChange:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)scrollRectToVisible:(struct CGRect )arg0 avoidingContentInsetEdges:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)scrollToEdge:(unsigned int)arg0 animated:(BOOL)arg1 ;
-(void)scrollToEdge:(unsigned int)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)scrollViewWillBeginScrollingAnimationTowardsContentEdges:(NSUInteger)arg0 ;
-(void)setNeedsUpdate;
-(void)stopScrollingAndZoomingAnimations;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateIfNeeded;
-(void)willEndScrollingWithVelocity:(struct CGPoint )arg0 targetContentOffset:(struct CGPoint *)arg1 ;


@end


#endif