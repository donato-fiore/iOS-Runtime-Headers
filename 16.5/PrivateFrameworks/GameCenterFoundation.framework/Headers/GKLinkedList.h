// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLINKEDLIST_H
#define GKLINKEDLIST_H


#import <Foundation/Foundation.h>

#import "GKListNode.h"

@interface GKLinkedList : NSObject

@property (retain, nonatomic) GKListNode *headNode; // ivar: _headNode
@property (retain, nonatomic) GKListNode *tailNode; // ivar: _tailNode


-(BOOL)hasCycle;
-(BOOL)isConsistent;
-(id)description;
-(id)init;
-(id)insertNodeAtBeginningWithValue:(id)arg0 forKey:(id)arg1 ;
-(id)nodeForInsertionWithValue:(id)arg0 ;
-(void)dealloc;
-(void)insertNode:(id)arg0 before:(id)arg1 ;
-(void)insertNodeAtBeginning:(id)arg0 ;
-(void)removeAllNodes;
-(void)removeNode:(id)arg0 ;


@end


#endif