// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPROCESSSCOPEDSTATEMANAGER_H
#define CKDPROCESSSCOPEDSTATEMANAGER_H

@protocol CKXPCProcessScopedDaemon;

#import <Foundation/Foundation.h>


@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>





+(id)sharedManager;
-(id)_init;
-(void)_wipePersonaBasedClientCacheForAppRecord:(id)arg0 ;
-(void)accountWithID:(id)arg0 changedWithChangeType:(NSInteger)arg1 ;
-(void)accountsDidGrantAccessToBundleID:(id)arg0 containerIdentifiers:(id)arg1 ;
-(void)accountsDidRevokeAccessToBundleID:(id)arg0 containerIdentifiers:(id)arg1 ;
-(void)accountsWillDeleteAccount:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearPCSCachesForKnownContainersWithCompletionHandler:(id)arg0 ;
-(void)dumpAllClientsStatusReportToFileHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchUsabilityForTestAccountCredentials:(id)arg0 completionHandler:(id)arg1 ;
-(void)globalDeviceIdentifierWithCompletionHandler:(id)arg0 ;
-(void)kickOffPendingLongLivedOperations;
-(void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id)arg0 ;
-(void)updatePushTokens;
-(void)wipeAllCachesAndDie;
-(void)wipeServerConfigurationsAndDie;


@end


#endif