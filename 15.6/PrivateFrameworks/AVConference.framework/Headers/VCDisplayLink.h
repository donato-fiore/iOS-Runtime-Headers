// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCDISPLAYLINK_H
#define VCDISPLAYLINK_H

@class CADisplayLink, NSRunLoop;
@protocol OS_dispatch_semaphore;


#import "VCObject.h"

@interface VCDisplayLink : VCObject {
    CADisplayLink *_caDisplayLink;
    *tagVCRealTimeThread _thread;
    NSRunLoop *_runLoop;
    NSUInteger _state;
    NSObject<OS_dispatch_semaphore> *_waitToRunSemaphore;
    id *_handler;
}




-(BOOL)activate;
-(BOOL)ensureDisplayIsReady;
-(id)initWithHandler:(id)arg0 ;
// -(id)initWithHandler:(id)arg0 threadPriority:(unk)arg1 threadOptions:(unsigned int)arg2 threadIdentifier:(unsigned int)arg3  ;
-(void)deactivate;
-(void)dealloc;
-(void)displayLinkTick:(id)arg0 ;
-(void)handleWaitToRunTimeout;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)runDisplayLinkThreadWithStopRequested:(*BOOL)arg0 ;


@end


#endif