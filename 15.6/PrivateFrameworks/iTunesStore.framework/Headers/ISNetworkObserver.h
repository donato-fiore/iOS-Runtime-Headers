// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISNETWORKOBSERVER_H
#define ISNETWORKOBSERVER_H

@class NSString, NSMutableSet;
@protocol SSDownloadQueueObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver>

 {
    NSString *_dataStatusIndicator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _isCellularRestricted;
    CGFloat _lastNetworkTypeChangeTime;
    unsigned int _networkReachabilityFlags;
    NSInteger _networkUsageCount;
    NSInteger _networkType;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableSet *_observedDownloadQueues;
    *__SCNetworkReachability _reachability;
    *__CTServerConnection _telephonyServer;
}


@property (readonly) NSString *connectionTypeHeader;
@property (readonly) NSString *dataStatusIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat lastNetworkTypeChangeTime;
@property (readonly) NSString *mobileSubscriberCountryCode;
@property (readonly) NSString *mobileSubscriberNetworkCode;
@property (readonly) NSString *modemRegistrationStatus;
@property (readonly) unsigned int networkReachabilityFlags;
@property NSInteger networkType;
@property (readonly) NSString *operatorName;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *providerName;
@property (readonly) BOOL shouldShowCellularAutomaticDownloadsSwitch;
@property (readonly) Class superclass;
@property (readonly, getter=isUsingNetwork) BOOL usingNetwork;
@property (readonly, getter=isWiFiEnabled) BOOL wifiEnabled;


+(BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned int)arg0 ;
+(id)sharedInstance;
+(void)set3GEnabled:(BOOL)arg0 ;
+(void)setAirplaneModeEnabled:(BOOL)arg0 ;
+(void)setWiFiEnabled:(BOOL)arg0 ;
-(BOOL)_ntsIsUsingNetwork;
-(BOOL)isCellularDataEnabledForBundleIdentifier:(id)arg0 ;
-(NSInteger)_networkTypeForReachabilityFlags:(unsigned int)arg0 ;
-(NSInteger)_networkTypeFromDataIndicator:(id)arg0 ;
-(id)copyValueForCarrierBundleKey:(id)arg0 ;
-(id)init;
-(unsigned int)_currentNetworkReachabilityFlags;
-(void)_applicationForegroundNotification:(id)arg0 ;
-(void)_copyConnectionDataStatus:(id)arg0 ;
-(void)_handleTelephonyNotificationWithName:(struct __CFString *)arg0 userInfo:(struct __CFDictionary *)arg1 ;
-(void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned int)arg0 toValue:(unsigned int)arg1 ;
-(void)_postTypeChangedNotificationFromValue:(NSInteger)arg0 toValue:(NSInteger)arg1 ;
-(void)_postUsageChangedToValue:(BOOL)arg0 ;
-(void)_reloadCellularRestriction;
-(void)_reloadDataStatusIndicator;
-(void)_reloadNetworkType;
-(void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)arg0 ;
-(void)_telephonyOperatorNameDidChangeNotification:(id)arg0 ;
-(void)_telephonyRegistrationDidChangeNotification:(id)arg0 ;
-(void)beginObservingDownloadQueue:(id)arg0 ;
-(void)beginUsingNetwork;
-(void)dealloc;
-(void)downloadQueue:(id)arg0 changedWithRemovals:(id)arg1 ;
-(void)downloadQueueNetworkUsageChanged:(id)arg0 ;
-(void)endObservingDownloadQueue:(id)arg0 ;
-(void)endUsingNetwork;
-(void)reloadNetworkType;


@end


#endif