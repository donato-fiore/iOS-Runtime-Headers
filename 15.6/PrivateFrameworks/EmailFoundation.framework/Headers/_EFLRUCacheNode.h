// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EFLRUCACHENODE_H
#define _EFLRUCACHENODE_H


#import <Foundation/Foundation.h>

#import "_EFLRUCacheNode.h"

@interface _EFLRUCacheNode : NSObject

@property (readonly, nonatomic) id *element; // ivar: _element
@property (readonly, nonatomic) id *key; // ivar: _key
@property (retain, nonatomic) _EFLRUCacheNode *next; // ivar: _next
@property (retain, nonatomic) _EFLRUCacheNode *previous; // ivar: _previous


-(id)initWithKey:(id)arg0 element:(id)arg1 ;


@end


#endif