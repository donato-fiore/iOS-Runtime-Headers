// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMIGRATIONCONTEXT_H
#define PLMIGRATIONCONTEXT_H

@class PLCoreAnalyticsEventManager, NSPersistentStoreCoordinator, NSString, NSDictionary, PLPhotoLibraryPathManager, NSPersistentStore, NSURL;
@protocol PLModelMigrationContext;

#import <Foundation/Foundation.h>


@interface PLMigrationContext : NSObject <PLModelMigrationContext>



@property (retain, nonatomic) PLCoreAnalyticsEventManager *analyticsEventManager; // ivar: _analyticsEventManager
@property (retain, nonatomic) NSPersistentStoreCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger libraryIdentifier; // ivar: _libraryIdentifier
@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property unsigned int policy; // ivar: _policy
@property unsigned short previousStoreVersion; // ivar: _previousStoreVersion
@property (retain, nonatomic) NSPersistentStore *store; // ivar: _store
@property (retain, nonatomic) NSURL *storeURL; // ivar: _storeURL
@property (readonly) Class superclass;


-(id)initWithPathManager:(id)arg0 coordinator:(id)arg1 onStore:(id)arg2 orStoreURL:(id)arg3 version:(unsigned short)arg4 options:(id)arg5 migrationPolicy:(unsigned int)arg6 analyticsEventManager:(id)arg7 ;


@end


#endif