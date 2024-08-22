// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSQLITESTATEMENTCACHE_H
#define WBSSQLITESTATEMENTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "WBSSQLiteDatabase.h"

@interface WBSSQLiteStatementCache : NSObject {
    WBSSQLiteDatabase *_database;
    NSMutableDictionary *_statements;
}




-(id)_createStatementForQuery:(id)arg0 error:(*id)arg1 ;
-(id)cachedStatementForQuery:(id)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(id)statementForQuery:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setCachedStatement:(id)arg0 forQuery:(id)arg1 ;


@end


#endif