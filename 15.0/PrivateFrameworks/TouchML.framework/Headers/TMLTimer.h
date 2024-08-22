// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLTIMER_H
#define TMLTIMER_H

@class NSTimer, NSString;

#import <Foundation/Foundation.h>


@interface TMLTimer : NSObject {
    NSTimer *_timer;
}


@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (nonatomic) BOOL repeats; // ivar: _repeats
@property (copy, nonatomic) NSString *runLoopMode; // ivar: _runLoopMode
@property (nonatomic) BOOL running; // ivar: _running
@property (nonatomic) CGFloat tolerance; // ivar: _tolerance


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(void)initializeJSContext:(id)arg0 ;
-(void)fire;
-(void)start;
-(void)stop;
-(void)timerFired:(id)arg0 ;
-(void)tmlDispose;


@end


#endif