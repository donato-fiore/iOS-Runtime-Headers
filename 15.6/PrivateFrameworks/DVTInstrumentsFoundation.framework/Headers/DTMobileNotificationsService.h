// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTMOBILENOTIFICATIONSSERVICE_H
#define DTMOBILENOTIFICATIONSSERVICE_H

@class DTXService, RBSProcessMonitor, NSString;
@protocol DTMobileNotificationsServiceAuthorizedAPI, OS_dispatch_source;



@interface DTMobileNotificationsService : DTXService <DTMobileNotificationsServiceAuthorizedAPI>

 {
    BOOL _applicationStateNotificationsEnabled;
    NSObject<OS_dispatch_source> *_memoryNotificationSource;
    int _thermalToken;
    int _thermalLevel;
    BOOL _registeredForThermal;
}


@property (retain, nonatomic) RBSProcessMonitor *appStateMonitor; // ivar: _appStateMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)initWithChannel:(id)arg0 ;
-(void)_memoryNotification:(unsigned int)arg0 pid:(int)arg1 ;
-(void)_registerForThermalNotifications;
-(void)_setAppStateNotificationsEnabled:(BOOL)arg0 ;
-(void)_setMemNotificationsEnabled:(BOOL)arg0 ;
-(void)messageReceived:(id)arg0 ;
-(void)setApplicationStateNotificationsEnabled:(id)arg0 ;
-(void)setMemoryNotificationsEnabled:(id)arg0 ;


@end


#endif