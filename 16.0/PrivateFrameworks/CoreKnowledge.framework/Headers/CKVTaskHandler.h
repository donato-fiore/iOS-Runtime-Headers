// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVTASKHANDLER_H
#define CKVTASKHANDLER_H

@class NSString;
@protocol CKVDonateTaskProvider;

#import <Foundation/Foundation.h>

#import "CKVSettings.h"
#import "CKVTaskCoalescenceManager.h"
#import "CKVIndexManager.h"
#import "CKVTaskController.h"

@interface CKVTaskHandler : NSObject {
    NSString *_handlerName;
    CKVSettings *_settings;
    NSObject<CKVDonateTaskProvider> *_donateTaskProvider;
    CKVTaskCoalescenceManager *_coalescenceManager;
    CKVIndexManager *_indexManager;
}


@property (readonly, nonatomic) CKVTaskController *taskController; // ivar: _taskController


+(id)dailyDonateTasks;
+(id)localizedDonateTasks;
+(id)migrationDonateTasks;
-(BOOL)_didEnablementOptionsChange:(*BOOL)arg0 ;
-(BOOL)_didLocalizationChange:(unsigned short)arg0 isMaintenance:(BOOL)arg1 ;
-(BOOL)handleTask:(unsigned short)arg0 reason:(unsigned short)arg1 completion:(id)arg2 ;
-(id)_assetUpdateTaskBlockWithReason:(SEL)arg0 ;
-(id)_deletedItemIdsWithDatabaseSearcher:(id)arg0 ;
-(id)_destroyAllStateTaskBlockWithReason:(SEL)arg0 ;
-(id)_enabledDerivativeTasksForTask:(id)arg0 ;
-(id)_maintenanceTaskBlockWithReason:(SEL)arg0 ;
-(id)_siriLanguageChangedTaskBlockWithReason:(SEL)arg0 ;
-(id)_siriSettingsChangedTaskBlockWithReason:(SEL)arg0 ;
-(id)_taskBlockForTask:(SEL)arg0 reason:(unsigned short)arg1 ;
-(id)initWithHandlerName:(id)arg0 settings:(id)arg1 donateTaskProvider:(id)arg2 coalescenceManager:(id)arg3 indexManager:(id)arg4 taskController:(id)arg5 ;
-(void)_runMigration:(unsigned short)arg0 completion:(id)arg1 ;
// -(void)_submitTask:(unsigned short)arg0 reason:(unsigned short)arg1 taskBlock:(id)arg2 completion:(unk)arg3  ;
-(void)enableSimulatedTasks:(BOOL)arg0 ;


@end


#endif