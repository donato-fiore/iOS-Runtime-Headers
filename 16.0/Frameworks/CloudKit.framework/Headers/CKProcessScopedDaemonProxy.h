// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPROCESSSCOPEDDAEMONPROXY_H
#define CKPROCESSSCOPEDDAEMONPROXY_H

@protocol NSObject, CKXPCProcessScopedDaemon;

#import <Foundation/Foundation.h>


@interface CKProcessScopedDaemonProxy : NSObject

@property (retain, nonatomic) NSObject<NSObject> *connectionInterruptedObserver; // ivar: _connectionInterruptedObserver
@property BOOL hasValidProcessScopedDaemonProxyCreator; // ivar: _hasValidProcessScopedDaemonProxyCreator
@property (retain, nonatomic) NSObject<CKXPCProcessScopedDaemon> *processScopedDaemonProxyCreator; // ivar: _processScopedDaemonProxyCreator


+(id)CKXPCClientToDaemonProcessScopedInterface;
+(id)CKXPCDaemonToClientProcessScopedInterface;
+(id)sharedProcessScopedDaemonProxy;
-(NSUInteger)maxInlineMergeableDeltaSize;
-(id)_init;
-(void)_getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)arg0 completionHandler:(id)arg1 ;
// -(void)_getProcessScopedDaemonProxySynchronous:(BOOL)arg0 errorHandler:(id)arg1 daemonProxyHandler:(unk)arg2  ;
-(void)accountWithID:(id)arg0 changedWithChangeType:(NSInteger)arg1 ;
-(void)accountsDidGrantAccessToBundleID:(id)arg0 containerIdentifiers:(id)arg1 ;
-(void)accountsDidRevokeAccessToBundleID:(id)arg0 containerIdentifiers:(id)arg1 ;
-(void)accountsWillDeleteAccount:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearPCSCachesForKnownContainersWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)dumpAllClientsStatusReportToFileHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)kill;
-(void)updatePushTokens;
-(void)wipeAllCachesAndDie;
-(void)wipeServerConfigurationsAndDie;


@end


#endif