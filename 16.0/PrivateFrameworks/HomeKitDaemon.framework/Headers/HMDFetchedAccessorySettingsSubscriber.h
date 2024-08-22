// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDFETCHEDACCESSORYSETTINGSSUBSCRIBER_H
#define HMDFETCHEDACCESSORYSETTINGSSUBSCRIBER_H

@class NSMutableDictionary, NSArray, NSUUID, NSString;
@protocol HMEEventConsumer, HMFLogging, OS_dispatch_queue, HMESubscriptionProviding, HMDFetchedAccessorySettingsSubscriberDelegate;

#import <Foundation/Foundation.h>


@interface HMDFetchedAccessorySettingsSubscriber : NSObject <HMEEventConsumer, HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_cachedSettings;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMESubscriptionProviding> *_subcriptionProvider;
    NSArray *_keyPaths;
    NSUUID *_homeUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDFetchedAccessorySettingsSubscriberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)cachedSettingForAccessory:(id)arg0 keyPath:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 subcriptionProvider:(id)arg1 keyPaths:(id)arg2 homeUUID:(id)arg3 ;
-(id)logIdentifier;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)subscribeToSettingsForAccessoryUUIDs:(id)arg0 ;
-(void)unsubscribeForAccessory:(id)arg0 ;
-(void)unsubscribeToAllAccessories;


@end


#endif