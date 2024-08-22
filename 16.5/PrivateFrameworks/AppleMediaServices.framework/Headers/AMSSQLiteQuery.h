// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSQLITEQUERY_H
#define AMSSQLITEQUERY_H


#import <Foundation/Foundation.h>

#import "AMSSQLiteConnection.h"
#import "AMSSQLiteQueryDescriptor.h"

@interface AMSSQLiteQuery : NSObject {
    AMSSQLiteConnection *_connection;
    AMSSQLiteQueryDescriptor *_descriptor;
}


@property (readonly) AMSSQLiteConnection *connection;
@property (readonly) NSInteger countOfEntities;
@property (readonly) AMSSQLiteQueryDescriptor *queryDescriptor;


-(BOOL)createTemporaryTableWithName:(id)arg0 properties:(id)arg1 ;
-(BOOL)deleteAllEntities;
-(id)_newSelectSQLWithProperties:(id)arg0 ;
-(id)copyEntityIdentifiers;
-(id)copySelectSQLWithProperties:(id)arg0 ;
-(id)initOnConnection:(id)arg0 descriptor:(id)arg1 ;
-(void)applyBinding:(id)arg0 atIndex:(*int)arg1 ;
-(void)enumerateMemoryEntitiesUsingBlock:(id)arg0 ;
-(void)enumerateMemoryEntitiesWithProperties:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersistentIDsAndProperties:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(id)arg0 ;


@end


#endif