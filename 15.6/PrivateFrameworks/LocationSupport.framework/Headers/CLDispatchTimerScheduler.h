// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLDISPATCHTIMERSCHEDULER_H
#define CLDISPATCHTIMERSCHEDULER_H

@protocol CLTimerScheduler, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CLTimer.h"

@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler>



@property (retain, nonatomic) NSObject<OS_dispatch_source> *source; // ivar: _source
@property (weak, nonatomic) CLTimer *timer; // ivar: timer


-(id)initWithDispatchSilo:(id)arg0 ;
-(void)dealloc;
-(void)reflectNextFireDelay:(CGFloat)arg0 fireInterval:(CGFloat)arg1 ;


@end


#endif