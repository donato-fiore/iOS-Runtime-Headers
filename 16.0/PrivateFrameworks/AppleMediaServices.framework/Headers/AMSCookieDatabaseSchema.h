// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSCOOKIEDATABASESCHEMA_H
#define AMSCOOKIEDATABASESCHEMA_H


#import <Foundation/Foundation.h>


@interface AMSCookieDatabaseSchema : NSObject



+(BOOL)createOrUpdateSchemaUsingConnection:(id)arg0 ;
+(void)migrateVersion0to1WithMigration:(id)arg0 ;


@end


#endif