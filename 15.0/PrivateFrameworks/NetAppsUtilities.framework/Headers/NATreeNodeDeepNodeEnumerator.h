// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NATREENODEDEEPNODEENUMERATOR_H
#define NATREENODEDEEPNODEENUMERATOR_H

@class NSEnumerator, NSMutableArray, NSArray;
@protocol NSCopying;


#import "NATreeNode.h"

@interface NATreeNodeDeepNodeEnumerator : NSEnumerator <NSCopying>

 {
    NSMutableArray *_enumeratorStack;
}


@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, copy, nonatomic) NATreeNode *node; // ivar: _node


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNode:(id)arg0 ;
-(id)nextObject;


@end


#endif