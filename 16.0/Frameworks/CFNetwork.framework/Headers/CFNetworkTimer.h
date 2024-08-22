// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFNETWORKTIMER_H
#define CFNETWORKTIMER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CFNetworkTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    CGFloat _interval;
    CGFloat _lastResumeTime;
    CGFloat _lastPauseTime;
    CGFloat _runTime;
    int _state;
}




-(void)dealloc;


@end


#endif