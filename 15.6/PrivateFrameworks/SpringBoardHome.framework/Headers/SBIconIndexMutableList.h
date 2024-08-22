// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONINDEXMUTABLELIST_H
#define SBICONINDEXMUTABLELIST_H

@class NSMutableArray, NSMapTable, NSString;
@protocol SBIconIndexNodeObserver, NSFastEnumeration, NSCopying, SBIconIndexNode, SBIconIndexMutableListObserver;

#import <Foundation/Foundation.h>


@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration, NSCopying>

 {
    NSMutableArray *_nodes;
    NSMapTable *_index;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SBIconIndexNode> *firstNode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SBIconIndexNode> *lastNode;
@property (weak, nonatomic) NSObject<SBIconIndexMutableListObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


-(BOOL)containsNode:(id)arg0 ;
-(BOOL)containsNodeIdentifier:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfNode:(id)arg0 ;
-(NSUInteger)indexOfNodeAtIndexes:(id)arg0 options:(NSUInteger)arg1 passingTest:(id)arg2 ;
-(NSUInteger)indexOfNodePassingTest:(id)arg0 ;
-(NSUInteger)indexOfNodeWithOptions:(NSUInteger)arg0 passingTest:(id)arg1 ;
-(id)containedNodeIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexDescriptionWithPrefix:(id)arg0 ;
-(id)indexPathsForContainedNodeIdentifier:(id)arg0 prefixPath:(id)arg1 ;
-(id)indexesOfNodesPassingTest:(id)arg0 ;
-(id)init;
-(id)nodeAtIndex:(NSUInteger)arg0 ;
-(id)nodes;
-(id)nodesAlongIndexPath:(id)arg0 consumedIndexes:(NSUInteger)arg1 ;
-(id)nodesAtIndexes:(id)arg0 ;
-(id)nodesContainingNodeIdentifier:(id)arg0 ;
-(id)nodesInRange:(struct _NSRange )arg0 ;
-(void)addNode:(id)arg0 ;
-(void)assertIndexCoherent;
-(void)dealloc;
-(void)enumerateNodesAtIndexes:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNodesUsingBlock:(id)arg0 ;
-(void)enumerateNodesWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)insertNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertNodes:(id)arg0 atIndexes:(id)arg1 ;
-(void)moveNode:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)moveNodes:(id)arg0 toContiguousIndicesStartingAt:(NSUInteger)arg1 ;
-(void)node:(id)arg0 didAddContainedNodeIdentifiers:(id)arg1 ;
-(void)node:(id)arg0 didRemoveContainedNodeIdentifiers:(id)arg1 ;
-(void)nodeDidMoveContainedNodes:(id)arg0 ;
-(void)removeAllNodes;
-(void)removeLastNode;
-(void)removeNode:(id)arg0 ;
-(void)removeNodeAtIndex:(NSUInteger)arg0 ;
-(void)removeNodesAtIndexes:(id)arg0 ;
-(void)removeNodesInArray:(id)arg0 ;
-(void)removeNodesInRange:(struct _NSRange )arg0 ;
-(void)replaceNodeAtIndex:(NSUInteger)arg0 withNode:(id)arg1 ;
-(void)setNodes:(id)arg0 ;
-(void)sortUsingComparator:(id)arg0 ;
-(void)sortUsingSelector:(SEL)arg0 ;


@end


#endif