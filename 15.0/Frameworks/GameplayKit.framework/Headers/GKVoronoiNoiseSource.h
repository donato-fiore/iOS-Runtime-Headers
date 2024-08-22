// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKVORONOINOISESOURCE_H
#define GKVORONOINOISESOURCE_H



#import "GKNoiseSource.h"

@interface GKVoronoiNoiseSource : GKNoiseSource

@property (nonatomic) CGFloat displacement; // ivar: _displacement
@property (nonatomic, getter=isDistanceEnabled) BOOL distanceEnabled; // ivar: _distanceEnabled
@property (nonatomic) CGFloat frequency; // ivar: _frequency
@property (nonatomic) int seed; // ivar: _seed


+(id)voronoiNoiseWithFrequency:(CGFloat)arg0 displacement:(CGFloat)arg1 distanceEnabled:(BOOL)arg2 seed:(int)arg3 ;
-(CGFloat)valueAt;
-(id)cloneModule;
-(id)init;
-(id)initWithFrequency:(CGFloat)arg0 displacement:(CGFloat)arg1 distanceEnabled:(BOOL)arg2 seed:(int)arg3 ;


@end


#endif