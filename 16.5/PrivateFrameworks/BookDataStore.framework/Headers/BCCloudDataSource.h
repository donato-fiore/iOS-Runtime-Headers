// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCCLOUDDATASOURCE_H
#define BCCLOUDDATASOURCE_H

@class NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol BDSCloudKitSupportSignOutDeleteWithoutInstance;

#import <Foundation/Foundation.h>


@interface BCCloudDataSource : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance>



@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator


+(id)_documentsDirectoryURL;
+(id)_sharedLegacyRootDirectoryURL;
+(id)_sharedRootDirectoryURL;
+(void)deleteCloudDataWithCompletion:(id)arg0 ;
-(BOOL)_addStoreAtURL:(id)arg0 ;
-(BOOL)_directoryExistsForStoreAtURL:(id)arg0 ;
-(BOOL)_setupPersistentStoreWithRootDirectoryURL:(id)arg0 legacyRootDirectoryURL:(id)arg1 nameOnDisk:(id)arg2 ;
-(id)_persistentStoreOptions;
-(id)initWithManagedObjectModel:(id)arg0 ;
-(id)initWithManagedObjectModel:(id)arg0 nameOnDisk:(id)arg1 ;
-(id)initWithManagedObjectModel:(id)arg0 rootDirectoryURL:(id)arg1 legacyRootDirectoryURL:(id)arg2 nameOnDisk:(id)arg3 ;
-(void)_createDirectoryForStoreAtURL:(id)arg0 ;
-(void)_deleteDirectoryForStoreAtURL:(id)arg0 ;
-(void)_logIf:(BOOL)arg0 error:(id)arg1 operation:(id)arg2 ;
-(void)_migrateAndDestroyStoreAtLegacyURL:(id)arg0 toModernURL:(id)arg1 ;
-(void)_setupManagedObjectContext;


@end


#endif