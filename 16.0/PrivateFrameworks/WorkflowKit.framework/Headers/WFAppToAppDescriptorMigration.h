// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAPPTOAPPDESCRIPTORMIGRATION_H
#define WFAPPTOAPPDESCRIPTORMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFAppToAppDescriptorMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
-(BOOL)actionDictionaryContainsSystemIntentAction:(id)arg0 ;
-(void)migrateAppToAppDescriptorForParameterKey:(id)arg0 parameters:(id)arg1 ;
-(void)migrateHideAppWithParameters:(id)arg0 ;
-(void)migrateOpenAppWithParameters:(id)arg0 ;
-(void)migrateOpenInWithParameters:(id)arg0 ;
-(void)migrateQuitAppWithParameters:(id)arg0 ;
-(void)migrateSplitScreenWithParameters:(id)arg0 ;
-(void)migrateSystemIntentActionsWithParameters:(id)arg0 ;
-(void)migrateWorkflow;


@end


#endif