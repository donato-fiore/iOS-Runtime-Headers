// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDMODELMIGRATION_H
#define PLBACKGROUNDMODELMIGRATION_H

@class NSMutableArray, PLLazyObject, NSString, NSProgress;
@protocol NSProgressReporting, PLModelMigrationContext;

#import <Foundation/Foundation.h>

#import "PLModelMigratorLog.h"

@interface PLBackgroundModelMigration : NSObject <NSProgressReporting>

 {
    id<PLModelMigrationContext> *_internalMigrationContext;
    NSMutableArray *_actionsBackground;
    NSUInteger _actionProgressPortionBackground;
    PLLazyObject *_lazyAppPrivateData;
}


@property (copy) id *continuationHandler; // ivar: _continuationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PLModelMigratorLog *logger; // ivar: _logger
@property (retain, nonatomic) NSString *migrationUUID; // ivar: _migrationUUID
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


+(BOOL)hasCompletedBackgroundActionClass:(Class)arg0 pathManager:(id)arg1 ;
+(BOOL)isCompletedBackgroundActionClass:(Class)arg0 appPrivateData:(id)arg1 ;
+(NSInteger)migrateBackgroundActionsWithPhotoLibraryBundle:(id)arg0 logger:(id)arg1 error:(*id)arg2 continuationHandler:(id)arg3 ;
-(BOOL)isMigrationCancelledWithError:(*id)arg0 ;
-(NSInteger)libraryIdentifier;
-(NSInteger)migrateBackgoundPostProcessingWithError:(*id)arg0 ;
-(NSInteger)runBackgroundMigrationAction:(id)arg0 error:(*id)arg1 ;
-(id)analyticsEventManager;
-(id)appPrivateData;
-(id)databaseContext;
-(id)initBackgroundMigrationWithPhotoLibraryBundle:(id)arg0 logger:(id)arg1 continuationHandler:(id)arg2 ;
-(id)pathManager;
-(void)registerBackgroundActionClass:(Class)arg0 onCondition:(BOOL)arg1 ;
-(void)setMarkerForBackgroundAction:(id)arg0 marker:(NSInteger)arg1 ;


@end


#endif