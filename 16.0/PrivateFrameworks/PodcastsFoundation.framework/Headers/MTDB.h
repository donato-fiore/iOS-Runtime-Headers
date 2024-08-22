// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTDB_H
#define MTDB_H

@class NSString;
@protocol NSManagedObjectContextProvider, MTCoreDataContainerConfigProvider;

#import <Foundation/Foundation.h>

#import "MTCoreDataContainer.h"

@interface MTDB : NSObject <NSManagedObjectContextProvider>



@property (retain, nonatomic) NSObject<MTCoreDataContainerConfigProvider> *config; // ivar: _config
@property (retain, nonatomic) MTCoreDataContainer *coreDataContainer; // ivar: _coreDataContainer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canExtensionOpenDatabase;
+(BOOL)createDatabaseIfNeeded;
+(BOOL)isCorrupt;
+(BOOL)needsCacheBustForFreeAndPaidUrlStorage;
+(BOOL)needsSerpentIdEpisodeMigration;
+(BOOL)quickCheckForNeedsContainerMigration;
+(BOOL)serpentIdMigrationComplete;
+(NSInteger)coreDataVersion;
+(NSInteger)libraryDataVersion;
+(id)fetchManagedObjectModelFromDisk;
+(id)libraryPath;
+(id)libraryShmPath;
+(id)libraryWalPath;
+(id)sharedInstance;
+(void)isPodcastsAppCheck;
+(void)setCoreDataVersion:(NSInteger)arg0 ;
+(void)setCorrupt:(BOOL)arg0 ;
+(void)setLibraryDataVersion:(NSInteger)arg0 ;
+(void)setQuickCheckForNeedsContainerMigration:(BOOL)arg0 ;
+(void)setSerpentIdMigrationComplete:(BOOL)arg0 ;
+(void)setSharedInstance:(id)arg0 ;
+(void)setStoreBothFreeAndPaidUrlsPreviousBootup;
-(id)carPlayContext;
-(id)contextForName:(id)arg0 ;
-(id)importContext;
-(id)init;
-(id)initWithCoreDataContainer:(id)arg0 config:(id)arg1 ;
-(id)mainOrPrivateContext;
-(id)mainQueueContext;
-(id)managedObjectModel;
-(id)persistentStoreUuid;
-(id)privateQueueContext;
-(id)resetableImportContext;
-(id)storeContext;
-(void)addChangeNotifier:(id)arg0 ;
-(void)removeChangeNotifier:(id)arg0 ;


@end


#endif