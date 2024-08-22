// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEMEDIAACCESSORYINFOSUBSCRIBER_H
#define HMDAPPLEMEDIAACCESSORYINFOSUBSCRIBER_H

@class NSString, HMFWiFiNetworkInfo;
@protocol HMEEventConsumer, HMFLogging, HMDAppleMediaAccessoryInfoSubscriberDataSource, HMDAppleMediaAccessoryInfoSubscriberDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDAppleMediaAccessoryInfoSubscriber : NSObject <HMEEventConsumer, HMFLogging>



@property (readonly, weak) NSObject<HMDAppleMediaAccessoryInfoSubscriberDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDAppleMediaAccessoryInfoSubscriberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMFWiFiNetworkInfo *receivedWifiInfo; // ivar: _receivedWifiInfo
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)subscribeToWiFiInfoUpdate;


@end


#endif