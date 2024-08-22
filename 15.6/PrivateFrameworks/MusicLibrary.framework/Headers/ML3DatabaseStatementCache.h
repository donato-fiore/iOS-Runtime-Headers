// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3DATABASESTATEMENTCACHE_H
#define ML3DATABASESTATEMENTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ML3StatementCacheList.h"

@interface ML3DatabaseStatementCache : NSObject {
    NSMutableDictionary *_statementsDictionary;
    ML3StatementCacheList *_nodeList;
}


@property (readonly, nonatomic) NSUInteger cacheSize; // ivar: _cacheSize


-(id)allStatements;
-(id)cachedStatementForSQL:(id)arg0 ;
-(id)initWithCacheSize:(NSUInteger)arg0 ;
-(void)cacheStatement:(id)arg0 ;
-(void)clearCache;
-(void)dealloc;


@end


#endif