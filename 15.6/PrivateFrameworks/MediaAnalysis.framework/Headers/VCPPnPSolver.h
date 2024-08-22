// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPNPSOLVER_H
#define VCPPNPSOLVER_H


#import <Foundation/Foundation.h>


@interface VCPPnPSolver : NSObject {
    float _fu;
    float _fv;
    float _uc;
    float _vc;
    *float _points2D;
    *float _points3D;
    int _numPoints;
    float _controlPointsWorld;
    float _controlPointsCamera;
    *float _pointsWorld;
    *float _pointsImage;
    *float _alphas;
    *float _points3DCamera;
    float _cameraOrientation;
}


@property ? pose; // ivar: _pose


-(float)computeProjectionError:(float)arg0 T:(float)arg1 ;
-(id)initWithFocalLengthInPixels:(float)arg0 principalPoint:(struct CGPoint )arg1 cameraTowardsPositiveZ:(BOOL)arg2 ;
-(int)computeBarycentricCoordinates;
-(int)computeL6x10:(*void)arg0 L6x10:(*void)arg1 ;
-(int)computeRT:(float)arg0 T:(float)arg1 ;
-(int)computeSVDVt:(*void)arg0 Vt:(*void)arg1 ;
-(int)configureGaussNewton:(*void)arg0 R6x1:(*void)arg1 betas:(float)arg2 jacobian:(*void)arg3 residual:(*void)arg4 ;
-(int)correctSigns;
-(int)estimateBetasN1:(*void)arg0 R6x1:(*void)arg1 betas:(*float)arg2 ;
-(int)estimateBetasN2:(*void)arg0 R6x1:(*void)arg1 betas:(*float)arg2 ;
-(int)estimateBetasN3:(*void)arg0 R6x1:(*void)arg1 betas:(*float)arg2 ;
-(int)estimateExtrinsicsWith:(*float)arg0 andPoints3D:(*float)arg1 andNumPoints:(int)arg2 ;
-(int)estimatePose:(*float)arg0 ;
-(int)estimateRT:(*void)arg0 betas:(*float)arg1 R:(float)arg2 T:(float)arg3 projectionError:(*float)arg4 ;
-(int)getControlPoints;
-(int)optimizeBetas:(*void)arg0 R6x1:(*void)arg1 betas:(float)arg2 ;
-(void)computeControlPointsCamera:(*float)arg0 Vt:(*void)arg1 ;
-(void)computePoints3DCamera;
-(void)computeR6x1:(*void)arg0 ;
-(void)dealloc;
-(void)updateFocalLengthInPixels:(float)arg0 ;
-(void)updateIntrinsic:(float)arg0 vc:(float)arg1 ;


@end


#endif