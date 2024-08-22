// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
}




-(BOOL)isPaused;
-(id)initWithDisplay:(struct __Display *)arg0 andQueue:(id)arg1 ;
-(void)dealloc;
-(void)frameSync:(id)arg0 ;
-(void)pause;
-(void)resume;
-(void)setPreferredFramesPerSecond:(float)arg0 ;


@end


#endif