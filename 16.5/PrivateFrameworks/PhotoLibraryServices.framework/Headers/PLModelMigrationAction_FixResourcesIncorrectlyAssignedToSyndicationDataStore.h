// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMODELMIGRATIONACTION_FIXRESOURCESINCORRECTLYASSIGNEDTOSYNDICATIONDATASTORE_H
#define PLMODELMIGRATIONACTION_FIXRESOURCESINCORRECTLYASSIGNEDTOSYNDICATIONDATASTORE_H

@class NSString, NSProgress;
@protocol PLModelMigrationAction;


#import "PLModelMigrationAction.h"

@interface PLModelMigrationAction_FixResourcesIncorrectlyAssignedToSyndicationDataStore : PLModelMigrationAction <PLModelMigrationAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;


-(NSInteger)performActionWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;


@end


#endif