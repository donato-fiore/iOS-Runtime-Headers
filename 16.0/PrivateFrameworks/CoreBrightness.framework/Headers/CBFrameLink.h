// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBFRAMELINK_H
#define CBFRAMELINK_H

@class CADisplayLink;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CBFrameLink : NSObject {
    NSObject<OS_os_log> *_logHandle;
    *__Display _display;
    NSObject<OS_dispatch_queue> *_queue;
    id *_fadeCallbackBlock;
    CADisplayLink *_displayLink;
    id *_frameNotificationBlock;
}


@property (readonly, nonatomic) CGFloat targetTimestamp;


-(BOOL)isPaused;
-(id)init;
-(id)initWithDisplay:(struct __Display *)arg0 andQueue:(id)arg1 ;
-(void)dealloc;
-(void)frameSync:(id)arg0 ;
-(void)invalidate;
-(void)pause;
-(void)resume;
-(void)scheduleWithDispatchQueue:(id)arg0 ;
-(void)setFrameNotificationBlock:(id)arg0 ;
-(void)setPreferredFramesPerSecond:(float)arg0 ;


@end


#endif