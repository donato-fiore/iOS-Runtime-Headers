// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AVTCOREDATAPERSISTENTSTORELOCALCONFIGURATION_H
#define _AVTCOREDATAPERSISTENTSTORELOCALCONFIGURATION_H

@class NSPersistentStoreCoordinator, NSURL, NSString, NSPersistentStoreDescription;
@protocol AVTCoreDataPersistentStoreLocalConfiguration, AVTUILogger;

#import <Foundation/Foundation.h>

#import "AVTCoreEnvironment.h"

@interface _AVTCoreDataPersistentStoreLocalConfiguration : NSObject <AVTCoreDataPersistentStoreLocalConfiguration>



@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator; // ivar: _coordinator
@property (readonly, nonatomic) NSURL *databaseLocation; // ivar: _databaseLocation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTCoreEnvironment *environment; // ivar: _environment
@property (readonly, nonatomic) NSURL *folderLocation; // ivar: _folderLocation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSPersistentStoreDescription *storeDescription; // ivar: _storeDescription
@property (readonly, nonatomic) NSURL *storeLocation; // ivar: _storeLocation
@property (readonly) Class superclass;


+(id)createStoreDescriptionWithDatabaseLocation:(id)arg0 logger:(id)arg1 ;
+(id)databaseFolderForStoreLocation:(id)arg0 ;
+(id)databaseLocationForFolderLocation:(id)arg0 ;
+(id)sideDatabaseFolderForStoreLocation:(id)arg0 ;
-(BOOL)contentExists;
-(BOOL)copyStorageAside:(*id)arg0 ;
-(BOOL)createDatabaseDirectoryIfNeeded:(*id)arg0 usingFileManager:(id)arg1 ;
-(BOOL)setupIfNeeded:(*id)arg0 ;
-(BOOL)tearDownAndEraseAllContent:(*id)arg0 ;
-(id)copiedAsideMigratableSource;
-(id)createManagedObjectContext;
-(id)createStoreServerWithError:(*id)arg0 ;
-(id)initWithStoreLocation:(id)arg0 copiedAside:(BOOL)arg1 environment:(id)arg2 ;
-(id)migratableSources;
-(id)persistentStoreCoordinator;
-(void)updateBackupInclusionStatusOnQueue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif