// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIBOX3D_H
#define SIBOX3D_H


#import <Foundation/Foundation.h>


@interface SIBox3D : NSObject {
    ? _extent;
}


@property ? extent;
@property (nonatomic) ? transform; // ivar: _transform
@property (readonly, nonatomic) ? transformFromBoxCorner;


+(id)transformToNewCoordinate:(struct ? )arg0 current:(id)arg1 ;
-(float)signedDistanceFunction;
-(id)closestPoint;
-(id)initWithCornerTransform:(struct ? )arg0 extent;
-(id)initWithTransform:(struct ? )arg0 extent;
-(void)transformToNewCoordinate:(struct ? )arg0 ;


@end


#endif