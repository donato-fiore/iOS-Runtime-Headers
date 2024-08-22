// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPRIVACYPROXYAVAILABILITYMANAGER_H
#define WBSPRIVACYPROXYAVAILABILITYMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSPrivacyProxyAvailabilityManager : NSObject {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _isPrivacyProxyOnInICloudSettings;
    BOOL _isPrivacyProxyPaidTierUnavailableInUserCountry;
    NSUInteger _privacyProxyTrafficBitfield;
    NSUInteger _privacyProxyAccountType;
    NSUInteger _privacyProxyServiceStatus;
    BOOL _isPrivacyProxyActiveOnDefaultNetwork;
    int _privacyProxyConfigurationChangeNotificationToken;
    int _privacyProxyServiceStatusChangeNotificationToken;
}


@property BOOL initialized; // ivar: _initialized
@property (readonly, nonatomic) BOOL isPrivacyProxyActive;
@property (readonly, nonatomic) BOOL isPrivacyProxyFreeTierAvailable;
@property (readonly, nonatomic) BOOL isPrivacyProxyOnForEitherTier;
@property (readonly, nonatomic) BOOL isPrivacyProxyOnInICloudSettings;
@property (readonly, nonatomic) BOOL isPrivacyProxyPaidTierUnavailableInUserCountry;
@property (readonly, nonatomic) BOOL isPrivacyProxyRestrictedToTrackersByUser;
@property (readonly, nonatomic) BOOL isUserAccountInSubscriberTierForPrivacyProxy;
@property (readonly, nonatomic) NSUInteger state;


+(void)openPrivateRelayICloudSettings;
-(BOOL)_isPrivacyProxyActiveForInterface:(id)arg0 networkStatuses:(id)arg1 ;
-(id)init;
-(void)_registerForDefaultNetworkInterfaceChangeNotifications;
-(void)_registerForPrivacyProxyChangeNotifications;
-(void)_updatePrivacyProxyStateWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setPrivacyProxyEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setPrivacyProxyState:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif