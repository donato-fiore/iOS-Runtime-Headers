// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSFASTSCROLLINGTEST_H
#define _UIFOCUSFASTSCROLLINGTEST_H

@class UIFocusTest, NSTimer;
@protocol UIFocusItem;


#import "UIScrollView.h"

@interface _UIFocusFastScrollingTest : UIFocusTest {
    NSUInteger _currentScroll;
    CGPoint _originalContentOffset;
    id<UIFocusItem> *_originalFocusedItem;
    NSTimer *_delayTimer;
}


@property (nonatomic) CGFloat delayBetweenScrolls; // ivar: _delayBetweenScrolls
@property (nonatomic) NSUInteger numberOfScrollsToPerform; // ivar: _numberOfScrollsToPerform
@property (nonatomic) CGFloat peakScrollVelocity; // ivar: _peakScrollVelocity
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


-(id)initWithIdentifier:(id)arg0 ;
-(void)_performFocusFastScrolling;
-(void)cancel;
-(void)main;
-(void)prepareWithCompletionHandler:(id)arg0 ;
-(void)reset;


@end


#endif