// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPOLYGONOBSTACLE_H
#define GKPOLYGONOBSTACLE_H

@protocol NSSecureCoding;


#import "GKObstacle.h"

@interface GKPolygonObstacle : GKObstacle <NSSecureCoding>

 {
    *void _cPolygonObstacle;
}


@property (readonly, nonatomic) NSUInteger vertexCount;


+(BOOL)supportsSecureCoding;
+(id)obstacleWithPoints:(*NSUInteger)arg0 count;
-(*void)cPolygonObstacle;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPoints:(*NSUInteger)arg0 count;
-(id)vertexAtIndex;
-(struct Obstacle *)obstacle;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCPolygonObstacle:(*void)arg0 ;


@end


#endif