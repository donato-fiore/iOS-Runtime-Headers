// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSSQLITEQUERY_H
#define SSSQLITEQUERY_H


#import <Foundation/Foundation.h>

#import "SSSQLiteDatabase.h"
#import "SSSQLiteQueryDescriptor.h"

@interface SSSQLiteQuery : NSObject {
    SSSQLiteDatabase *_database;
    SSSQLiteQueryDescriptor *_descriptor;
}


@property (readonly) NSInteger countOfEntities;
@property (readonly) SSSQLiteDatabase *database;
@property (readonly) SSSQLiteQueryDescriptor *queryDescriptor;


-(BOOL)createTemporaryTableWithName:(id)arg0 properties:(*id)arg1 count:(NSUInteger)arg2 ;
-(BOOL)deleteAllEntities;
-(id)_newSelectSQLWithProperties:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)copyEntityIdentifiers;
-(id)copySelectSQLWithProperties:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithDatabase:(id)arg0 descriptor:(id)arg1 ;
-(void)bindToSelectStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;
-(void)dealloc;
-(void)enumerateMemoryEntitiesUsingBlock:(id)arg0 ;
-(void)enumerateMemoryEntitiesWithProperties:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersistentIDsAndProperties:(*id)arg0 count:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumeratePersistentIDsUsingBlock:(id)arg0 ;


@end


#endif