// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIAUTOSCROLLASSISTANT_H
#define _UIAUTOSCROLLASSISTANT_H

@class CADisplayLink;
@protocol _UIAutoScrollBehavior;

#import <Foundation/Foundation.h>

#import "UIScrollView.h"

@interface _UIAutoScrollAssistant : NSObject

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) NSUInteger allowedDirections; // ivar: _allowedDirections
@property (retain, nonatomic) NSObject<_UIAutoScrollBehavior> *behavior; // ivar: _behavior
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) CGFloat lastTimestamp; // ivar: _lastTimestamp
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) CGPoint point; // ivar: _point
@property (nonatomic) CGPoint referenceContentOffsetForPoint; // ivar: _referenceContentOffsetForPoint
@property (readonly, weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL started; // ivar: _started
@property (nonatomic) UIEdgeInsets touchInsets; // ivar: _touchInsets


-(BOOL)_scrollContinuous;
-(id)initWithScrollView:(id)arg0 ;
-(void)_adjustPointToCurrentContentOffset;
-(void)_handleAutoScrollerWithContentOffset:(struct CGPoint )arg0 direction:(NSUInteger)arg1 ;
-(void)autoScrollFromPoint:(struct CGPoint )arg0 ;
-(void)displayLinkFired:(id)arg0 ;
-(void)stop;


@end


#endif