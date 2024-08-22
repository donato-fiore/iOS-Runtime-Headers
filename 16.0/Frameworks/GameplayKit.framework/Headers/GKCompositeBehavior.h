// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCOMPOSITEBEHAVIOR_H
#define GKCOMPOSITEBEHAVIOR_H

@class NSMutableArray;


#import "GKBehavior.h"

@interface GKCompositeBehavior : GKBehavior {
    NSMutableArray *_subBehaviors;
    NSMutableArray *_subBehaviorWeights;
}


@property (readonly) NSInteger behaviorCount;


+(id)behaviorWithBehaviors:(id)arg0 ;
+(id)behaviorWithBehaviors:(id)arg0 andWeights:(id)arg1 ;
-(float)weightForBehavior:(id)arg0 ;
-(id)getTotalForce:(id)arg0 agent;
-(id)init;
-(id)initWithBehaviors:(id)arg0 ;
-(id)initWithBehaviors:(id)arg0 andWeights:(id)arg1 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)removeAllBehaviors;
-(void)removeBehavior:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setWeight:(float)arg0 forBehavior:(id)arg1 ;


@end


#endif