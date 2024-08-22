// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMODELMIGRATIONACTION_CPLPROMPTING_H
#define PLMODELMIGRATIONACTION_CPLPROMPTING_H

@class NSString, NSProgress;
@protocol PLModelMigrationAction;


#import "PLModelMigrationActionPreRepair.h"

@interface PLModelMigrationAction_CPLPrompting : PLModelMigrationActionPreRepair <PLModelMigrationAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;


+(void)_resetICPLPrompt;
+(void)_setLastWelcomedDBVersion;
+(void)shouldRepromptUserIfNeededWithPathManager:(id)arg0 ;
-(NSInteger)performActionWithManagedObjectContext:(id)arg0 error:(*id)arg1 ;


@end


#endif