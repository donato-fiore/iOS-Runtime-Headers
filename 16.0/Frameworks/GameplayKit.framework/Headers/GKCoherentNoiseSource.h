// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCOHERENTNOISESOURCE_H
#define GKCOHERENTNOISESOURCE_H



#import "GKNoiseSource.h"

@interface GKCoherentNoiseSource : GKNoiseSource

@property (nonatomic) CGFloat frequency; // ivar: _frequency
@property (nonatomic) CGFloat lacunarity; // ivar: _lacunarity
@property (nonatomic) NSInteger octaveCount; // ivar: _octaveCount
@property (nonatomic) int seed; // ivar: _seed


-(CGFloat)valueAt;
-(id)cloneModule;


@end


#endif