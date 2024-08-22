// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSSQLITEENTITY_H
#define AMSSQLITEENTITY_H

@class NSString;
@protocol AMSSQLiteEntity;

#import <Foundation/Foundation.h>

#import "AMSSQLiteConnection.h"

@interface AMSSQLiteEntity : NSObject <AMSSQLiteEntity>



@property (readonly, nonatomic) AMSSQLiteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL existsInDatabase;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (readonly) Class superclass;


+(BOOL)_insertValues:(id)arg0 intoTable:(id)arg1 withPersistentID:(NSInteger)arg2 onConnection:(id)arg3 ;
+(Class)memoryEntityClass;
+(id)_aggregateValueForProperty:(id)arg0 function:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3 ;
+(id)anyOnConnection:(id)arg0 predicate:(id)arg1 ;
+(id)countForProperty:(id)arg0 predicate:(id)arg1 onConnection:(id)arg2 ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg0 ;
+(id)foreignDatabaseColumnForProperty:(id)arg0 ;
+(id)foreignDatabaseTableForProperty:(id)arg0 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg0 ;
+(id)joinClauseForProperty:(id)arg0 ;
+(id)maxValueForProperty:(id)arg0 predicate:(id)arg1 onConnection:(id)arg2 ;
+(id)minValueForProperty:(id)arg0 predicate:(id)arg1 onConnection:(id)arg2 ;
+(id)queryOnConnection:(id)arg0 predicate:(id)arg1 ;
+(id)queryOnConnection:(id)arg0 predicate:(id)arg1 orderingProperties:(id)arg2 ;
-(BOOL)_deleteRowFromTable:(id)arg0 usingColumn:(id)arg1 ;
-(BOOL)deleteFromDatabase;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(BOOL)setValuesWithDictionary:(id)arg0 ;
-(id)_copyTableClusteredValuesWithValues:(id)arg0 ;
-(id)getValuesForProperties:(id)arg0 ;
-(id)initWithPersistentID:(NSInteger)arg0 onConnection:(id)arg1 ;
-(id)initWithPropertyValues:(id)arg0 onConnection:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif