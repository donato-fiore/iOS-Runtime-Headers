// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKVIEWVOLUME_H
#define VKVIEWVOLUME_H


#import <Foundation/Foundation.h>


@interface VKViewVolume : NSObject {
    Matrix<double, 3, 1> _corners;
}


@property (readonly, nonatomic) *void corners;


-(struct Matrix<double, 3, 1> )lerpPoint:(*float)arg0 ;
-(void)updateWithFrustum:(struct ? )arg0 matrix:(*void)arg1 ;


@end


#endif