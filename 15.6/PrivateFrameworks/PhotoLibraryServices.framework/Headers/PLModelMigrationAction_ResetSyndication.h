// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMODELMIGRATIONACTION_RESETSYNDICATION_H
#define PLMODELMIGRATIONACTION_RESETSYNDICATION_H

@class NSString, NSProgress;
@protocol PLModelMigrationAction;


#import "PLModelMigrationAction.h"

@interface PLModelMigrationAction_ResetSyndication : PLModelMigrationAction <PLModelMigrationAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;


-(NSInteger)performActionWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;


@end


#endif