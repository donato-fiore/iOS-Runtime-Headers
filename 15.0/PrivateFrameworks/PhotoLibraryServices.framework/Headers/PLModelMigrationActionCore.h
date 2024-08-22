// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMODELMIGRATIONACTIONCORE_H
#define PLMODELMIGRATIONACTIONCORE_H

@class NSString, PLPhotoLibraryPathManager, NSProgress;
@protocol PLModelMigrationActionCore;

#import <Foundation/Foundation.h>

#import "PLModelMigratorLog.h"

@interface PLModelMigrationActionCore : NSObject <PLModelMigrationActionCore>



@property (readonly) NSString *actionName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) PLModelMigratorLog *logger; // ivar: _logger
@property (retain) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property (retain) NSProgress *progress; // ivar: _progress
@property unsigned short startingSchemaVersion; // ivar: _startingSchemaVersion
@property (readonly) Class superclass;


+(NSInteger)actionProgressWeight;
+(id)actionDescription;
+(id)shortenedMigrationActionClassName;
-(BOOL)isCancelledWithError:(*id)arg0 ;
-(id)cancellableDiscreteProgressWithTotalUnitCount:(NSInteger)arg0 pendingParentUnitCount:(NSInteger)arg1 cancellationHandler:(id)arg2 ;
-(id)initWithPathManager:(id)arg0 startingSchemaVersion:(unsigned short)arg1 logger:(id)arg2 progress:(id)arg3 ;
-(void)finalizeProgress;
-(void)setup;


@end


#endif