// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKTIMERANIMATION_H
#define OKTIMERANIMATION_H

@class NSTimer, NSDictionary, NSMutableDictionary, CAMediaTimingFunction;

#import <Foundation/Foundation.h>


@interface OKTimerAnimation : NSObject {
    NSTimer *_timer;
    NSDictionary *_fromValues;
    NSDictionary *_toValues;
    CGFloat _duration;
    CGFloat _currentInterval;
    NSMutableDictionary *_previousValues;
    id *_progressBlock;
    id *_completionBlock;
}


@property (nonatomic) BOOL additionally; // ivar: _additionally
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


// +(id)animationFromValues:(id)arg0 toValues:(id)arg1 withDuration:(CGFloat)arg2 progressBlock:(id)arg3 completionBlock:(unk)arg4  ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)handleTimer:(id)arg0 ;
-(void)start;


@end


#endif