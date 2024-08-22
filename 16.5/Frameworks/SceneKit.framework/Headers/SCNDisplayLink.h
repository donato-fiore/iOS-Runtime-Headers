// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNDISPLAYLINK_H
#define SCNDISPLAYLINK_H

@class CADisplayLink;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SCNRecursiveLock.h"

@interface SCNDisplayLink : NSObject {
    CADisplayLink *_caDisplayLink;
    uint8_t _lastDisplayLinkTime;
    NSObject<OS_dispatch_source> *_coalescingSource;
    id *_block;
    id *_adaptativeFrameDuration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _paused;
    BOOL _invalidated;
    CGFloat _lastFrameTime;
    float _preferredFrameRate;
    SCNRecursiveLock *_runningLock;
    uint8_t _queuedFrameCount;
}


@property (copy, nonatomic) id *adaptativeFrameRate;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) float preferredFrameRate;


-(BOOL)_isInvalidated;
-(id)init;
-(id)initWithQueue:(id)arg0 screen:(id)arg1 policy:(NSUInteger)arg2 block:(id)arg3 ;
-(int)queuedFrameCount;
-(void)_caDisplayLinkCallback;
-(void)_callbackWithTime:(CGFloat)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)setNeedsDisplay;


@end


#endif