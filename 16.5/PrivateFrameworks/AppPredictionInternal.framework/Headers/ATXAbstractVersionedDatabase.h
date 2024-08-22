// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXABSTRACTVERSIONEDDATABASE_H
#define ATXABSTRACTVERSIONEDDATABASE_H

@class NSString, _PASSqliteDatabase;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXAbstractVersionedDatabase : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    _PASSqliteDatabase *_db;
    BOOL _dbInitialized;
}


@property (readonly, nonatomic) _PASSqliteDatabase *db;


-(BOOL)_configureDatabase;
-(BOOL)_initializeTables;
-(BOOL)migrate;
-(NSInteger)countRowsOfTable:(id)arg0 ;
-(NSInteger)currentSchemaVersion;
-(NSInteger)latestVersion;
-(id)createCustomSchema;
-(id)createSchema;
-(id)init;
-(id)initWithDbPath:(id)arg0 ;
-(id)initWithDefaultPath:(id)arg0 ;
-(void)_disconnectFromDb;
-(void)_initializeSchemaVersion:(NSInteger)arg0 ;
-(void)_runMigration;
-(void)_startDatabase;


@end


#endif