// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSPHEREOBSTACLE_H
#define GKSPHEREOBSTACLE_H



#import "GKObstacle.h"

@interface GKSphereObstacle : GKObstacle {
    SphericalObstacle _obstacle;
}


@property ? position;
@property (nonatomic) float radius;


+(id)obstacleWithRadius:(float)arg0 ;
-(id)initWithRadius:(float)arg0 ;


@end


#endif