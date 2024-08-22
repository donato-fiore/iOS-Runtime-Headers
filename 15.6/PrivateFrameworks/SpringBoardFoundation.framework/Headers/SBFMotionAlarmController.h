// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFMOTIONALARMCONTROLLER_H
#define SBFMOTIONALARMCONTROLLER_H

@class NSString, CMMotionAlarmManager, NSMutableArray;
@protocol CMMotionAlarmDelegateProtocol, SBFMotionAlarmDelegate;

#import <Foundation/Foundation.h>


@interface SBFMotionAlarmController : NSObject <CMMotionAlarmDelegateProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFMotionAlarmDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CMMotionAlarmManager *motionAlarmManager; // ivar: _motionAlarmManager
@property (retain, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)init;
-(void)_notifyDelegate;
-(void)_registerMotionAlarm;
-(void)_unregisterMotionAlarm;
-(void)alarmDidFire:(id)arg0 error:(id)arg1 ;
-(void)alarmDidRegister:(id)arg0 error:(id)arg1 ;
-(void)alarmDidUnregister:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)registerMotionAlarm;
-(void)remoteAppLaunchedWithResult:(unsigned int)arg0 error:(id)arg1 ;
-(void)unregisterMotionAlarm;


@end


#endif