// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTRANSITIONDRIVER_H
#define QLTRANSITIONDRIVER_H

@class UIView;
@protocol QLDismissGestureTracking;

#import <Foundation/Foundation.h>

#import "QLItem.h"

@interface QLTransitionDriver : NSObject

@property (retain) UIView *destinationView; // ivar: _destinationView
@property CGFloat duration; // ivar: _duration
@property (retain) NSObject<QLDismissGestureTracking> *gestureTracker; // ivar: _gestureTracker
@property CGFloat hostNavigationOffset; // ivar: _hostNavigationOffset
@property BOOL isSourceViewTransformed; // ivar: _isSourceViewTransformed
@property BOOL presenting; // ivar: _presenting
@property (retain) UIView *sourceView; // ivar: _sourceView
@property CGRect sourceViewBounds; // ivar: _sourceViewBounds
@property CGPoint sourceViewCenter; // ivar: _sourceViewCenter
@property CGRect sourceViewFrame; // ivar: _sourceViewFrame
@property CGAffineTransform sourceViewTransform; // ivar: _sourceViewTransform
@property CGFloat topNavigationOffset; // ivar: _topNavigationOffset
@property (retain) UIView *transitionContainer; // ivar: _transitionContainer
@property BOOL transitionContainerMasksToBounds; // ivar: _transitionContainerMasksToBounds
@property CGRect transitionContainerOriginalFrame; // ivar: _transitionContainerOriginalFrame
@property (retain) QLItem *transitionPreviewItem; // ivar: _transitionPreviewItem
@property CGSize transitionPreviewSize; // ivar: _transitionPreviewSize
@property CGRect uncroppedFrame; // ivar: _uncroppedFrame


-(void)animateTransition;
-(void)tearDown;


@end


#endif