// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COALARMSERVICE_H
#define COALARMSERVICE_H

@class NSString;
@protocol COAlarmManagerServiceInterface, COMeshAlarmAddOnDelegate;


#import "COService.h"
#import "COClientObserverSet.h"

@interface COAlarmService : COService <COAlarmManagerServiceInterface, COMeshAlarmAddOnDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) COClientObserverSet *observers; // ivar: _observers
@property (readonly) Class superclass;


+(BOOL)_isAllowedClient:(id)arg0 ;
+(id)serviceWithDelegate:(id)arg0 ;
-(BOOL)_canRequestCreationOfCluster:(id)arg0 ;
-(id)initWithListenerProvider:(id)arg0 addOnProvider:(id)arg1 delegate:(id)arg2 ;
-(void)_addOnAdded:(id)arg0 ;
-(void)_addOnRemoved:(id)arg0 ;
-(void)_clientLost:(id)arg0 ;
-(void)_configureServiceInterfacesOnConnection:(id)arg0 ;
-(void)_didResetAlarmAddOn:(id)arg0 ;
-(void)_postNotificationName:(id)arg0 forAlarms:(id)arg1 toAddOn:(id)arg2 requiresUserInfo:(BOOL)arg3 ;
-(void)addAlarm:(id)arg0 forAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 withCallback:(id)arg5 ;
-(void)addObserverForNotificationName:(id)arg0 constraints:(id)arg1 asInstance:(id)arg2 cluster:(id)arg3 withCallback:(id)arg4 ;
-(void)alarmAddOn:(id)arg0 didAddAlarms:(id)arg1 ;
-(void)alarmAddOn:(id)arg0 didChangeAlarms:(id)arg1 ;
-(void)alarmAddOn:(id)arg0 didChangeFiringAlarms:(id)arg1 ;
-(void)alarmAddOn:(id)arg0 didDismissAlarms:(id)arg1 ;
-(void)alarmAddOn:(id)arg0 didFireAlarms:(id)arg1 ;
-(void)alarmAddOn:(id)arg0 didRemoveAlarms:(id)arg1 ;
-(void)alarmAddOn:(id)arg0 didUpdateAlarms:(id)arg1 ;
-(void)alarmsforAccessoryUniqueIdentifier:(id)arg0 categoryType:(id)arg1 asInstance:(id)arg2 cluster:(id)arg3 withCallback:(id)arg4 ;
-(void)canDispatchForAccessoryUniqueIdentifier:(id)arg0 categoryType:(id)arg1 asInstance:(id)arg2 cluster:(id)arg3 reply:(id)arg4 ;
-(void)didChangeCompositionForAlarmAddOn:(id)arg0 ;
-(void)didResetAlarmAddOn:(id)arg0 ;
-(void)dismissAlarmWithIdentifier:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)removeAlarm:(id)arg0 forAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 withCallback:(id)arg5 ;
-(void)removeObserverForNotificationName:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)snoozeAlarmWithIdentifier:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)updateAlarm:(id)arg0 forAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 asInstance:(id)arg3 cluster:(id)arg4 withCallback:(id)arg5 ;


@end


#endif