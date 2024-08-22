// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMACTIVITYALARM_H
#define CMACTIVITYALARM_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMActivityAlarm : NSObject {
    BOOL fIsValid;
    *__CFRunLoop fRunLoop;
    NSObject<OS_dispatch_queue> *fQueue;
    id *fHandler;
}


@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) unsigned int trigger; // ivar: _trigger


+(BOOL)activityAlarmAvailable;
+(id)activityAlarmInfo;
-(BOOL)isValid;
-(id)initWithTrigger:(unsigned int)arg0 duration:(CGFloat)arg1 onQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithTrigger:(unsigned int)arg0 duration:(CGFloat)arg1 onRunLoop:(struct __CFRunLoop *)arg2 withHandler:(id)arg3 ;
-(void)dealloc;
-(void)fire;
-(void)invalidate;


@end


#endif