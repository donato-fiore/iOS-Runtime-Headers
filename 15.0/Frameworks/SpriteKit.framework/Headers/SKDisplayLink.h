// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKDISPLAYLINK_H
#define SKDISPLAYLINK_H

@class NSTimer, CADisplayLink, CADisplay;

#import <Foundation/Foundation.h>


@interface SKDisplayLink : NSObject {
    NSTimer *_timer;
    id *_client;
    CADisplayLink *_caDisplayLink;
    CADisplay *_display;
    BOOL _paused;
    BOOL _callbackAlreadyInProgress;
    CGFloat _previousFrameTime;
    float _preferredFramesPerSecond;
    id *_block;
    float _averageFrameTime;
    NSInteger _frameCount;
    CGFloat _frameCountBeginTime;
}


@property (retain, nonatomic) CADisplay *display;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) NSInteger preferredFramesPerSecond;


// +(id)displayLinkWithDisplay:(id)arg0 handler:(id)arg1 client:(unk)arg2  ;
-(BOOL)_callbackAlreadyInProgress;
-(id)init;
// -(id)initWithDisplay:(id)arg0 handler:(id)arg1 client:(unk)arg2  ;
-(void)_caDisplayLinkCallback;
-(void)_callbackForNextFrame:(CGFloat)arg0 ;
-(void)_setCallbackAlreadyInProgress:(BOOL)arg0 ;
-(void)_setup;
-(void)_teardown;
-(void)dealloc;
-(void)invalidate;


@end


#endif