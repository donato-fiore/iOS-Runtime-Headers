// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPROCESSSCOPEDSTATEMANAGER_H
#define CKPROCESSSCOPEDSTATEMANAGER_H

@class NSHashTable, NSMutableDictionary, CKTestDevice, NSMutableSet;
@protocol CKXPCProcessScopedClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKEntitlements.h"

@interface CKProcessScopedStateManager : NSObject <CKXPCProcessScopedClient>

 {
    BOOL _systemIsAvailable;
    BOOL _hasDeferredAccountChangeNotice;
    NSHashTable *_containersRegisteredForAccountChangeNotifications;
    CKEntitlements *_baseEntitlements;
    CKEntitlements *_resolvedEntitlements;
    NSMutableDictionary *_fakeEntitlements;
    CKTestDevice *_testDevice;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableSet *_completedLongLivedOperationIDs;
    NSMutableSet *_outstandingOperationIDs;
}




+(id)sharedManager;
-(id)untrustedEntitlements;
-(void)clearFakeEntitlementForKey:(id)arg0 ;
-(void)connectionBecameInvalid:(id)arg0 ;
-(void)getFileMetadataWithFileHandle:(id)arg0 openInfo:(id)arg1 reply:(id)arg2 ;
-(void)handleSignificantIssueBehavior:(NSUInteger)arg0 reason:(id)arg1 ;
-(void)noteSystemIsAvailable;
-(void)setFakeEntitlement:(id)arg0 forKey:(id)arg1 ;


@end


#endif