// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCPERSISTENTTIMER_H
#define PCPERSISTENTTIMER_H

@class NSString;
@protocol CUTPowerMonitorDelegate, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "PCSimpleTimer.h"

@interface PCPersistentTimer : NSObject <CUTPowerMonitorDelegate>

 {
    CGFloat _fireTime;
    CGFloat _startTime;
    NSUInteger _guidancePriority;
    BOOL _triggerOnGMTChange;
    BOOL _userVisible;
    NSString *_serviceIdentifier;
    id *_target;
    SEL _selector;
    id *_userInfo;
    PCSimpleTimer *_simpleTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_logObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableSystemWaking; // ivar: _disableSystemWaking
@property (nonatomic) CGFloat earlyFireConstantInterval; // ivar: _earlyFireConstantInterval
@property (readonly, nonatomic) CGFloat fireTime;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumEarlyFireProportion; // ivar: _minimumEarlyFireProportion
@property (readonly, nonatomic) CGFloat startTime;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserVisible) BOOL userVisible;


+(CGFloat)_currentGuidanceTime;
+(CGFloat)currentMachTimeInterval;
+(id)_backgroundUpdateQueue;
+(id)lastSystemWakeDate;
+(void)_updateTime:(CGFloat)arg0 forGuidancePriority:(NSUInteger)arg1 ;
-(BOOL)firingIsImminent;
-(BOOL)isValid;
-(CGFloat)_earlyFireTime;
-(CGFloat)_nextForcedAlignmentAbsoluteTime;
-(id)_initWithAbsoluteTime:(CGFloat)arg0 serviceIdentifier:(id)arg1 guidancePriority:(NSUInteger)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(BOOL)arg6 ;
-(id)initWithFireDate:(id)arg0 serviceIdentifier:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
-(id)initWithTimeInterval:(CGFloat)arg0 serviceIdentifier:(id)arg1 guidancePriority:(NSUInteger)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(id)initWithTimeInterval:(CGFloat)arg0 serviceIdentifier:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
-(id)userInfo;
-(void)_updateTimers;
-(void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg0 ;
-(void)dealloc;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg0 ;
-(void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg0 ;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg0 ;
-(void)invalidate;
-(void)scheduleInQueue:(id)arg0 ;
-(void)scheduleInRunLoop:(id)arg0 ;
-(void)scheduleInRunLoop:(id)arg0 inMode:(id)arg1 ;


@end


#endif