// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAAGENT_H
#define DAAGENT_H

@class DAAccount, DATrustHandler;

#import <Foundation/Foundation.h>


@interface DAAgent : NSObject

@property (retain, nonatomic) DAAccount *account; // ivar: _account
@property (nonatomic) BOOL isMonitoring; // ivar: _isMonitoring
@property (nonatomic) BOOL isWaitingForPassword; // ivar: _isWaitingForPassword
@property (nonatomic) CGFloat lastRetryTimeout; // ivar: _lastRetryTimeout
@property (copy, nonatomic) id *networkReachableBlock; // ivar: _networkReachableBlock
@property (nonatomic) BOOL syncWhenReachable; // ivar: _syncWhenReachable
@property (readonly, nonatomic) DATrustHandler *trustHandler;


+(id)launchingAgentWithAccount:(id)arg0 ;
-(BOOL)monitorFoldersWithSyncKeyMap:(id)arg0 ;
-(id)description;
-(id)getDAAccount;
-(id)initWithAccount:(id)arg0 ;
-(id)stateString;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)observeReachabilityWithBlock:(id)arg0 ;
-(void)processMeetingRequestDatas:(id)arg0 deliveryIdsToClear:(id)arg1 deliveryIdsToSoftClear:(id)arg2 inFolderWithId:(id)arg3 callback:(id)arg4 ;
-(void)refreshFolderListRequireChangedFolders:(BOOL)arg0 isUserRequested:(BOOL)arg1 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(id)arg0 ;
-(void)resumeMonitoringFoldersWithSyncKeyMap:(id)arg0 ;
-(void)saveXpcActivity:(id)arg0 ;
-(void)shutdown;
-(void)startMonitoring;
-(void)stopObservingReachability;
-(void)syncFolderIDs:(id)arg0 forDataclasses:(NSInteger)arg1 isUserRequested:(BOOL)arg2 ;


@end


#endif