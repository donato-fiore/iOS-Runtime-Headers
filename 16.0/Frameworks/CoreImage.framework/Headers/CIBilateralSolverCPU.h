// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIBILATERALSOLVERCPU_H
#define CIBILATERALSOLVERCPU_H


#import <Foundation/Foundation.h>


@interface CIBilateralSolverCPU : NSObject {
    int _width;
    int _height;
    NSUInteger _maxVertices;
    *float _Dn_buf;
    *float _Dm_buf;
    *float _A_buf;
    *float _b_buf;
    *float _x_buf;
    *float _M_buf;
    *float _Sc_buf;
    *float _q_buf;
    *float _r_buf;
    *float _d_buf;
}


@property (nonatomic) BOOL useTrilinearInterpolation; // ivar: _useTrilinearInterpolation


+(void)_computeAx:(id)arg0 A:(*float)arg1 Dn:(*float)arg2 lambda:(float)arg3 x:(*float)arg4 output:(*float)arg5 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 maxVertices:(NSUInteger)arg2 ;
-(int)doSolveWithBilateralGridhash:(id)arg0 reference:(struct __IOSurface *)arg1 disparity:(struct __CVBuffer *)arg2 confidence:(struct __CVBuffer *)arg3 output:(struct __CVBuffer *)arg4 lambda:(float)arg5 maxIterations:(int)arg6 ;
-(void)_doBistochastize:(id)arg0 nIterations:(int)arg1 ;
-(void)_doSolve:(id)arg0 t:(struct __CVBuffer *)arg1 c:(struct __CVBuffer *)arg2 x:(*float)arg3 lambda:(float)arg4 pcgMaxIterations:(int)arg5 ;
-(void)_pcg:(id)arg0 A:(*float)arg1 lambda:(float)arg2 b:(*float)arg3 x:(*float)arg4 M:(*float)arg5 tol:(float)arg6 maxIterations:(int)arg7 ;
-(void)dealloc;


@end


#endif