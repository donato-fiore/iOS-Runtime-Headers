// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSCROLLGESTURECONTROLLER_H
#define CSSCROLLGESTURECONTROLLER_H

@class UIScrollView, UIView<CSScrollableView>, UIGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, BSDescriptionProviding, CSEventHandling, CSScrollGestureControllerDelegate;

#import <Foundation/Foundation.h>

#import "CSHorizontalScrollFailureRecognizer.h"

@interface CSScrollGestureController : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding, CSEventHandling>

 {
    UIScrollView *_scrollView;
    UIView<CSScrollableView> *_scrollableView;
    UIGestureRecognizer *_scrollViewGestureRecognizer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSScrollGestureControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSHorizontalScrollFailureRecognizer *horizontalFailureGestureRecognizer; // ivar: _horizontalFailureGestureRecognizer
@property (nonatomic) NSInteger scrollingStrategy; // ivar: _scrollingStrategy
@property (readonly) Class superclass;


-(BOOL)_shouldAllowScrollForScrollingStrategy:(NSInteger)arg0 ;
-(BOOL)_shouldFailHorizontalSwipesForScrollingStrategy:(NSInteger)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithScrollableView:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_horizontalScrollFailureGestureRecognizerChanged:(id)arg0 ;
-(void)_updateForScrollingStrategy:(NSInteger)arg0 fromScrollingStrategy:(NSInteger)arg1 ;
-(void)conformsToCSEventHandling;
-(void)dealloc;
-(void)invalidate;


@end


#endif