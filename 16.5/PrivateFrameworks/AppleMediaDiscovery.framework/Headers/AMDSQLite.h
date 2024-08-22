// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDSQLITE_H
#define AMDSQLITE_H

@class NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMDSQLiteSchema.h"

@interface AMDSQLite : NSObject

@property (retain, nonatomic) AMDSQLiteSchema *_bootstrapSchema; // ivar: __bootstrapSchema
@property (nonatomic) *sqlite3 _db; // ivar: __db
@property (retain, nonatomic) NSError *_error; // ivar: __error
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_executorQueue; // ivar: __executorQueue
@property (nonatomic) BOOL _isEnabled; // ivar: __isEnabled
@property (retain, nonatomic) AMDSQLiteSchema *_schema; // ivar: __schema


+(id)clearUserData:(id)arg0 ;
+(id)deleteEventsOlderThan:(unsigned int)arg0 ;
+(id)deleteEventsWithPredicate:(id)arg0 forStreams:(id)arg1 ;
+(id)getBootstrapSchemaDict;
+(id)getDomainsFrom:(id)arg0 ;
+(id)getFeatureValueWithName:(id)arg0 inDomain:(id)arg1 withColumnName:(id)arg2 skipRowset:(BOOL)arg3 error:(*id)arg4 ;
+(id)getSharedInstance;
+(id)getSharedInstanceWithOption:(BOOL)arg0 ;
+(id)loadNewData:(id)arg0 ;
+(id)refreshEntityTableForDomain:(id)arg0 error:(*id)arg1 ;
+(id)refreshODTPForDomain:(id)arg0 error:(*id)arg1 ;
+(id)saveEvents:(id)arg0 error:(*id)arg1 ;
+(id)truncateEvents:(*id)arg0 ;
+(id)updateData:(id)arg0 ;
-(BOOL)isUsable;
-(id)applySchema:(id)arg0 error:(*id)arg1 ;
-(id)bootstrapDb;
-(id)connectionState;
-(id)createTable:(id)arg0 usingSchema:(id)arg1 error:(*id)arg2 ;
-(id)deleteRows:(id)arg0 error:(*id)arg1 ;
-(id)deleteRowsInternal:(id)arg0 error:(*id)arg1 ;
-(id)fetchRows:(id)arg0 andPersist:(BOOL)arg1 error:(*id)arg2 ;
-(id)fetchRowsUsingSchema:(id)arg0 andDescriptor:(id)arg1 andPersist:(BOOL)arg2 error:(*id)arg3 ;
-(id)getBootSchema;
-(id)getError;
-(id)getSchema;
-(id)insertRows:(id)arg0 usingSchema:(id)arg1 error:(*id)arg2 ;
-(id)loadDb;
-(id)loadSchema;
-(id)prepareBootstrapSchema;
-(id)refreshAppsTable:(*id)arg0 ;
-(id)saveSchema:(id)arg0 error:(*id)arg1 ;
-(id)updateSchema:(id)arg0 error:(*id)arg1 ;
-(id)validateRowsData:(id)arg0 tableSchema:(id)arg1 error:(*id)arg2 ;
-(struct sqlite3 *)getDb;
-(struct sqlite3_stmt *)prepare:(id)arg0 error:(*id)arg1 ;
-(void)setEnable:(BOOL)arg0 ;


@end


#endif