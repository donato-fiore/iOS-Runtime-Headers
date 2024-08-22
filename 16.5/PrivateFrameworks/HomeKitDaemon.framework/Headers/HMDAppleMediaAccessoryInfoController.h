// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAACCESSORYINFOCONTROLLER_H
#define HMDAPPLEMEDIAACCESSORYINFOCONTROLLER_H

@class HMFWiFiNetworkInfo, NSNotificationCenter, HMFWiFiManager;
@protocol HMDAppleMediaAccessoryInfoControllerDataSource, HMDAppleMediaAccessoryInfoControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDAppleMediaAccessoryInfoController : NSObject

@property (readonly, weak) NSObject<HMDAppleMediaAccessoryInfoControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, weak) NSObject<HMDAppleMediaAccessoryInfoControllerDelegate> *delegate; // ivar: _delegate
@property (retain) HMFWiFiNetworkInfo *lastWifiNetworkInfo; // ivar: _lastWifiNetworkInfo
@property (retain) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) HMFWiFiManager *wifiManager; // ivar: _wifiManager


+(id)logCategory;
-(id)currentWifiNetworkInfo;
-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 delegate:(id)arg2 notificationCenter:(id)arg3 wifiManager:(id)arg4 ;
-(void)_notifyDelegateWifiInfoUpdated:(id)arg0 ;
-(void)_postUpdateSoftwareVersionIfDifferent:(id)arg0 ;
-(void)_postUpdateWifiNetworkInfoIfDifferent:(id)arg0 ;
-(void)configure;
-(void)handleCurrentNetworkChangedNotification:(id)arg0 ;


@end


#endif