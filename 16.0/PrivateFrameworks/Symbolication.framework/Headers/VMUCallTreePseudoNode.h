// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUCALLTREEPSEUDONODE_H
#define VMUCALLTREEPSEUDONODE_H



#import "VMUCallTreeNode.h"

@interface VMUCallTreePseudoNode : VMUCallTreeNode



-(BOOL)isPseudo;
-(id)largestTopOfStackPath;
-(id)pseudoNodeTopOfStackChild;
-(id)sortedChildrenWithPseudoNode;


@end


#endif