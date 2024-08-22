// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBMANAGER_H
#define DBMANAGER_H

@class NSPersistentStoreCoordinator;


#import "CHLogger.h"

@interface DBManager : CHLogger

@property (retain, nonatomic) NSPersistentStoreCoordinator *fPersistentStoreCoordinator; // ivar: fPersistentStoreCoordinator


+(BOOL)destroyDBAtLocation:(id)arg0 withModelAtLocation:(id)arg1 ;
+(BOOL)makeDatabaseAtURLClassCDataProtected:(id)arg0 ;
+(BOOL)moveDBAtLocation:(id)arg0 toLocation:(id)arg1 withModelAtLocation:(id)arg2 ;
+(BOOL)replacePersistentStore:(id)arg0 withURL:(id)arg1 ;
+(NSInteger)isDataStoreAtURLInitialized:(id)arg0 withModelAtURL:(id)arg1 ;
+(NSInteger)mapToDBMErrorCode:(id)arg0 ;
+(NSInteger)versionForDBAtLocation:(id)arg0 ;
+(NSInteger)versionForManagedObjectModel:(id)arg0 ;
+(id)entityDescriptionHavingName:(id)arg0 forContext:(id)arg1 ;
+(id)getPersistentCoordinator:(id)arg0 ;
+(id)getPropertyValueForKey:(id)arg0 forContext:(id)arg1 ;
+(id)getStoreURLforContext:(id)arg0 ;
+(id)instanceWithModelURL:(id)arg0 ;
+(id)mangedObjectWithURI:(id)arg0 inContext:(id)arg1 ;
// +(id)migrateDataStoreAtLocation:(id)arg0 withGetDestinationModel:(id)arg1 isEncrypted:(unk)arg2  ;
+(id)modelForDBAtLocation:(id)arg0 ;
+(id)persistentStoreOptions:(BOOL)arg0 ;
+(void)setPropertyValue:(id)arg0 forKey:(id)arg1 forContext:(id)arg2 ;
-(BOOL)addDataStoreAtLocation:(id)arg0 isEncrypted:(BOOL)arg1 ;
-(id)createManagedObjectContext;
-(id)init;
-(void)removeDataStoreAtLocation:(id)arg0 ;


@end


#endif