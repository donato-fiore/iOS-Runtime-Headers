// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSETFLASHLIGHTMIGRATION_H
#define WFSETFLASHLIGHTMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFSetFlashlightMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
-(void)migrateWorkflow;


@end


#endif