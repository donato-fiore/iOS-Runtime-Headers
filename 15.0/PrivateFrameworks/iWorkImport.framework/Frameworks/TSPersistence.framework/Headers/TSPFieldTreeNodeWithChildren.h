// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPFIELDTREENODEWITHCHILDREN_H
#define TSPFIELDTREENODEWITHCHILDREN_H



#import "TSPFieldTreeNode.h"

@interface TSPFieldTreeNodeWithChildren : TSPFieldTreeNode {
    map<int, TSPFieldTreeNode *, std::less<int>, std::allocator<std::pair<const int, TSPFieldTreeNode *>>> _children;
}




-(BOOL)addChildNode:(id)arg0 forFieldNumber:(int)arg1 ;
-(id)childNodeForFieldNumber:(int)arg0 ;
-(void)saveToArchiver:(id)arg0 message:(struct Message *)arg1 ;


@end


#endif