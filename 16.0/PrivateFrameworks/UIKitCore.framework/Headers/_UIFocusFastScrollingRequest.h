// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSFASTSCROLLINGREQUEST_H
#define _UIFOCUSFASTSCROLLINGREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_UIFocusEngineJoystickGestureRecognizer.h"
#import "UIPanGestureRecognizer.h"
#import "_UIRotaryGestureRecognizer.h"
#import "UIScrollView.h"

@interface _UIFocusFastScrollingRequest : NSObject

@property (nonatomic) NSUInteger allowedHeadings; // ivar: _allowedHeadings
@property (retain, nonatomic) NSArray *arrowButtonGestures; // ivar: _arrowButtonGestures
@property (copy, nonatomic) id *didBeginCallback; // ivar: _didBeginCallback
@property (copy, nonatomic) id *didEndCallback; // ivar: _didEndCallback
@property (nonatomic) NSUInteger heading; // ivar: _heading
@property (nonatomic) BOOL indexBarAnimatesEmphasisOnDisplay; // ivar: _indexBarAnimatesEmphasisOnDisplay
@property (retain, nonatomic) _UIFocusEngineJoystickGestureRecognizer *joystickGesture; // ivar: _joystickGesture
@property (retain, nonatomic) NSArray *pageButtonGestures; // ivar: _pageButtonGestures
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture; // ivar: _panGesture
@property (retain, nonatomic) _UIRotaryGestureRecognizer *rotaryGesture; // ivar: _rotaryGesture
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) NSInteger scrollingType; // ivar: _scrollingType
@property (nonatomic) CGPoint velocity; // ivar: _velocity


-(id)init;


@end


#endif