// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDISPLAYLINK_H
#define ICDISPLAYLINK_H

@class CADisplayLink, NSRunLoop, NSString, UIScreen;

#import <Foundation/Foundation.h>


@interface ICDisplayLink : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (weak, nonatomic) NSRunLoop *runLoop; // ivar: _runLoop
@property (retain, nonatomic) NSString *runLoopMode; // ivar: _runLoopMode
@property (weak, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly, weak, nonatomic) id *target; // ivar: _target


-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)schedule;


@end


#endif