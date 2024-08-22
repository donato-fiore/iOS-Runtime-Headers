// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCSEDATA_H
#define TSTCSEDATA_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSTCSEData : NSObject {
    unordered_map<TSTExpressionNode *, TSTCSENodeData, std::hash<TSTExpressionNode *>, std::equal_to<TSTExpressionNode *>, std::allocator<std::pair<TSTExpressionNode *const, TSTCSENodeData>>> _nodesToData;
    NSMutableDictionary *_hashesToNodeSets;
}




-(NSUInteger)expressionSize:(id)arg0 ;
-(id)description;
-(id)expressionsIdenticalToExpression:(id)arg0 ;
-(id)expressionsMatchingCSENodeData:(struct TSTCSENodeData )arg0 forNode:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)recordExpression:(id)arg0 data:(struct TSTCSENodeData )arg1 ;


@end


#endif