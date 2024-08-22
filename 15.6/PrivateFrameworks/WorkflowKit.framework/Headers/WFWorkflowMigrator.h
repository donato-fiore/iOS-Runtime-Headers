// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWMIGRATOR_H
#define WFWORKFLOWMIGRATOR_H


#import <Foundation/Foundation.h>


@interface WFWorkflowMigrator : NSObject



+(id)migrationClasses;
+(id)migrationClassesWithDependencies;
+(id)orderedMigrationClassesWithoutDependencies;
+(void)initialize;
+(void)migrateWorkflowIfNeeded:(id)arg0 completion:(id)arg1 ;
+(void)registerAllWorkflowKitMigrationClasses;
+(void)registerMigrationClass:(Class)arg0 ;


@end


#endif