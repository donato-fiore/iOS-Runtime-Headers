// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASDATABASEMIGRATIONCONTEXT_H
#define _PASDATABASEMIGRATIONCONTEXT_H

@class NSDictionary;
@protocol _PASDatabaseMigrationProtocol;

#import <Foundation/Foundation.h>

#import "_PASSqliteDatabase.h"

@interface _PASDatabaseMigrationContext : NSObject {
    NSObject<_PASDatabaseMigrationProtocol> *object;
    _PASSqliteDatabase *db;
    unsigned int version;
    NSDictionary *migrations;
}




-(id)description;


@end


#endif