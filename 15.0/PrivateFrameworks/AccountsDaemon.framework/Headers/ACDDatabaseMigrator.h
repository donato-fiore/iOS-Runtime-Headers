// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDDATABASEMIGRATOR_H
#define ACDDATABASEMIGRATOR_H

@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface ACDDatabaseMigrator : NSObject {
    NSManagedObjectContext *_migrationContext;
    NSPersistentStoreCoordinator *_privateCoordinator;
}


@property (readonly, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator
@property (readonly, copy, nonatomic) NSDictionary *storeOptions; // ivar: _storeOptions


+(id)new;
-(BOOL)runReturningError:(*id)arg0 ;
-(NSInteger)_versionForModel:(id)arg0 ;
-(id)_compatibleModelForStoreAtURL:(id)arg0 ;
-(id)_fetchAllAuthorizationEntitiesForModelVersion:(NSInteger)arg0 ;
-(id)_fetchAllDataclassEntitles;
-(id)_setUpContextForMigration;
-(id)init;
-(id)initForDatabaseAtURL:(id)arg0 persistentStoreCoordinator:(id)arg1 storeOptions:(id)arg2 ;
-(void)_migrateAccessAuthorizationsToTCCFromModelVersion:(NSInteger)arg0 ;
-(void)_migrateNameAttributeOfDataclassEntities;
-(void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(NSInteger)arg0 ;
-(void)_postProcessMigrationFromVersion:(NSInteger)arg0 migrationData:(id)arg1 ;


@end


#endif