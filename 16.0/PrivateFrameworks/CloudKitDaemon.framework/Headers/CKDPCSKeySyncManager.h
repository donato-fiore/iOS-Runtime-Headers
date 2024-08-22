// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCSKEYSYNCMANAGER_H
#define CKDPCSKEYSYNCMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDPCSKeySyncManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *keySyncQueue; // ivar: _keySyncQueue
@property (retain, nonatomic) NSMutableDictionary *keySyncTrackerByServiceNameByAccount; // ivar: _keySyncTrackerByServiceNameByAccount


+(id)sharedManager;
-(id)_getKeySyncTrackerByServicenameForAccount:(id)arg0 ;
-(id)createSyncTrackerForAccount:(id)arg0 service:(id)arg1 manatee:(BOOL)arg2 ;
-(id)init;
-(id)syncTrackerForAccount:(id)arg0 service:(id)arg1 manatee:(BOOL)arg2 shortThrottlePeriod:(BOOL)arg3 ;
-(void)getKeySyncEligibilityForService:(id)arg0 isManatee:(BOOL)arg1 account:(id)arg2 zonePCSModificationDate:(id)arg3 testOverrideProvider:(id)arg4 completionHandler:(id)arg5 ;
-(void)performKeySyncWithSyncTracker:(id)arg0 testableSyncConfig:(NSUInteger)arg1 shouldThrottle:(BOOL)arg2 testOverrideProvider:(id)arg3 completionHandler:(id)arg4 ;
-(void)syncUserKeysForService:(id)arg0 context:(id)arg1 bundleID:(id)arg2 serviceIsManatee:(BOOL)arg3 account:(id)arg4 shouldThrottle:(BOOL)arg5 testOverrideProvider:(id)arg6 completionHandler:(id)arg7 ;


@end


#endif