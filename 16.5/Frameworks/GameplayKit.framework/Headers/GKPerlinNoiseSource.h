// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPERLINNOISESOURCE_H
#define GKPERLINNOISESOURCE_H



#import "GKCoherentNoiseSource.h"

@interface GKPerlinNoiseSource : GKCoherentNoiseSource

@property (nonatomic) CGFloat persistence; // ivar: _persistence


+(id)perlinNoiseSourceWithFrequency:(CGFloat)arg0 octaveCount:(NSInteger)arg1 persistence:(CGFloat)arg2 lacunarity:(CGFloat)arg3 seed:(int)arg4 ;
-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithFrequency:(CGFloat)arg0 octaveCount:(NSInteger)arg1 persistence:(CGFloat)arg2 lacunarity:(CGFloat)arg3 seed:(int)arg4 ;


@end


#endif