// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFUICIRCULARPAGINGVIEW_H
#define OFUICIRCULARPAGINGVIEW_H

@class UIScrollView, UIView, NSString;
@protocol UIScrollViewDelegate, OFUICircularPagingViewDelegate;


#import "OFUIView.h"
#import "OFUICircularPagingViewController.h"

@interface OFUICircularPagingView : OFUIView <UIScrollViewDelegate>

 {
    CGFloat _gapBetweenPages;
    UIScrollView *_scrollView;
    UIView *_previousPagingView;
    UIView *_currentPagingView;
    UIView *_nextPagingView;
    BOOL _rotationInProgress;
    BOOL _scrollViewIsMoving;
}


@property (nonatomic) OFUICircularPagingViewController *circularPagingViewController; // ivar: _circularPagingViewController
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OFUICircularPagingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pagingViewAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )_frameForPageAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )_frameForScrollView;
-(void)_updateLayout;
-(void)commonInit;
-(void)dealloc;
-(void)didRotate;
-(void)reloadData;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)willAnimateRotation;


@end


#endif