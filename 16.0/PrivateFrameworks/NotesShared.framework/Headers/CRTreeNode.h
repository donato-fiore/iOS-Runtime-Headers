// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTREENODE_H
#define CRTREENODE_H

@class NSArray;


#import "CRObject.h"
#import "CRTreeNode.h"
#import "CRWeakReference.h"
#import "CRTree.h"

@interface CRTreeNode : CRObject

@property (retain, nonatomic) NSArray *children; // ivar: _children
@property (weak, nonatomic) CRTreeNode *parent;
@property (retain, nonatomic) CRWeakReference *parentRef;
@property (weak, nonatomic) CRTree *tree; // ivar: _tree
@property (retain, nonatomic) id *value;


+(id)CRProperties;
-(BOOL)isInLoop;
-(BOOL)isLoopNode;
-(id)initWithValue:(id)arg0 parent:(id)arg1 tree:(id)arg2 ;
-(id)insertNodeWithValue:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)moveNode:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeNode:(id)arg0 ;


@end


#endif