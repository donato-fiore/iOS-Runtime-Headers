// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLITESTATEMENTCACHE_H
#define NSSQLITESTATEMENTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSSQLEntity.h"
#import "NSSQLiteStatement.h"

@interface NSSQLiteStatementCache : NSObject {
    NSSQLEntity *_entity;
    NSSQLiteStatement *_insertStatementCache;
    NSSQLiteStatement *_batchInsertStatementCache;
    NSSQLiteStatement *_deletionStatementCache;
    NSSQLiteStatement *_faultingStatementCache;
    NSMutableDictionary *_toManyRelationshipStatementCache;
    *__CFDictionary _correlationInsertCache;
    *__CFDictionary _correlationDeleteCache;
    *__CFDictionary _correlationMasterReorderCache;
    *__CFDictionary _correlationMasterReorderCachePart2;
    *__CFDictionary _correlationReorderCache;
}




-(id)initWithEntity:(id)arg0 ;
-(void)dealloc;


@end


#endif