// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVVELOCITYSAMPLE3D_H
#define ASVVELOCITYSAMPLE3D_H


#import <Foundation/Foundation.h>


@interface ASVVelocitySample3D : NSObject {
    ? _start;
    ? _end;
}


@property CGFloat deltaTime; // ivar: _deltaTime
@property ? end;
@property ? start;


-(id)calcFinalVelocityFromPreviousSample;
-(id)initWithStart:(CGFloat)arg0 enddeltaTime;


@end


#endif