// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNEKALARMENGINEMONITOR_H
#define CALNEKALARMENGINEMONITOR_H

@class NSString, NSNotificationCenter;
@protocol CALNAlarmEngineMonitor, CADModule;

#import <Foundation/Foundation.h>

#import "_EKAlarmEngine.h"

@interface CALNEKAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor, CADModule>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) _EKAlarmEngine *alarmEngine; // ivar: _alarmEngine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;


-(id)initWithAlarmEngine:(id)arg0 notificationCenter:(id)arg1 ;
-(void)activate;
-(void)addAlarmsFiredObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)deactivate;
-(void)didRegisterForAlarms;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedAlarmNamed:(id)arg0 ;
-(void)receivedNotificationNamed:(id)arg0 ;
-(void)removeAlarmsFiredObserver:(id)arg0 ;


@end


#endif