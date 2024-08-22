// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3STATEMENTCACHENODE_H
#define ML3STATEMENTCACHENODE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ML3StatementCacheNode.h"

@interface ML3StatementCacheNode : NSObject

@property (copy, nonatomic) NSObject<NSCopying> *dictionaryKey; // ivar: _dictionaryKey
@property (retain, nonatomic) ML3StatementCacheNode *next; // ivar: _next


-(id)description;
-(id)initWithDictionaryKey:(id)arg0 ;


@end


#endif