// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUIAUTOSCROLLER_H
#define PXUIAUTOSCROLLER_H

@class CADisplayLink;


#import "PXAutoScroller.h"

@interface PXUIAutoScroller : PXAutoScroller

@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink


-(BOOL)autoscrollWithOffset:(struct CGPoint )arg0 ;
-(struct CGRect )visibleRectForScrollView:(id)arg0 ;
-(void)_handleDisplayLink:(id)arg0 ;
-(void)startRepeating;
-(void)stopRepeating;
-(void)updateWithGestureRecognizer:(id)arg0 ;


@end


#endif