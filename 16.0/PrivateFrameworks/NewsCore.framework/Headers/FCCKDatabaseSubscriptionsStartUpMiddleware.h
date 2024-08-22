// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKDATABASESUBSCRIPTIONSSTARTUPMIDDLEWARE_H
#define FCCKDATABASESUBSCRIPTIONSSTARTUPMIDDLEWARE_H

@class NSString;
@protocol FCCKDatabaseMigrator, FCCKDatabaseStartUpMiddleware, FCCKDatabaseRecordMiddleware;

#import <Foundation/Foundation.h>

#import "FCCKZoneSchema.h"

@interface FCCKDatabaseSubscriptionsStartUpMiddleware : NSObject <FCCKDatabaseMigrator, FCCKDatabaseStartUpMiddleware>

 {
    FCCKZoneSchema *_legacyZoneSchema;
    FCCKZoneSchema *_secureZoneSchema;
    id<FCCKDatabaseRecordMiddleware> *_encryptionMiddleware;
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
-(void)performStartUpForDatabase:(id)arg0 completion:(id)arg1 ;


@end


#endif