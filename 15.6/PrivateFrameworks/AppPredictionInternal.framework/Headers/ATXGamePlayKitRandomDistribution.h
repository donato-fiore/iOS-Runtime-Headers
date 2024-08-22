// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXGAMEPLAYKITRANDOMDISTRIBUTION_H
#define ATXGAMEPLAYKITRANDOMDISTRIBUTION_H

@protocol ATXGamePlayKitRandom;

#import <Foundation/Foundation.h>


@interface ATXGamePlayKitRandomDistribution : NSObject <ATXGamePlayKitRandom>

 {
    id<ATXGamePlayKitRandom> *_source;
}


@property (readonly, nonatomic) NSInteger highestValue; // ivar: _highest
@property (readonly, nonatomic) NSInteger lowestValue; // ivar: _lowest
@property (readonly, nonatomic) NSUInteger numberOfPossibleOutcomes;


+(id)d20;
+(id)d6;
+(id)distributionForDieWithSideCount:(NSInteger)arg0 ;
+(id)distributionWithLowestValue:(NSInteger)arg0 highestValue:(NSInteger)arg1 ;
-(BOOL)nextBool;
-(NSInteger)nextInt;
-(NSUInteger)nextIntWithUpperBound:(NSUInteger)arg0 ;
-(float)nextUniform;
-(id)init;
-(id)initWithRandomSource:(id)arg0 lowestValue:(NSInteger)arg1 highestValue:(NSInteger)arg2 ;


@end


#endif