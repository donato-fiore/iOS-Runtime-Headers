// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFUNITQUANTITYFIELDPARAMETERMIGRATION_H
#define WFUNITQUANTITYFIELDPARAMETERMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFUnitQuantityFieldParameterMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
-(void)migrateWorkflow;


@end


#endif