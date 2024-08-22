// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDRAWERDISMISSALPANMEDIATOR_H
#define WFDRAWERDISMISSALPANMEDIATOR_H

@class UIPanGestureRecognizer, CADisplayLink;
@protocol WFDrawerDragTracking;

#import <Foundation/Foundation.h>


@interface WFDrawerDismissalPanMediator : NSObject {
    UIPanGestureRecognizer *_gestureRecognizer;
    id<WFDrawerDragTracking> *_dragTracker;
    CADisplayLink *_displayLink;
    CGFloat _translation;
    CGFloat _previousVelocity;
    CGFloat _peakVelocity;
}




-(id)initWithPanGesture:(id)arg0 dragTracker:(id)arg1 ;
-(void)dealloc;
-(void)handleDisplayLink:(id)arg0 ;
-(void)invalidate;


@end


#endif