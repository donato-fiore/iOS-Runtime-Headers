// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTCACHEDATABASESCHEMA_H
#define AMSENGAGEMENTCACHEDATABASESCHEMA_H


#import <Foundation/Foundation.h>


@interface AMSEngagementCacheDatabaseSchema : NSObject



+(BOOL)createOrUpdateSchemaUsingConnection:(id)arg0 ;
+(void)_migrateVersion0to1WithMigration:(id)arg0 ;


@end


#endif