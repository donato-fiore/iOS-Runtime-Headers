// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEMEDIAACCESSORYINFOCONTROLLER_H
#define HMDAPPLEMEDIAACCESSORYINFOCONTROLLER_H

@class HMFWiFiNetworkInfo, NSNotificationCenter, HMFWiFiManager;
@protocol HMDAppleMediaAccessoryInfoControllerDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDAppleMediaAccessoryInfoController : NSObject

@property (readonly, weak) NSObject<HMDAppleMediaAccessoryInfoControllerDataSource> *dataSource; // ivar: _dataSource
@property (retain) HMFWiFiNetworkInfo *lastWifiNetworkInfo; // ivar: _lastWifiNetworkInfo
@property (retain) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) HMFWiFiManager *wifiManager; // ivar: _wifiManager


+(id)logCategory;
-(id)currentWifiNetworkInfo;
-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 notificationCenter:(id)arg2 wifiManager:(id)arg3 ;
-(void)_postUpdateSoftwareVersionIfDifferent:(id)arg0 ;
-(void)_postUpdateWifiNetworkInfoIfDifferent:(id)arg0 ;
-(void)configure;
-(void)handleCurrentNetworkChangedNotification:(id)arg0 ;


@end


#endif