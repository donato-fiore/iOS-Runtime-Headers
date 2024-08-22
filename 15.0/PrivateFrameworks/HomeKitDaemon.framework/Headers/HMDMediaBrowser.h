// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIABROWSER_H
#define HMDMEDIABROWSER_H

@class HMFObject, NSMutableSet, HMFTimer, NSArray, NSString;
@protocol HMFLogging, HMFTimerDelegate, HMFLocking, OS_dispatch_queue, HMDMediaBrowserDataSource, HMDMediaBrowserDelegate;


#import "HMDUnassociatedMediaAccessory.h"
#import "HMDHomeManager.h"

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate>

 {
    id<HMFLocking> *_lock;
    NSMutableSet *_accessoryAdvertisements;
    BOOL _discoverUnassociatedAccessories;
    BOOL _discoverAssociatedAccessories;
    BOOL _updateAvailableOutputDevices;
    NSObject<OS_dispatch_queue> *_clientQueue;
    *void _discoverySession;
    *void _discoverySessionCallbackToken;
    HMFTimer *_discoveryPollTimer;
    NSMutableSet *_identifiersOfAssociatedMediaAccessories;
    NSMutableSet *_mediaEndpoints;
    id<HMDMediaBrowserDataSource> *_dataSource;
}


@property (readonly, copy) NSArray *accessoryAdvertisements;
@property (readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) Class superclass;


+(id)advertisementsFromOutputDevices:(struct __CFArray *)arg0 ;
+(id)logCategory;
+(id)shortDescription;
-(id)dumpDescription;
-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 dataSource:(id)arg1 ;
-(id)shortDescription;
-(id)unassociatedAccessoryFromAdvertisementData:(id)arg0 ;
-(void)dealloc;
-(void)deregisterAccessories:(id)arg0 ;
-(void)registerAccessories:(id)arg0 ;
-(void)startDiscoveringAssociatedAccessories;
-(void)startDiscoveringUnassociatedAccessories;
-(void)stopDiscoveringAssociatedAccessories;
-(void)stopDiscoveringUnassociatedAccessories;
-(void)timerDidFire:(id)arg0 ;
-(void)updateSessionsForAccessories:(id)arg0 ;


@end


#endif