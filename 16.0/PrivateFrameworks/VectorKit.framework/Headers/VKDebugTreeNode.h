// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKDEBUGTREENODE_H
#define VKDEBUGTREENODE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "VKDebugTreeNode.h"

@interface VKDebugTreeNode : NSObject

@property (retain) NSArray *children; // ivar: _children
@property (readonly) NSString *name;
@property (readonly, weak) VKDebugTreeNode *parent; // ivar: _parent


-(BOOL)isExpandable;
-(id)initWithParent:(id)arg0 ;
-(id)propertyColumn;
-(id)tagsColumn;
-(id)valueColumn;
-(void)searchNodes:(id)arg0 withParameter:(id)arg1 ;


@end


#endif