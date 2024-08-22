// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKDEBUGTREEPROPERTYNODE_H
#define VKDEBUGTREEPROPERTYNODE_H



#import "VKDebugTreeNode.h"

@interface VKDebugTreePropertyNode : VKDebugTreeNode {
    *void _property;
}




-(id)idValueForTreeValue:(*void)arg0 ;
-(id)initWithDebugTreeProperty:(*void)arg0 withParent:(id)arg1 ;
-(id)name;
-(id)propertyColumn;
-(id)tagsColumn;
-(id)valueColumn;
-(void)searchNodes:(id)arg0 withParameter:(id)arg1 ;


@end


#endif