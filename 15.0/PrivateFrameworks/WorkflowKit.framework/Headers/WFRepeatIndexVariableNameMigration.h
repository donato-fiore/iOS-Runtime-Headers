// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREPEATINDEXVARIABLENAMEMIGRATION_H
#define WFREPEATINDEXVARIABLENAMEMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFRepeatIndexVariableNameMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
-(void)calculateVariableNamesAtActionIndex:(NSUInteger)arg0 oldRepeatScopeVariables:(*id)arg1 ;
-(void)migrateWorkflow;


@end


#endif