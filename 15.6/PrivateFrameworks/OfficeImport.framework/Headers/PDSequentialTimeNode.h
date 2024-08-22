// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSEQUENTIALTIMENODE_H
#define PDSEQUENTIALTIMENODE_H

@class NSString, NSMutableArray;


#import "PDTimeNode.h"
#import "PDAnimationTarget.h"

@interface PDSequentialTimeNode : PDTimeNode

@property (nonatomic) BOOL concurrent; // ivar: mConcurrent
@property (nonatomic) CGFloat delay;
@property (nonatomic) CGFloat direction;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) int iterateType;
@property (nonatomic) int nextAction; // ivar: mNextAction
@property (retain, nonatomic) NSMutableArray *nextConditions; // ivar: mNextConditions
@property (nonatomic) int presetClass;
@property (nonatomic) int presetId;
@property (nonatomic) int previousAction; // ivar: mPreviousAction
@property (retain, nonatomic) NSMutableArray *previousConditions; // ivar: mPreviousConditions
@property (retain, nonatomic) PDAnimationTarget *target;
@property (nonatomic) int triggerType;


+(NSUInteger)buildPartsFromTarget:(id)arg0 ;
+(id)newSequentialTimeNodeGroupForAnimationInfo;
+(id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg0 ;
+(id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg0 target:(id)arg1 ;
+(id)timeNodeUnion:(id)arg0 initWithClass:(Class)arg1 ;
-(id)level1ParallelTimeNodeGroupAtNodeIndex:(NSUInteger)arg0 ;
-(id)level2ParallelTimeNodeGroupAtNodeIndex:(NSUInteger)arg0 level1NodeIndex:(NSUInteger)arg1 ;
-(id)level3BehaviorAtNodeIndex:(NSUInteger)arg0 level2NodeIndex:(NSUInteger)arg1 level1NodeIndex:(NSUInteger)arg2 ;
-(void)setLevel2ParallelAttribute:(id)arg0 ;


@end


#endif