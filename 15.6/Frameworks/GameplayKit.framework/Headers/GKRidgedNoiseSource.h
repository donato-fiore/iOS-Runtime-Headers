// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKRIDGEDNOISESOURCE_H
#define GKRIDGEDNOISESOURCE_H



#import "GKCoherentNoiseSource.h"

@interface GKRidgedNoiseSource : GKCoherentNoiseSource {
    CGFloat m_weights;
}




+(id)ridgedNoiseSourceWithFrequency:(CGFloat)arg0 octaveCount:(NSInteger)arg1 lacunarity:(CGFloat)arg2 seed:(int)arg3 ;
-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithFrequency:(CGFloat)arg0 octaveCount:(NSInteger)arg1 lacunarity:(CGFloat)arg2 seed:(int)arg3 ;


@end


#endif