// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMETRICSDATABASESCHEMA_H
#define AMSMETRICSDATABASESCHEMA_H


#import <Foundation/Foundation.h>


@interface AMSMetricsDatabaseSchema : NSObject



+(BOOL)createOrUpdateSchemaUsingConnection:(id)arg0 ;
+(void)migrateVersion0to1WithMigration:(id)arg0 ;
+(void)migrateVersion1to2WithMigration:(id)arg0 ;
+(void)migrateVersion2to3WithMigration:(id)arg0 ;
+(void)migrateVersion3to4WithMigration:(id)arg0 ;
+(void)migrateVersion4to5WithMigration:(id)arg0 ;


@end


#endif