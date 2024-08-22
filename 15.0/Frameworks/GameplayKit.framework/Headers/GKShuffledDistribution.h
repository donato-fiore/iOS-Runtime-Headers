// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSHUFFLEDDISTRIBUTION_H
#define GKSHUFFLEDDISTRIBUTION_H



#import "GKRandomDistribution.h"

@interface GKShuffledDistribution : GKRandomDistribution {
    NSInteger _delta;
    float _uniformDistance;
    NSInteger _lastInt;
    NSInteger _nextIntsCapacity;
    NSInteger _nextIntsCount;
    *NSInteger _nextInts;
}




-(NSInteger)nextInt;
-(float)uniformDistance;
-(id)initWithRandomSource:(id)arg0 lowestValue:(NSInteger)arg1 highestValue:(NSInteger)arg2 ;
-(id)initWithRandomSource:(id)arg0 lowestValue:(NSInteger)arg1 highestValue:(NSInteger)arg2 delta:(NSInteger)arg3 ;
-(void)dealloc;
-(void)setUniformDistance:(float)arg0 ;


@end


#endif