// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDMESSAGEQUERYPARSER_H
#define EDMESSAGEQUERYPARSER_H

@class EFSearchableIndexObjectPropertyMapper, EFSQLObjectPropertyMapper;

#import <Foundation/Foundation.h>

#import "EDSearchableIndex.h"
#import "EDMessageQueryTransformer.h"

@interface EDMessageQueryParser : NSObject

@property (readonly, nonatomic) EDSearchableIndex *searchableIndex; // ivar: _searchableIndex
@property (readonly, nonatomic) EFSearchableIndexObjectPropertyMapper *searchableIndexMapper; // ivar: _searchableIndexMapper
@property (readonly, nonatomic) EFSQLObjectPropertyMapper *sqlPropertyMapper; // ivar: _sqlPropertyMapper
@property (readonly, nonatomic) EDMessageQueryTransformer *transformer; // ivar: _transformer


+(id)performSearchableIndexQueryPredicate:(id)arg0 propertyMapper:(id)arg1 searchableIndex:(id)arg2 ;
-(id)initWithSchema:(id)arg0 protectedSchema:(id)arg1 searchableIndex:(id)arg2 accountsProvider:(id)arg3 vipManager:(id)arg4 messagePersistence:(id)arg5 mailboxPersistence:(id)arg6 ;
-(id)sqlQueryForQuery:(id)arg0 ;
-(id)sqlQueryForQuery:(id)arg0 predicate:(id)arg1 ;


@end


#endif