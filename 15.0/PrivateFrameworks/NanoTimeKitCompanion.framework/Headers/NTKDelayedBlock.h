// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDELAYEDBLOCK_H
#define NTKDELAYEDBLOCK_H

@class NSString, NSTimer;

#import <Foundation/Foundation.h>


@interface NTKDelayedBlock : NSObject

@property (copy, nonatomic) id *action; // ivar: _action
@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) NSString *runLoopMode; // ivar: _runLoopMode
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


-(id)initWithDelay:(CGFloat)arg0 action:(id)arg1 ;
-(id)initWithDelay:(CGFloat)arg0 runLoopMode:(id)arg1 action:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)reset;
-(void)resetWithDelay:(CGFloat)arg0 ;
-(void)timerFired:(id)arg0 ;


@end


#endif