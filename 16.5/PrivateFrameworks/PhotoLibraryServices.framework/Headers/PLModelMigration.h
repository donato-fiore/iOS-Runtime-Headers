// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMODELMIGRATION_H
#define PLMODELMIGRATION_H

@class NSMutableArray, NSString, NSProgress;
@protocol NSProgressReporting, PLModelMigrationContext;

#import <Foundation/Foundation.h>

#import "PLModelMigratorLog.h"

@interface PLModelMigration : NSObject <NSProgressReporting>

 {
    BOOL _hadStagedMigration;
    NSMutableArray *_actions;
    NSMutableArray *_actionsStaged;
    NSMutableArray *_actionsPreRepair;
    NSMutableArray *_actionsPostRepair;
    NSUInteger _actionProgressPortion;
    NSUInteger _actionProgressPortionPreRepair;
    NSUInteger _actionProgressPortionPostRepair;
    id<PLModelMigrationContext> *_internalMigrationContext;
}


@property (readonly) BOOL allowRebuild; // ivar: _allowRebuild
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL didCreateSqliteErrorIndicator; // ivar: _didCreateSqliteErrorIndicator
@property (readonly) NSUInteger hash;
@property (retain) id *legacyMigrationDelegate; // ivar: _legacyMigrationDelegate
@property (retain, nonatomic) PLModelMigratorLog *logger; // ivar: _logger
@property (retain, nonatomic) NSString *migrationUUID; // ivar: _migrationUUID
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


+(int)currentModelVersion;
-(BOOL)isMigrationCancelledWithError:(*id)arg0 ;
-(NSInteger)migratePostProcessingWithActions:(id)arg0 migrationActionType:(NSInteger)arg1 progress:(id)arg2 progressUnitCount:(NSUInteger)arg3 error:(*id)arg4 ;
-(NSInteger)migratePostProcessingWithProgressUnitCount:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSInteger)migrateSchemaMigrationWithAutoMigrationOptions:(id)arg0 currentStoreVersion:(id)arg1 error:(*id)arg2 ;
-(NSInteger)migrateStagedMigrationWithAutoMigrationOptions:(id)arg0 currentStoreVersion:(id)arg1 error:(*id)arg2 ;
-(NSInteger)migrateWithError:(*id)arg0 ;
-(NSInteger)runMigrationAction:(id)arg0 withCoordinator:(id)arg1 error:(*id)arg2 ;
-(NSInteger)setupWithError:(*id)arg0 ;
-(id)_managedObjectModelForLightweightMigrationStageWithURL:(id)arg0 ;
-(id)_nextRequiredStagedMigrationVersionAfterVersion:(id)arg0 ;
-(id)_stagedManagedObjectModelURLWithStageVersion:(id)arg0 ;
-(id)addStoreWithCoordinator:(id)arg0 migrationUUID:(id)arg1 storeURL:(id)arg2 options:(id)arg3 description:(id)arg4 fromVersion:(int)arg5 toVersion:(int)arg6 progress:(id)arg7 progressUnitCount:(NSUInteger)arg8 error:(*id)arg9 ;
-(id)analyticsEventManager;
-(id)initWithMigrationContext:(id)arg0 logger:(id)arg1 ;
-(id)migrationContext;
-(id)pathManager;
-(void)_registerActionClass:(Class)arg0 actionsContainer:(id)arg1 progressPortion:(*NSUInteger)arg2 ;
-(void)actionRegistration;
-(void)registerActionClass:(Class)arg0 onCondition:(BOOL)arg1 ;
-(void)registerPostRepairActionClass:(Class)arg0 onCondition:(BOOL)arg1 ;
-(void)registerPreRepairActionClass:(Class)arg0 onCondition:(BOOL)arg1 ;
-(void)registerStagedActionClass:(Class)arg0 onCondition:(BOOL)arg1 ;


@end


#endif