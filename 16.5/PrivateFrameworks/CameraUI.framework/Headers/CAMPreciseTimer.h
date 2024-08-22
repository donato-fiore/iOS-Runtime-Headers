// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMPRECISETIMER_H
#define CAMPRECISETIMER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CAMPreciseTimer : NSObject

@property (retain, nonatomic, setter=_setCurrentTimer:) NSObject<OS_dispatch_source> *_currentTimer; // ivar: __currentTimer
@property (readonly, copy, nonatomic) id *_handler; // ivar: __handler
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic, setter=_setFired:) BOOL fired; // ivar: _fired
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval


-(id)init;
-(id)initWithDelay:(CGFloat)arg0 interval:(CGFloat)arg1 handler:(id)arg2 ;
-(void)invalidate;
-(void)start;


@end


#endif