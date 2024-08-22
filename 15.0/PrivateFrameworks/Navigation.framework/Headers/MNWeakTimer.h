// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNWEAKTIMER_H
#define MNWEAKTIMER_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface MNWeakTimer : NSObject

@property (nonatomic) SEL selector; // ivar: _selector
@property (weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) NSTimer *timer; // ivar: _timer


+(id)scheduledTimerWithTimeInterval:(CGFloat)arg0 target:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithTimeInterval:(CGFloat)arg0 target:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif