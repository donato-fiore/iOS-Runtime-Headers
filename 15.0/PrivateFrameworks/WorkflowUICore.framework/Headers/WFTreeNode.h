// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTREENODE_H
#define WFTREENODE_H

@class NSArray, NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "WFTreeNode.h"

@interface WFTreeNode : NSObject

@property (copy, nonatomic) NSArray *childNodes;
@property (readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property (readonly, nonatomic) NSMutableArray *mutableChildNodes; // ivar: _mutableChildNodes
@property (readonly, nonatomic) NSString *nodeDescription;
@property (readonly, weak, nonatomic) WFTreeNode *parentNode; // ivar: _parentNode
@property (retain, nonatomic) id *representedObject; // ivar: _representedObject


-(id)debugDescription;
-(id)debugDescriptionAtDepth:(NSUInteger)arg0 ;
-(id)descendentNodeAtRelativeIndexPath:(id)arg0 ;
-(id)init;
-(id)initWithRepresentedObject:(id)arg0 ;
-(id)paddedStringAtDepth:(NSUInteger)arg0 ;
-(void)addNode:(id)arg0 ;
-(void)insertNode:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)moveNodeFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeNode:(id)arg0 ;
-(void)removeNodeAtIndex:(NSUInteger)arg0 ;


@end


#endif