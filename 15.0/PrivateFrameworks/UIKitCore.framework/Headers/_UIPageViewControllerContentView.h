// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPAGEVIEWCONTROLLERCONTENTVIEW_H
#define _UIPAGEVIEWCONTROLLERCONTENTVIEW_H



#import "UIView.h"
#import "UIPageViewController.h"
#import "UIPageControl.h"
#import "_UIQueuingScrollView.h"

@interface _UIPageViewControllerContentView : UIView {
    UIPageViewController *_pageViewController;
}


@property (readonly, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (readonly, nonatomic) _UIQueuingScrollView *scrollView; // ivar: _scrollView


-(BOOL)canBecomeFocused;
-(CGFloat)_pageSpacing;
-(id)initWithFrame:(struct CGRect )arg0 andPageViewController:(id)arg1 ;
-(id)preferredFocusedView;
-(void)_setupPageControl:(id)arg0 ;
-(void)invalidatePageViewController;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif