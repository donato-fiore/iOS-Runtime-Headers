// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGQUICKRESPONSESDATABASE_H
#define SGQUICKRESPONSESDATABASE_H

@class _PASSqliteDatabase, NSString;
@protocol _PASDatabaseMigrationProtocol;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesDatabase : NSObject <_PASDatabaseMigrationProtocol>



@property (readonly, nonatomic) _PASSqliteDatabase *db; // ivar: _db
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_openAnotherHandleForPath:(id)arg0 ;
+(id)_openFreshHandleForPath:(id)arg0 inMemory:(BOOL)arg1 ;
-(BOOL)_handleCorruptionWithCheck:(BOOL)arg0 path:(id)arg1 inMemory:(BOOL)arg2 ;
-(BOOL)_performMigrationsWithPath:(id)arg0 inMemory:(BOOL)arg1 attemptIteration:(int)arg2 ;
-(id)databaseHandle;
-(id)initInDirectory:(id)arg0 inMemory:(BOOL)arg1 withMigration:(BOOL)arg2 ;
-(id)initInDirectory:(id)arg0 inMemory:(BOOL)arg1 withMigration:(BOOL)arg2 forTools:(BOOL)arg3 ;
-(id)migrations;
-(id)queriesToSkipFromEmptyToVersion:(*unsigned int)arg0 ;


@end


#endif