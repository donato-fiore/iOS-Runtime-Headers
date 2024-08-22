// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMODELMIGRATIONACTION_REMOVEALLPURGEABLECLONES_H
#define PLMODELMIGRATIONACTION_REMOVEALLPURGEABLECLONES_H

@class NSString, NSProgress;
@protocol PLModelMigrationAction;


#import "PLModelMigrationActionBackground.h"

@interface PLModelMigrationAction_RemoveAllPurgeableClones : PLModelMigrationActionBackground <PLModelMigrationAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;


+(NSInteger)actionProgressWeight;
-(NSInteger)performActionWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
-(NSInteger)removePurgableClonesForAssetUUID:(id)arg0 withMOC:(id)arg1 error:(*id)arg2 ;


@end


#endif