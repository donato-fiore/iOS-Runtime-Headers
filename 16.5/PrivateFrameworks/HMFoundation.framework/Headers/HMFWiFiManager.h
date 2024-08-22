// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFWIFIMANAGER_H
#define HMFWIFIMANAGER_H

@class NSString, NSHashTable, NSNumber;
@protocol HMFLogging, HMFWiFiManagerDataSourceDelegate, OS_dispatch_queue, HMFWiFiManagerDataSource;


#import "HMFObject.h"
#import "HMFMACAddress.h"
#import "HMFWifiNetworkAssociation.h"

@interface HMFWiFiManager : HMFObject <HMFLogging, HMFWiFiManagerDataSourceDelegate>

 {
    os_unfair_lock_s _lock;
    BOOL _shouldAssertWoW;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMFWiFiManagerDataSource> *_dataSource;
    NSString *_savedNetworkSSID;
    NSHashTable *_activeAssertions;
}


@property (readonly, copy) HMFMACAddress *MACAddress; // ivar: _MACAddress
@property (readonly, getter=isActive) BOOL active;
@property (readonly, getter=isCaptive) BOOL captive;
@property (readonly, copy) HMFWifiNetworkAssociation *currentNetworkAssociation;
@property (readonly, copy, nonatomic) NSNumber *currentNetworkRSSI;
@property (readonly, copy) NSString *currentNetworkSSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedManager;
-(id)beginActiveAssertionWithOptions:(NSUInteger)arg0 reason:(id)arg1 ;
-(id)init;
-(id)initWithWorkQueue:(id)arg0 dataSource:(id)arg1 ;
-(void)currentNetworkDidChangeForDataSource:(id)arg0 ;
-(void)dataSource:(id)arg0 didChangeLinkAvailability:(BOOL)arg1 ;
-(void)dataSource:(id)arg0 didChangeWoWState:(BOOL)arg1 ;
-(void)endActiveAssertion:(id)arg0 ;
-(void)releaseWoWAssertion;
-(void)takeWoWAssertion;


@end


#endif