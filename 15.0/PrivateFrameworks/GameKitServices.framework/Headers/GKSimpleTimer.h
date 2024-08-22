// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSIMPLETIMER_H
#define GKSIMPLETIMER_H

@protocol OS_dispatch_source, GKSimpleTimerDelegate;

#import <Foundation/Foundation.h>


@interface GKSimpleTimer : NSObject {
    _opaque_pthread_mutex_t _lock;
    NSObject<OS_dispatch_source> *_timerSource;
    CGFloat _startTime;
    BOOL _timerSourceSet;
}


@property (nonatomic) NSObject<GKSimpleTimerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval


-(id)init;
-(void)dealloc;
-(void)fireIn:(CGFloat)arg0 fromNow:(CGFloat)arg1 ;
-(void)invalidate;
-(void)setTimer:(CGFloat)arg0 ;


@end


#endif