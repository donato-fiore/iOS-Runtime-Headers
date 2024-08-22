// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXMULTISCROLLVIEWDELEGATE_H
#define SXMULTISCROLLVIEWDELEGATE_H

@class NSString, NSHashTable;
@protocol TSKScrollViewDelegate, UIScrollViewDelegate;

#import <Foundation/Foundation.h>


@interface SXMultiScrollViewDelegate : NSObject <TSKScrollViewDelegate, UIScrollViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *scrollViewDelegates; // ivar: _scrollViewDelegates
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSHashTable *tskScrollViewDelegates; // ivar: _tskScrollViewDelegates


-(BOOL)allowsHorizontalScrollingForScrollView:(id)arg0 ;
-(BOOL)allowsVerticalRubberbandingForScrollView:(id)arg0 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(id)init;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGPoint )scrollView:(id)arg0 restrictContentOffset:(struct CGPoint )arg1 ;
-(void)addDelegate:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)replaceDelegate:(id)arg0 withDelegate:(id)arg1 ;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidEndSwipe:(id)arg0 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidLayoutSubviews:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)scrollViewWillScroll:(id)arg0 ;


@end


#endif