// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMODELMIGRATIONACTION_RELOCATEBUNDLESCOPEDATA_H
#define PLMODELMIGRATIONACTION_RELOCATEBUNDLESCOPEDATA_H

@class NSString, NSProgress;
@protocol PLModelMigrationAction;


#import "PLModelMigrationAction.h"

@interface PLModelMigrationAction_RelocateBundleScopeData : PLModelMigrationAction <PLModelMigrationAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;


-(NSInteger)performActionWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;
-(NSInteger)renameWithDestinationPath:(unsigned char)arg0 error:(*id)arg1 ;
-(NSInteger)updateResourceFilePathWithManagedObjectContext:(id)arg0 bundleScope:(unsigned short)arg1 progress:(id)arg2 error:(*id)arg3 ;
-(id)legacyPrefixPathWithType:(unsigned char)arg0 ;


@end


#endif