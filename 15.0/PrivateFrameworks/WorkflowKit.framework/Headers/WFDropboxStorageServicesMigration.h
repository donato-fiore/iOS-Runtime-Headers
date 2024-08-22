// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDROPBOXSTORAGESERVICESMIGRATION_H
#define WFDROPBOXSTORAGESERVICESMIGRATION_H



#import "WFWorkflowMigration.h"

@interface WFDropboxStorageServicesMigration : WFWorkflowMigration



+(BOOL)workflowNeedsMigration:(id)arg0 fromClientVersion:(id)arg1 ;
+(id)migrationClassDependencies;
-(void)migrateWorkflow;


@end


#endif