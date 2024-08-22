// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCHARACTERISTICNOTIFICATIONMANAGER_H
#define HFCHARACTERISTICNOTIFICATIONMANAGER_H

@class NSString, NSDate, HMHome, NSMutableSet;
@protocol HFHomeManagerObserver, HFHomeObserver;

#import <Foundation/Foundation.h>


@interface HFCharacteristicNotificationManager : NSObject <HFHomeManagerObserver, HFHomeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastNotificationsEnableRequestDate; // ivar: _lastNotificationsEnableRequestDate
@property (readonly, nonatomic) BOOL notificationsEnabled;
@property (retain, nonatomic) HMHome *notificationsEnabledHome; // ivar: _notificationsEnabledHome
@property (readonly, nonatomic) NSMutableSet *notificationsEnabledReasons; // ivar: _notificationsEnabledReasons
@property (readonly, nonatomic) BOOL notificationsReasonsExist;
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)init;
-(void)_updateNotificationsEnabled;
-(void)_updateNotificationsEnabledWithNumberOfAppleMediaAccessories:(NSUInteger)arg0 ;
-(void)disableNotificationsForSelectedHomeWithReason:(id)arg0 ;
-(void)enableNotificationsForSelectedHomeWithReason:(id)arg0 ;
-(void)enableNotificationsForSelectedHomeWithReason:(id)arg0 numberOfAppleMediaAccessories:(NSUInteger)arg1 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg0 ;


@end


#endif