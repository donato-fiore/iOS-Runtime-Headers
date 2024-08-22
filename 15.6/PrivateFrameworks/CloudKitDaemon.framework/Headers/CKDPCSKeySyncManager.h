// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPCSKEYSYNCMANAGER_H
#define CKDPCSKEYSYNCMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDPCSKeySyncManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *keySyncQueue; // ivar: _keySyncQueue
@property (retain, nonatomic) NSMutableDictionary *keySyncTrackerByServiceName; // ivar: _keySyncTrackerByServiceName


+(id)sharedManager;
-(id)createSyncTrackerForService:(id)arg0 manatee:(BOOL)arg1 ;
-(id)init;
-(id)syncTrackerForService:(id)arg0 manatee:(BOOL)arg1 shortThrottlePeriod:(BOOL)arg2 ;
-(void)getKeySyncEligibilityForService:(id)arg0 isManatee:(BOOL)arg1 zonePCSModificationDate:(id)arg2 testOverrideProvider:(id)arg3 completionHandler:(id)arg4 ;
-(void)performKeySyncWithSyncTracker:(id)arg0 testableSyncConfig:(NSUInteger)arg1 shouldThrottle:(BOOL)arg2 testOverrideProvider:(id)arg3 completionHandler:(id)arg4 ;
-(void)syncUserKeysForService:(id)arg0 context:(id)arg1 bundleID:(id)arg2 serviceIsManatee:(BOOL)arg3 account:(id)arg4 shouldThrottle:(BOOL)arg5 testOverrideProvider:(id)arg6 completionHandler:(id)arg7 ;


@end


#endif