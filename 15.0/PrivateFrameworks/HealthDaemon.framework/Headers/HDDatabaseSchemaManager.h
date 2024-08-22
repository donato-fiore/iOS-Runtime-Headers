// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATABASESCHEMAMANAGER_H
#define HDDATABASESCHEMAMANAGER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "HDDatabaseMigrationTransaction.h"

@interface HDDatabaseSchemaManager : NSObject {
    NSMutableSet *_createdDatabaseNames;
    HDDatabaseMigrationTransaction *_transaction;
}




-(BOOL)setVersion:(NSInteger)arg0 schema:(id)arg1 protectionClass:(NSInteger)arg2 error:(*id)arg3 ;
-(NSInteger)currentVersionForSchema:(id)arg0 protectionClass:(NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithTransaction:(id)arg0 ;


@end


#endif