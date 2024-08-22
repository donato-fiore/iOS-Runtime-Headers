// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3STATEMENTCACHELIST_H
#define ML3STATEMENTCACHELIST_H


#import <Foundation/Foundation.h>

#import "ML3StatementCacheNode.h"

@interface ML3StatementCacheList : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) ML3StatementCacheNode *firstNode; // ivar: _firstNode
@property (readonly, nonatomic) ML3StatementCacheNode *lastNode; // ivar: _lastNode


-(id)description;
-(id)oldestNode;
-(void)appendNode:(id)arg0 ;
-(void)deleteAllNodes;
-(void)deleteOldestNode;
-(void)promoteNodeWithDictionaryKey:(id)arg0 ;


@end


#endif