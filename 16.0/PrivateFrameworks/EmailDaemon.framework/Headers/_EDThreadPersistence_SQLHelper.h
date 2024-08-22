// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EDTHREADPERSISTENCE_SQLHELPER_H
#define _EDTHREADPERSISTENCE_SQLHELPER_H


#import <Foundation/Foundation.h>

#import "_EDThreadPersistence_StatementCache.h"
#import "EDPersistenceDatabaseConnection.h"

@interface _EDThreadPersistence_SQLHelper : NSObject

@property (readonly, nonatomic) _EDThreadPersistence_StatementCache *cache; // ivar: _cache
@property (readonly, nonatomic) EDPersistenceDatabaseConnection *connection; // ivar: _connection


-(BOOL)executeSQL:(id)arg0 errorHandler:(id)arg1 ;
-(BOOL)executeSQL:(id)arg0 indexBindings:(id)arg1 errorHandler:(id)arg2 ;
// -(BOOL)executeSelectSQL:(id)arg0 bindings:(id)arg1 errorHandler:(unk)arg2 rowHandler:(id)arg3  ;
// -(NSInteger)executeUpsertSQL:(id)arg0 bindings:(id)arg1 errorHandler:(unk)arg2  ;
-(id)initWithCache:(id)arg0 ;
// -(int)executeUpdateSQL:(id)arg0 bindings:(id)arg1 errorHandler:(unk)arg2  ;


@end


#endif