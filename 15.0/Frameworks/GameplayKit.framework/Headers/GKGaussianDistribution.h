// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKGAUSSIANDISTRIBUTION_H
#define GKGAUSSIANDISTRIBUTION_H



#import "GKRandomDistribution.h"

@interface GKGaussianDistribution : GKRandomDistribution

@property (readonly, nonatomic) float deviation; // ivar: _deviation
@property (readonly, nonatomic) float mean; // ivar: _mean


-(NSInteger)nextInt;
-(id)initWithRandomSource:(id)arg0 lowestValue:(NSInteger)arg1 highestValue:(NSInteger)arg2 ;
-(id)initWithRandomSource:(id)arg0 mean:(float)arg1 deviation:(float)arg2 ;


@end


#endif