// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISUISCROLLVIEWVITALITYCONTROLLER_H
#define ISUISCROLLVIEWVITALITYCONTROLLER_H

@class UIScrollView, NSString;
@protocol UIScrollViewDelegate;


#import "ISScrollViewVitalityController.h"
#import "ISUIVisibilityOffsetHelper.h"

@interface ISUIScrollViewVitalityController : ISScrollViewVitalityController <UIScrollViewDelegate>

 {
    ISUIVisibilityOffsetHelper *_visibilityOffsetHelper;
}


@property (weak, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView; // ivar: __scrollView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformVitality;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(id)init;
-(id)visibilityOffsetHelper;
-(void)_reduceMotionDidChange:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;


@end


#endif