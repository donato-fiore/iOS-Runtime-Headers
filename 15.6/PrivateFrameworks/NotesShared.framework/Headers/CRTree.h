// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRTREE_H
#define CRTREE_H



#import "CRObject.h"
#import "CRDocument.h"
#import "CROrderedSet.h"
#import "CRTreeNode.h"

@interface CRTree : CRObject

@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) CRDocument *document;
@property (readonly, nonatomic) CROrderedSet *nodes;
@property (readonly, nonatomic) CRTreeNode *root;


+(id)CRProperties;
-(NSUInteger)insertIndexForNode:(id)arg0 childIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCRCoder:(id)arg0 ;
-(id)insertNodeWithValue:(id)arg0 inParent:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)computeChildren;
-(void)insertNode:(id)arg0 inParent:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)invalidateChildren;
-(void)mergeWith:(id)arg0 ;
-(void)moveNode:(id)arg0 toParent:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)removeNode:(id)arg0 ;
-(void)setNodeTree:(id)arg0 insertAtIndex:(NSUInteger)arg1 ;


@end


#endif