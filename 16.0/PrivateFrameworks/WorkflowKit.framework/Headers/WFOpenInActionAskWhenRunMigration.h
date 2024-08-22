// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFOPENINACTIONASKWHENRUNMIGRATION_H
#define WFOPENINACTIONASKWHENRUNMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFOpenInActionAskWhenRunMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
-(void)migrateWorkflow;


@end


#endif