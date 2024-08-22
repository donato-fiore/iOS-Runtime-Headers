// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPFACESHAPEMODEL_H
#define VCPFACESHAPEMODEL_H

@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCPFaceTensorModel.h"
#import "VCPPnPSolver.h"

@interface VCPFaceShapeModel : NSObject {
    VCPFaceTensorModel *_tensorModel;
    int _numVertices;
    *float _curMesh;
    *float _cur2D;
    int _numInternalLms;
    *int _lmCoord;
    *float _lmWeight;
    int _numBoundaryLms;
    *int _boundaryLmIndices;
    int _numBoundaryVertices;
    *int _boundaryVertices;
    *BOOL _boundaryLandmarkValidity;
    *? _chPts;
    *BOOL _chPtSelected;
    BOOL _boundaryLmUpdated;
    int _chCount;
    *float _curBlendshapes;
    *float _curCoeff;
    *float _curExprWeights;
    *float _prevExprWeights;
    *float _exprWeightDiagMatrix;
    *float _transformedCoeff;
    *float _blendShapeDelta;
    float _trans;
    float _intrinsicMatrix;
    float _extrinsicMatrix;
    float _eulerAngle;
    float _rotMatrix;
    float _LM2D;
    float _LM3D;
    *float _lm3dBlendshapes;
    *float _lm3dMeanBlendshapes;
    *float _lm3dBlendshapeComponents;
    int _numFrmsSinceLastShapeUpdate;
    BOOL _shapeUpdateInProgress;
    VCPPnPSolver *_poseSolver;
    NSObject<OS_dispatch_group> *_updateShapeGroup;
    NSObject<OS_dispatch_queue> *_updateShapeQueue;
    *float _asyncBlendshapes;
    *float _asyncLmBlendshapes;
    float _asyncExtMat;
    float _asyncLm2d;
    float _asyncWeights;
    BOOL _identityInit;
    ? _meshVertices;
}


@property int detectionModeCounterShapeModel; // ivar: _detectionModeCounterShapeModel
@property ? meshVertices;
@property int processingMode; // ivar: _processingMode
@property (readonly) NSUInteger vertexCount; // ivar: _vertexCount


-(BOOL)fitOneImage:(*float)arg0 ;
-(BOOL)optimizeProjectionMatrix:(int)arg0 tracking:(BOOL)arg1 firstPass:(BOOL)arg2 ;
-(BOOL)trackFaceMesh:(*float)arg0 ;
-(id)initWithMode:(int)arg0 ;
-(void)calculateBlendshapeWeights:(*float)arg0 prevWeights:(*float)arg1 lmBlendshapes:(*float)arg2 maxIter:(int)arg3 ;
-(void)calculateIdentityCoefficients:(*float)arg0 extrinsicMatrix:(*float)arg1 pts2D:(*float)arg2 exprWeights:(*float)arg3 lm3DMeanBlendshapes:(*float)arg4 lm3DComponents:(*float)arg5 maxIter:(int)arg6 ;
-(void)calculatePosePnpSolver:(int)arg0 ;
-(void)getEulerAngle:(*float)arg0 ;
-(void)getInternal3dLandmarksCoordinates:(*float)arg0 lm3dPos:(*float)arg1 ;
-(void)getOneInternalLandmarkCoordinates:(*float)arg0 lmCoord:(*int)arg1 lmWeight:(*float)arg2 lm3dPos:(*float)arg3 ;
-(void)moveBoundaryLandmarks:(*float)arg0 output:(*float)arg1 isInput:(BOOL)arg2 ;
-(void)project3Dto2D:(*float)arg0 intrinsinc:(*float)arg1 extrinsic:(*float)arg2 numVert:(int)arg3 out2dpts:(*float)arg4 ;
-(void)updateBoundary3dLandmarkBlendshapes:(*float)arg0 numBlendshapes:(int)arg1 pts2D:(*float)arg2 lm2D:(*float)arg3 lmBlendshapes:(*float)arg4 ;
-(void)updateBoundaryLandmarkCoordinates:(*float)arg0 pts2D:(*float)arg1 lm2D:(*float)arg2 lm3dPos:(*float)arg3 ;
-(void)updateFocalLengthInPixels:(float)arg0 ;
-(void)updateIdentityShape:(*float)arg0 ;
-(void)updateIntrinsic:(float)arg0 vc:(float)arg1 ;
-(void)updateShapeCoeff:(*float)arg0 extrinsicMatrix:(*float)arg1 pts2D:(*float)arg2 exprWeights:(*float)arg3 outputblendshapes:(*float)arg4 ;


@end


#endif