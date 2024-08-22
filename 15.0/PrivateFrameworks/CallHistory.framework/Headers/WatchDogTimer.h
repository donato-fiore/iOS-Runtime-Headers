// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WATCHDOGTIMER_H
#define WATCHDOGTIMER_H

@class NSString;
@protocol OS_dispatch_source;


#import "CHLogger.h"

@interface WatchDogTimer : CHLogger {
    NSString *_name;
    NSObject<OS_dispatch_source> *_timer;
}




-(id)initWithQueue:(id)arg0 withName:(id)arg1 withTimeout:(CGFloat)arg2 withCallback:(id)arg3 ;
-(void)cancel;
-(void)dealloc;


@end


#endif