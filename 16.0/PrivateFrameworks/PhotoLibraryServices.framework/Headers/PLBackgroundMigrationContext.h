// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDMIGRATIONCONTEXT_H
#define PLBACKGROUNDMIGRATIONCONTEXT_H

@class PLCoreAnalyticsEventManager, NSString, PLPhotoLibraryPathManager;
@protocol PLModelMigrationContext;

#import <Foundation/Foundation.h>

#import "PLDatabaseContext.h"

@interface PLBackgroundMigrationContext : NSObject <PLModelMigrationContext>



@property (retain, nonatomic) PLCoreAnalyticsEventManager *analyticsEventManager; // ivar: _analyticsEventManager
@property (retain, nonatomic) PLDatabaseContext *databaseContext; // ivar: _databaseContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger libraryIdentifier; // ivar: _libraryIdentifier
@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property unsigned int policy; // ivar: _policy
@property (readonly) Class superclass;


-(id)initWithPathManager:(id)arg0 databaseContext:(id)arg1 analyticsEventManager:(id)arg2 ;


@end


#endif