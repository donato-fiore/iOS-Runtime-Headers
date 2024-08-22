// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDISPLAYLINK_H
#define IMDISPLAYLINK_H

@class NSRunLoop, NSString, UIScreen;

#import <Foundation/Foundation.h>


@interface IMDisplayLink : NSObject

@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (weak, nonatomic) NSRunLoop *runLoop; // ivar: _runLoop
@property (retain, nonatomic) NSString *runLoopMode; // ivar: _runLoopMode
@property (weak, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly, weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(Class)_displayLinkClass;
+(id)displayLinkWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)_displayLinkCallback;
-(void)dealloc;
-(void)invalidate;
-(void)schedule;


@end


#endif