// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMODELMIGRATIONACTION_REPAIRSINGLETONS_H
#define PLMODELMIGRATIONACTION_REPAIRSINGLETONS_H

@class NSString, NSProgress;
@protocol PLModelMigrationAction;


#import "PLModelMigrationActionPreRepair.h"

@interface PLModelMigrationAction_RepairSingletons : PLModelMigrationActionPreRepair <PLModelMigrationAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;


+(BOOL)repairSingletonObjectsInDatabaseUsingContext:(id)arg0 pathManager:(id)arg1 error:(*id)arg2 ;
+(void)_repairRootFolderFixedOrderKeysInStore:(id)arg0 context:(id)arg1 pathManager:(id)arg2 ;
-(NSInteger)performActionWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;


@end


#endif