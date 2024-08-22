// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSUISCROLLVIEW_H
#define BSUISCROLLVIEW_H

@class UIScrollView, NSString;
@protocol UIScrollViewDelegate, BSUIScrollViewDelegate;



@interface BSUIScrollView : UIScrollView <UIScrollViewDelegate>

 {
    BOOL _isScrolling;
    BOOL _preventDidEndScrolling;
    BOOL _didScroll;
    id *_scrollCompletion;
    CGPoint _previousContentOffset;
    CGPoint _initialContentOffset;
}


@property (readonly, nonatomic) ? currentScrollContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BSUIScrollViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling; // ivar: _scrolling
@property (readonly) Class superclass;


-(BOOL)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)setContentOffset:(struct CGPoint )arg0 withAnimationSettings:(id)arg1 completion:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_bs_didEndScrolling;
-(void)_bs_didScrollWithContext:(struct ? )arg0 ;
-(void)_bs_willBeginScrolling;
-(void)_didDidEndDeceleratingNotification:(id)arg0 ;
-(void)_didEndDraggingNotification:(id)arg0 ;
-(void)_didEndScrollAnimationNotification:(id)arg0 ;
-(void)_notifyDidScroll;
-(void)_setContentOffset:(struct CGPoint )arg0 animation:(id)arg1 ;
-(void)_willBeginDraggingNotification:(id)arg0 ;
-(void)dealloc;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;


@end


#endif