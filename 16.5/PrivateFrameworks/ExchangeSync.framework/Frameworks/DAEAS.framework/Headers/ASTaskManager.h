// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTASKMANAGER_H
#define ASTASKMANAGER_H

@class DATaskManager, NSString, NSMutableDictionary, NSError;
@protocol ASPolicyManagerDelegate;


#import "ASGetOptionsTask.h"
#import "ASTask.h"
#import "ASPolicyManager.h"
#import "ASProtocol.h"

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate>



@property (readonly, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *easProtocolVersion; // ivar: _easProtocolVersion
@property (retain, nonatomic) ASGetOptionsTask *getOptionsTask; // ivar: _getOptionsTask
@property (weak, nonatomic) ASTask *modalGetOptionsTask; // ivar: _modalGetOptionsTask
@property (weak, nonatomic) ASTask *modalPolicyKeyUpdateTask; // ivar: _modalPolicyKeyUpdateTask
@property (readonly, nonatomic) NSString *policyKey;
@property (retain, nonatomic) ASPolicyManager *policyManager; // ivar: _policyManager
@property (readonly, nonatomic) ASProtocol *protocol;
@property (retain, nonatomic) NSMutableDictionary *taskIDToTask; // ivar: _taskIDToTask
@property (retain, nonatomic) NSError *versionError; // ivar: _versionError


-(BOOL)_hasTasksIndicatingARunningSync;
-(BOOL)shouldCancelTaskDueToOnPowerFetchMode;
-(BOOL)taskIsModal:(id)arg0 ;
-(id)_version;
-(id)initWithAccount:(id)arg0 policyManager:(id)arg1 ;
-(id)stateString;
-(void)_finishAllTasksWithError:(id)arg0 ;
-(void)_populateVersionDescriptions;
-(void)cancelAllTasks;
-(void)cancelTask:(id)arg0 ;
-(void)cancelTaskWithID:(int)arg0 ;
-(void)dealloc;
-(void)finishTask:(id)arg0 withError:(id)arg1 ;
-(void)getOptionsTask:(id)arg0 completedWithStatus:(NSInteger)arg1 supportedCommands:(id)arg2 supportedVersions:(id)arg3 error:(id)arg4 ;
-(void)policyManagerFailedToUpdatePolicy:(id)arg0 ;
-(void)policyManagerUpdatedPolicy:(id)arg0 ;
-(void)requestEASVersionWithDelegateTask:(id)arg0 ;
-(void)setEASProtocolVersion:(id)arg0 ;
-(void)shutdown;
-(void)taskDidFinish:(id)arg0 ;
-(void)taskEndModal:(id)arg0 ;
-(void)taskManagerDidAddTask:(id)arg0 ;
-(void)taskManagerWillRemoveTask:(id)arg0 ;
-(void)taskRequestModal:(id)arg0 ;
-(void)updatePolicyKeyWithDelegateTask:(id)arg0 ;


@end


#endif