// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMODELMIGRATIONACTIONBACKGROUND_H
#define PLMODELMIGRATIONACTIONBACKGROUND_H

@class NSString, PLLazyObject, PLPhotoLibraryPathManager, NSProgress;
@protocol PLModelMigrationActionCore;

#import <Foundation/Foundation.h>

#import "PLModelMigratorLog.h"

@interface PLModelMigrationActionBackground : NSObject <PLModelMigrationActionCore>

 {
    NSString *_resumeMarkerKeyPath;
    PLLazyObject *_lazyAppPrivateData;
}


@property (readonly) NSString *actionName;
@property (copy) id *continuationHandler; // ivar: _continuationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isCancelled;
@property (retain) PLModelMigratorLog *logger; // ivar: _logger
@property (retain) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property (retain) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


+(NSInteger)actionProgressWeight;
+(id)actionDescription;
+(id)shortenedMigrationActionClassName;
-(BOOL)isCancelledWithResumeMarker:(id)arg0 error:(*id)arg1 ;
-(id)appPrivateData;
-(id)cancellableDiscreteProgressWithTotalUnitCount:(NSInteger)arg0 pendingParentUnitCount:(NSInteger)arg1 cancellationHandler:(id)arg2 ;
-(id)initWithPathManager:(id)arg0 logger:(id)arg1 progress:(id)arg2 continuationHandler:(id)arg3 ;
-(id)resumeMarker;
-(void)finalizeProgress;
-(void)setResumeMarkerValue:(id)arg0 ;
-(void)setup;


@end


#endif