// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRUIFTREENODE_H
#define SRUIFTREENODE_H

@class NSMutableArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "SRUIFTreeNode.h"

@interface SRUIFTreeNode : NSObject <NSFastEnumeration>



@property (readonly, nonatomic, getter=_childNodes) NSMutableArray *childNodes; // ivar: _childNodes
@property (retain, nonatomic) id *item; // ivar: _item
@property (weak, nonatomic, setter=_setParentNode:) SRUIFTreeNode *parentNode; // ivar: _parentNode


+(id)absoluteIndexPathsForTreeNodes:(id)arg0 ;
-(BOOL)containsNodeAtIndexPath:(id)arg0 ;
-(NSInteger)indexOfChildNode:(id)arg0 ;
-(NSInteger)numberOfChildNodes;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)absoluteIndexPath;
-(id)childNodeAtIndex:(NSInteger)arg0 ;
-(id)description;
-(id)indexPathFromAncestorNode:(id)arg0 ;
-(id)indexPathOfNodeWithItem:(id)arg0 ;
-(id)init;
-(id)lastChildNode;
-(id)nodeAtIndexPath:(id)arg0 ;
-(void)_appendDescriptionToString:(id)arg0 withIndentation:(id)arg1 ;
-(void)addChildNode:(id)arg0 ;
-(void)enumerateChildNodesUsingBlock:(id)arg0 ;
-(void)enumerateChildNodesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDescendentNodesUsingBlock:(id)arg0 ;
-(void)insertChildNode:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)removeChildNode:(id)arg0 ;
-(void)removeChildNodeAtIndex:(NSInteger)arg0 ;
-(void)removeFromParentNode;
-(void)replaceChildNodeAtIndex:(NSInteger)arg0 withNode:(id)arg1 ;


@end


#endif