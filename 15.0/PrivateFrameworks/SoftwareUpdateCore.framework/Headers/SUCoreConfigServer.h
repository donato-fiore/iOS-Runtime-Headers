// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCORECONFIGSERVER_H
#define SUCORECONFIGSERVER_H

@class SUCoreConfig, MAAsset, NSDate, NSMutableDictionary, SUCorePersistedState, SUCoreFSM, NSTimer, NSString;
@protocol OS_dispatch_queue;



@interface SUCoreConfigServer : SUCoreConfig

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientDelegateQueue; // ivar: _clientDelegateQueue
@property (retain, nonatomic) SUCoreConfig *coreConfig; // ivar: _coreConfig
@property (retain, nonatomic) MAAsset *lastLocatedAsset; // ivar: _lastLocatedAsset
@property (retain, nonatomic) NSDate *lastScanTime; // ivar: _lastScanTime
@property (retain, nonatomic) NSMutableDictionary *listenerDelegates; // ivar: _listenerDelegates
@property (retain, nonatomic) NSDate *nextScanTime; // ivar: _nextScanTime
@property (retain, nonatomic) SUCorePersistedState *persistedState; // ivar: _persistedState
@property (retain, nonatomic) SUCoreFSM *stateMachine; // ivar: _stateMachine
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


+(id)_generateStateTable;
+(id)allowedServerKeys;
+(id)allowedServerProjects;
+(id)sharedServerSettings;
-(NSInteger)actionConfigAdjustSettings:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionConfigDownloadAsset:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionConfigDownloadCatalog:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionConfigQueryAsset:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionConfigScheduleScan:(id)arg0 error:(*id)arg1 ;
-(NSInteger)actionUnknownAction:(id)arg0 error:(*id)arg1 ;
-(NSInteger)performAction:(id)arg0 onEvent:(id)arg1 inState:(id)arg2 withInfo:(id)arg3 nextState:(id)arg4 error:(*id)arg5 ;
-(id)_nextScanTimeFromDate:(id)arg0 ;
-(id)_stateSafeDetermineNextScanTime;
-(id)_stateSafeDownloadOptions;
-(id)_stateSafeLoadUUIDString;
-(id)_stateSafeSelectBestAssetFromArray:(id)arg0 error:(*id)arg1 ;
-(id)_stateSafeSelectBestAssetFromMultipleAssetArray:(id)arg0 bestAsset:(*id)arg1 selectionReason:(*id)arg2 ;
-(id)init;
-(id)scheduledActivityName;
-(void)_stateSafeInformDelegatesOfConfiguration:(id)arg0 error:(id)arg1 ;
-(void)_stateSafeResetState;
-(void)_stateSafeSendInstalledEventWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_stateSafeSendNewEvent:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_stateSafeSendScheduledEventWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_stateSafeUpdateState;
-(void)dealloc;
-(void)installServerSettings;
-(void)listenForConfigChanges:(id)arg0 withName:(id)arg1 ;


@end


#endif