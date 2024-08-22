// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSTREENODE_H
#define VSTREENODE_H

@class NSArray, NSMutableArray, NSIndexPath;

#import <Foundation/Foundation.h>

#import "VSTreeNode.h"

@interface VSTreeNode : NSObject

@property (readonly, copy, nonatomic) NSArray *childNodes;
@property (retain, nonatomic) NSMutableArray *children; // ivar: _children
@property (readonly, copy, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property (readonly, nonatomic) NSMutableArray *mutableChildNodes;
@property (weak, nonatomic) VSTreeNode *parentNode; // ivar: _parentNode
@property (readonly, nonatomic) id *representedObject; // ivar: _representedObject


+(id)keyPathsForValuesAffectingIndexPath;
+(id)keyPathsForValuesAffectingLeaf;
+(id)treeNodeWithRepresentedObject:(id)arg0 ;
-(id)_descendantNodesAtDepth:(NSUInteger)arg0 ;
-(id)descendantNodeAtIndexPath:(id)arg0 ;
-(id)init;
-(id)initWithRepresentedObject:(id)arg0 ;
-(void)enumerateDescendantsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)insertChildNodes:(id)arg0 atIndexes:(id)arg1 ;
-(void)removeChildNodesAtIndexes:(id)arg0 ;


@end


#endif