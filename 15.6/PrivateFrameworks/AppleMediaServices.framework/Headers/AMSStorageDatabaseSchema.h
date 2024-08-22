// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSSTORAGEDATABASESCHEMA_H
#define AMSSTORAGEDATABASESCHEMA_H


#import <Foundation/Foundation.h>


@interface AMSStorageDatabaseSchema : NSObject



+(BOOL)createOrUpdateSchemaUsingConnection:(id)arg0 ;
+(void)migrateVersion0to1WithMigration:(id)arg0 ;


@end


#endif