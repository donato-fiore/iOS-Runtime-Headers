// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKDEBUGTREEDATANODE_H
#define VKDEBUGTREEDATANODE_H



#import "VKDebugTreeNode.h"

@interface VKDebugTreeDataNode : VKDebugTreeNode {
    *void _node;
}




-(BOOL)isExpandable;
-(NSInteger)propertyCount;
-(id)initWithDebugTreeNode:(*void)arg0 withParent:(id)arg1 ;
-(id)name;
-(id)propertyColumn;
-(id)tagsColumn;
-(id)valueColumn;
-(void)buildChildren;
-(void)searchNodes:(id)arg0 withParameter:(id)arg1 ;


@end


#endif