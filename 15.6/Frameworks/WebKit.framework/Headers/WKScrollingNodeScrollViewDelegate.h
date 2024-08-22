// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSCROLLINGNODESCROLLVIEWDELEGATE_H
#define WKSCROLLINGNODESCROLLVIEWDELEGATE_H

@class NSString;
@protocol UIScrollViewDelegate;

#import <Foundation/Foundation.h>


@interface WKScrollingNodeScrollViewDelegate : NSObject <UIScrollViewDelegate>

 {
    *void _scrollingTreeNodeDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_isInUserInteraction) BOOL inUserInteraction; // ivar: _inUserInteraction
@property (readonly) Class superclass;


-(id)_actingParentScrollViewForScrollView:(id)arg0 ;
-(id)initWithScrollingTreeNodeDelegate:(*void)arg0 ;
-(struct CGPoint )_scrollView:(id)arg0 adjustedOffsetForOffset:(struct CGPoint )arg1 translation:(struct CGPoint )arg2 startPoint:(struct CGPoint )arg3 locationInView:(struct CGPoint )arg4 horizontalVelocity:(*CGFloat)arg5 verticalVelocity:(*CGFloat)arg6 ;
-(void)_scrollView:(id)arg0 asynchronouslyHandleScrollEvent:(id)arg1 completion:(id)arg2 ;
-(void)cancelPointersForGestureRecognizer:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;


@end


#endif