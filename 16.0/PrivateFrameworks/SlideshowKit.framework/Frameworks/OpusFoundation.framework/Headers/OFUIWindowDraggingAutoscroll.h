// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OFUIWINDOWDRAGGINGAUTOSCROLL_H
#define OFUIWINDOWDRAGGINGAUTOSCROLL_H

@class NSTimer, UIView<OFUIWindowDraggingAutoscroll>;

#import <Foundation/Foundation.h>


@interface OFUIWindowDraggingAutoscroll : NSObject

@property float autoscrollDistance; // ivar: _autoscrollDistance
@property (retain, nonatomic) NSTimer *autoscrollTimer; // ivar: _autoscrollTimer
@property (retain) UIView<OFUIWindowDraggingAutoscroll> *autoscrollView; // ivar: _autoscrollView


-(id)_hitAutoscrollViewInSuperview:(id)arg0 ;
-(id)_hitAutoscrollViewWithDraggingSession:(id)arg0 ;
-(id)init;
-(void)_autoscrollTimerFired:(id)arg0 ;
-(void)dealloc;
-(void)maybeStartAutoscrollForDraggingSession:(id)arg0 ;
-(void)stopAutoscroll;


@end


#endif