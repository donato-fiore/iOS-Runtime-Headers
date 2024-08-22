// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARDISPLAYLINK_H
#define ARDISPLAYLINK_H

@class CADisplayLink;

#import <Foundation/Foundation.h>

#import "ARRunLoop.h"

@interface ARDisplayLink : NSObject {
    CADisplayLink *_displayLink;
    id *_callback;
    os_unfair_lock_s _lock;
    CGFloat _actualVsyncOffset;
}


@property NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (readonly, nonatomic) ARRunLoop *runloop; // ivar: _runloop
@property CGFloat vsyncOffset; // ivar: _vsyncOffset


-(id)init;
-(id)initWithPreferredFramesPerSecond:(NSInteger)arg0 callback:(id)arg1 ;
-(void)_recomputeActualVsyncOffsetWithVsyncOffset:(CGFloat)arg0 preferredFramesPerSecond:(NSInteger)arg1 ;
-(void)dealloc;
-(void)displayLinkCallback;
-(void)invalidate;


@end


#endif