// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKDATABASEENCRYPTEDZONEMIGRATOR_H
#define FCCKDATABASEENCRYPTEDZONEMIGRATOR_H

@class NSSet, NSString;
@protocol FCCKDatabaseMigrator, FCCKDatabaseRecordMiddleware;

#import <Foundation/Foundation.h>

#import "FCCKPrivateDatabaseSchema.h"

@interface FCCKDatabaseEncryptedZoneMigrator : NSObject <FCCKDatabaseMigrator>

 {
    FCCKPrivateDatabaseSchema *_sourceSchema;
    id<FCCKDatabaseRecordMiddleware> *_recordEncryptionMiddleware;
    id *_deprecatedBlock;
    NSSet *_sourceZoneNames;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)databaseMigrationShouldDropRecord:(id)arg0 database:(id)arg1 ;
-(BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg0 database:(id)arg1 ;
-(id)databaseMigrationMigrateRecord:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg0 database:(id)arg1 ;
-(id)databaseMigrationZoneNamesForDatabase:(id)arg0 ;
-(void)databaseMigrationDidFinishForDatabase:(id)arg0 result:(NSInteger)arg1 ;


@end


#endif