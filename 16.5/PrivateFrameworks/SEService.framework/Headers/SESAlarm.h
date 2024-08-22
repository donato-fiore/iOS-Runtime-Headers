// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SESALARM_H
#define SESALARM_H

@class NSMapTable, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SESAlarm : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSMapTable *registered;
    NSMutableSet *pendingAlarms;
}




+(BOOL)isAlarmSet:(id)arg0 ;
+(BOOL)registerAlarm:(id)arg0 handler:(id)arg1 ;
+(id)sharedObject;
+(void)clearAlarm:(id)arg0 ;
+(void)deregisterAlarm:(id)arg0 ;
+(void)kickoff;
+(void)setAlarm:(id)arg0 secondsFromNow:(CGFloat)arg1 ;
-(id)init;
-(void)_handleAlarmFired:(id)arg0 ;


@end


#endif