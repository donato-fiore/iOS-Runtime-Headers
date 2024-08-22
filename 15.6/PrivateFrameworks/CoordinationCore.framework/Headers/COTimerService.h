// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COTIMERSERVICE_H
#define COTIMERSERVICE_H

@class NSString;
@protocol COTimerManagerServiceInterface, COMeshTimerAddOnDelegate;


#import "COService.h"
#import "COClientObserverSet.h"

@interface COTimerService : COService <COTimerManagerServiceInterface, COMeshTimerAddOnDelegate>



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
-(void)_didResetTimerAddOn:(id)arg0 ;
-(void)_postNotificationName:(id)arg0 forTimers:(id)arg1 toAddOn:(id)arg2 requiresUserInfo:(BOOL)arg3 ;
-(void)addObserverForNotificationName:(id)arg0 constraints:(id)arg1 asInstance:(id)arg2 cluster:(id)arg3 withCallback:(id)arg4 ;
-(void)addTimer:(id)arg0 asInstance:(id)arg1 cluster:(id)arg2 withCallback:(id)arg3 ;
-(void)canDispatchForAccessoryUniqueIdentifier:(id)arg0 categoryType:(id)arg1 asInstance:(id)arg2 cluster:(id)arg3 reply:(id)arg4 ;
-(void)didChangeCompositionForTimerAddOn:(id)arg0 ;
-(void)didResetTimerAddOn:(id)arg0 ;
-(void)dismissTimerWithIdentifier:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)removeObserverForNotificationName:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)removeTimer:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;
-(void)timerAddOn:(id)arg0 didAddTimers:(id)arg1 ;
-(void)timerAddOn:(id)arg0 didChangeTimers:(id)arg1 ;
-(void)timerAddOn:(id)arg0 didDismissTimers:(id)arg1 ;
-(void)timerAddOn:(id)arg0 didFireTimers:(id)arg1 ;
-(void)timerAddOn:(id)arg0 didRemoveTimers:(id)arg1 ;
-(void)timerAddOn:(id)arg0 didUpdateTimers:(id)arg1 ;
-(void)timersforAccessoryUniqueIdentifier:(id)arg0 asInstance:(id)arg1 cluster:(id)arg2 withCallback:(id)arg3 ;
-(void)updateTimer:(id)arg0 cluster:(id)arg1 withCallback:(id)arg2 ;


@end


#endif