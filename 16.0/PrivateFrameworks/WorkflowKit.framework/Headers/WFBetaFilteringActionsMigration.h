// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBETAFILTERINGACTIONSMIGRATION_H
#define WFBETAFILTERINGACTIONSMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFBetaFilteringActionsMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
+(id)actionIdentifierMapping;
-(void)migrateWorkflow;


@end


#endif