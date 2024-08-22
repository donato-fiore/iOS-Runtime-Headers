// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARPLANEDATA_H
#define ARPLANEDATA_H

@class NSDictionary, NSString;
@protocol ARResultData, ARQATraceable;

#import <Foundation/Foundation.h>

#import "ARCV3DPlaneDetectionPlaneList.h"

@interface ARPlaneData : NSObject <ARResultData, ARQATraceable>

 {
    NSDictionary *_planeIdentifiers;
    BOOL _sceneUnderstandingEnabled;
    BOOL _applyPivotRotation;
    ? _visionToRendering;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ARCV3DPlaneDetectionPlaneList *detectionResult; // ivar: _detectionResult
@property (readonly, nonatomic) NSUInteger detectionTypeMask; // ivar: _detectionTypeMask
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSDictionary *tracingEntry;


+(?)_surfaceToWorldTransformForPlanepivot;
+(NSInteger)_worldAlignmentRotationForReferenceTransform:(struct ? )arg0 planeAlignment:(NSInteger)arg1 detectionTypeMask:(NSUInteger)arg2 ;
+(float)_pivotForPlane:(struct CV3DPlaneDetectionPlane *)arg0 ;
+(float)_surfacePivotForPlane:(struct CV3DSurfaceDetectionPlane *)arg0 ;
+(id)_anchorForPlane:(struct CV3DPlaneDetectionPlane *)arg0 identifier:(id)arg1 referenceOriginTransform:(struct ? )arg2 visionToRendering:(struct ? )arg3 sceneUnderstandingEnabled:(BOOL)arg4 applyPivotRotation:(BOOL)arg5 detectionTypeMask:(NSUInteger)arg6 ;
+(id)anchorForDetectionResult:(struct CV3DSurfaceDetectionResult *)arg0 ;
+(struct ? )_applyPivotToPlaneToWorldTransform:(struct ? )arg0 pivot:(float)arg1 ;
+(void)_updateExtentsForPlaneAnchor:(id)arg0 plane:(struct CV3DPlaneDetectionPlane *)arg1 pivot:(float)arg2 applyPivotRotation:(BOOL)arg3 detectionTypeMask:(NSUInteger)arg4 ;
+(void)setSemanticsFromCV3D:(int)arg0 labelProbabilities:(id)arg1 sceneUnderstandingEnabled:(BOOL)arg2 onPlane:(id)arg3 ;
-(BOOL)applyPivotRotation;
-(id)_anchorForPlane:(struct CV3DPlaneDetectionPlane *)arg0 identifier:(id)arg1 referenceOriginTransform:(struct ? )arg2 ;
-(id)_updatedAnchor:(id)arg0 forPlane:(struct CV3DPlaneDetectionPlane *)arg1 referenceOriginTransform:(struct ? )arg2 ;
-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList *)arg0 detectionTypeMask:(NSUInteger)arg1 sceneUnderstandingEnabled:(BOOL)arg2 ;
-(id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList *)arg0 detectionTypeMask:(NSUInteger)arg1 sceneUnderstandingEnabled:(BOOL)arg2 visionToRendering:(struct ? )arg3 atTimestamp:(CGFloat)arg4 ;


@end


#endif