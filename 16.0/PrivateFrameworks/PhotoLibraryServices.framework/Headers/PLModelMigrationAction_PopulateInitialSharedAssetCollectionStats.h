// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMODELMIGRATIONACTION_POPULATEINITIALSHAREDASSETCOLLECTIONSTATS_H
#define PLMODELMIGRATIONACTION_POPULATEINITIALSHAREDASSETCOLLECTIONSTATS_H

@class NSString, NSProgress;
@protocol PLModelMigrationAction;


#import "PLModelMigrationAction.h"

@interface PLModelMigrationAction_PopulateInitialSharedAssetCollectionStats : PLModelMigrationAction <PLModelMigrationAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;


-(NSInteger)_recalculateSharedAssetContainerValuesForEntityNamed:(id)arg0 propertiesToFetch:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;
-(NSInteger)performActionWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;


@end


#endif