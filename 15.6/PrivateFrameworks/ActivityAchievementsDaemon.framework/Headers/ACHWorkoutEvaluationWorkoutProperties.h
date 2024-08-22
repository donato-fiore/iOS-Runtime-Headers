// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHWORKOUTEVALUATIONWORKOUTPROPERTIES_H
#define ACHWORKOUTEVALUATIONWORKOUTPROPERTIES_H


#import <Foundation/Foundation.h>


@interface ACHWorkoutEvaluationWorkoutProperties : NSObject

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) BOOL isFirstParty; // ivar: _isFirstParty
@property (readonly, nonatomic) CGFloat kilocalories; // ivar: _kilocalories
@property (readonly, nonatomic) CGFloat kilometers; // ivar: _kilometers
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithWorkout:(id)arg0 ;


@end


#endif