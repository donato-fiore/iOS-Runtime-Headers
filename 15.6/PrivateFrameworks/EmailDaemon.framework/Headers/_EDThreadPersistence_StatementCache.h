// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EDTHREADPERSISTENCE_STATEMENTCACHE_H
#define _EDTHREADPERSISTENCE_STATEMENTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabaseConnection.h"

@interface _EDThreadPersistence_StatementCache : NSObject

@property (readonly, nonatomic) EDPersistenceDatabaseConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSMutableDictionary *preparedStatements; // ivar: _preparedStatements


-(id)initWithConnection:(id)arg0 ;
-(id)preparedStatementForQueryString:(id)arg0 ;


@end


#endif