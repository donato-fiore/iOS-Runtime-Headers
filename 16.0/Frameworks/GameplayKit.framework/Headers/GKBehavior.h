// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKBEHAVIOR_H
#define GKBEHAVIOR_H

@class NSMutableArray;
@protocol NSFastEnumeration, NSCopying;

#import <Foundation/Foundation.h>


@interface GKBehavior : NSObject <NSFastEnumeration, NSCopying>

 {
    NSMutableArray *_goals;
    NSMutableArray *_weights;
}


@property (readonly) NSInteger goalCount;


+(id)behaviorWithGoal:(id)arg0 weight:(float)arg1 ;
+(id)behaviorWithGoals:(id)arg0 ;
+(id)behaviorWithGoals:(id)arg0 andWeights:(id)arg1 ;
+(id)behaviorWithWeightedGoals:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(float)weightForGoal:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getTotalForce:(id)arg0 agent;
-(id)goals;
-(id)init;
-(id)initWithGoal:(id)arg0 weight:(float)arg1 ;
-(id)initWithGoals:(id)arg0 ;
-(id)initWithGoals:(id)arg0 andWeights:(id)arg1 ;
-(id)initWithWeightedGoals:(id)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)weights;
-(void)removeAllGoals;
-(void)removeGoal:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setWeight:(float)arg0 forGoal:(id)arg1 ;


@end


#endif