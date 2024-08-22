// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPHOMEUSERMONITOR_H
#define MPHOMEUSERMONITOR_H

@class HMUser, HMHome, HMSettings, NSString;
@protocol HMSettingsDelegate, HMUserDelegatePrivate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPHomeUserMonitor : NSObject <HMSettingsDelegate, HMUserDelegatePrivate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    HMUser *_user;
    HMHome *_home;
    HMSettings *_privateHomeSettings;
    HMSettings *_sharedSettings;
    BOOL _allowExplicitCachedValue;
    BOOL _currentAccessoryPrivateListeningCachedValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExplicitSettingEnabled) BOOL explicitSettingEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPrivateListeningEnabledForCurrentAccessory) BOOL privateListeningEnabledForCurrentAccessory;
@property (readonly) Class superclass;


+(BOOL)isPrivateListeningEnabledForCurrentUserAndAccessory;
+(id)monitorForCurrentUser;
+(id)userMonitorWithHomeIdentifier:(id)arg0 ;
+(id)userMonitorWithHomeIdentifiers:(id)arg0 ;
+(id)userMonitorWithUserIdentity:(id)arg0 fromUserIdentityStore:(id)arg1 ;
+(void)setPrivateListeningEnabledForCurrentUserAndAccessory:(BOOL)arg0 ;
-(BOOL)hasAccessoryWithRouteID:(id)arg0 ;
-(BOOL)privateListeningEnabledForAccessoryWithRouteID:(id)arg0 ;
-(id)initWithUser:(id)arg0 home:(id)arg1 ;
-(id)privateListeningEnabledForGroupWithRouteIDs:(id)arg0 ;
-(void)_loadAllowExplicitValue;
-(void)_loadCurrentAccessoryPrivateListening;
-(void)_notifyAllowExplicitUpdated;
-(void)_notifyPrivateListeningUpdated;
-(void)_postNotificationWithName:(id)arg0 ;
-(void)_update;
-(void)_updateUserListeningHistoryControlForAccessory:(id)arg0 enable:(BOOL)arg1 ;
-(void)setPrivateListeningEnabledForAccessoryWithRouteID:(id)arg0 enabled:(BOOL)arg1 ;
-(void)settingsDidUpdate:(id)arg0 ;
-(void)user:(id)arg0 didUpdateUserListeningHistoryUpdateControl:(id)arg1 forHome:(id)arg2 ;


@end


#endif