// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKKEYBOARDSCROLLVIEWANIMATOR_H
#define WKKEYBOARDSCROLLVIEWANIMATOR_H

@class NSString;
@protocol WKKeyboardScrollableInternal, WKKeyboardScrollViewAnimatorDelegate;

#import <Foundation/Foundation.h>


@interface WKKeyboardScrollViewAnimator : NSObject <WKKeyboardScrollableInternal>

 {
    WeakObjCPtr<UIScrollView> _scrollView;
    RetainPtr<WKKeyboardScrollingAnimator> _animator;
    BOOL _delegateRespondsToIsKeyboardScrollable;
    BOOL _delegateRespondsToDistanceForIncrement;
    BOOL _delegateRespondsToWillScroll;
    BOOL _delegateRespondsToDidFinishScrolling;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WKKeyboardScrollViewAnimatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)beginWithEvent:(id)arg0 ;
-(BOOL)isKeyboardScrollable;
-(BOOL)scrollTriggeringKeyIsPressed;
-(CGFloat)distanceForIncrement:(unsigned char)arg0 inDirection:(unsigned char)arg1 ;
-(id)init;
-(id)initWithScrollView:(id)arg0 ;
-(struct CGPoint )boundedContentOffset:(struct CGPoint )arg0 ;
-(struct CGPoint )contentOffset;
-(struct CGSize )interactiveScrollVelocity;
-(struct RectEdges<bool> )rubberbandableDirections;
-(struct RectEdges<bool> )scrollableDirectionsFromOffset:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)didFinishScrolling;
-(void)handleKeyEvent:(id)arg0 ;
-(void)invalidate;
-(void)scrollToContentOffset:(struct FloatPoint )arg0 animated:(BOOL)arg1 ;
-(void)scrollWithScrollToExtentAnimationTo:(struct CGPoint )arg0 ;
-(void)willStartInteractiveScroll;


@end


#endif