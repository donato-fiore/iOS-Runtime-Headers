// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDECISIONNODE_H
#define GKDECISIONNODE_H


#import <Foundation/Foundation.h>

#import "GKDecisionTree.h"

@interface GKDecisionNode : NSObject {
    *void _node;
    GKDecisionTree *_tree;
}




-(id)attribute;
-(id)branches;
-(id)createBranchWithPredicate:(id)arg0 attribute:(id)arg1 ;
-(id)createBranchWithValue:(id)arg0 attribute:(id)arg1 ;
-(id)createBranchWithWeight:(NSInteger)arg0 attribute:(id)arg1 ;
-(id)createChildWithAttribute:(id)arg0 randomSource:(id)arg1 withBranch:(id)arg2 ;
-(id)description;
-(id)getNodeAtBranch:(id)arg0 ;
-(id)initWithNode:(*void)arg0 tree:(id)arg1 ;
-(void)dealloc;
-(void)setAttribute:(id)arg0 ;


@end


#endif