// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNDEFAULTTIMETOLEAVEREFRESHMONITOR_H
#define CALNDEFAULTTIMETOLEAVEREFRESHMONITOR_H

@class NSString;
@protocol CALNTimeToLeaveRefreshMonitor, CADModule, CALNTimeToLeaveRefreshMonitorDelegate, CALNTimeToLeaveRefreshStorage;

#import <Foundation/Foundation.h>


@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor, CADModule>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CALNTimeToLeaveRefreshMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isRegisteredForAlarms) BOOL registeredForAlarms; // ivar: _registeredForAlarms
@property (readonly, nonatomic) NSObject<CALNTimeToLeaveRefreshStorage> *storage; // ivar: _storage
@property (readonly) Class superclass;


+(id)_refreshTimerAlarmNameForEventExternalURL:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;
-(void)_refreshTimerFiredForEventExternalURL:(id)arg0 ;
-(void)activate;
-(void)deactivate;
-(void)didRegisterForAlarms;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedAlarmNamed:(id)arg0 ;
-(void)receivedNotificationNamed:(id)arg0 ;
-(void)removeRefreshTimerForEventExternalURL:(id)arg0 ;
-(void)setUpRefreshTimerWithTriggerDate:(id)arg0 eventExternalURL:(id)arg1 ;


@end


#endif