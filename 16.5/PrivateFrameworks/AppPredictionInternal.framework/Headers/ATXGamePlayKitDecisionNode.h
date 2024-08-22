// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXGAMEPLAYKITDECISIONNODE_H
#define ATXGAMEPLAYKITDECISIONNODE_H


#import <Foundation/Foundation.h>

#import "ATXGamePlayKitDecisionTree.h"

@interface ATXGamePlayKitDecisionNode : NSObject {
    shared_ptr<ATXGamePlayKitCDecisionNode> _node;
    ATXGamePlayKitDecisionTree *_tree;
}




-(id)attribute;
-(id)branches;
-(id)createBranchWithPredicate:(id)arg0 attribute:(id)arg1 ;
-(id)createBranchWithValue:(id)arg0 attribute:(id)arg1 ;
-(id)createBranchWithWeight:(NSInteger)arg0 attribute:(id)arg1 ;
-(id)createChildWithAttribute:(id)arg0 randomSource:(id)arg1 withBranch:(id)arg2 ;
-(id)description;
-(id)getNodeAtBranch:(id)arg0 ;
-(id)initWithNode:(struct shared_ptr<ATXGamePlayKitCDecisionNode> )arg0 tree:(id)arg1 ;
-(void)dealloc;
-(void)setAttribute:(id)arg0 ;


@end


#endif