// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKRUNNINGCURVE_H
#define VKRUNNINGCURVE_H


#import <Foundation/Foundation.h>


@interface VKRunningCurve : NSObject {
    ? _p0;
    CGFloat _t0;
    ? _p1;
    CGFloat _t1;
    ? _pu;
    CGFloat _tu;
    ? _mb;
    BOOL _mbValid;
}




-(BOOL)hasStateAtTime:(CGFloat)arg0 ;
-(id)init;
-(struct ? )stateAtTime:(CGFloat)arg0 ;
-(void)appendPosition:(struct Matrix<double, 3, 1> )arg0 atTime:(CGFloat)arg1 ;
-(void)dealloc;
-(void)reset;


@end


#endif