// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBACKUPRESTOREAGENT_H
#define PLBACKUPRESTOREAGENT_H

@class PLAgent, MBManager;



@interface PLBackupRestoreAgent : PLAgent

@property (readonly) MBManager *backupRestoreManager; // ivar: _backupRestoreManager
@property (nonatomic) BOOL backupState; // ivar: _backupState
@property (nonatomic) BOOL restoreState; // ivar: _restoreState


+(id)defaults;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)didChangeEvent:(id)arg0 toState:(BOOL)arg1 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)updateBackupState;
-(void)updateRestoreState;


@end


#endif