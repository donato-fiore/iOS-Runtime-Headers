// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPLANEDATA_H
#define ARPLANEDATA_H

@class NSDictionary, NSString;
@protocol ARResultData, ARQATraceable;

#import <Foundation/Foundation.h>

#import "ARCV3DPlaneDetectionPlaneList.h"

@interface ARPlaneData : NSObject <ARResultData, ARQATraceable>

 {
    NSDictionary *_planeIdentifiers;
    ? _anchorConventionRotation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ARCV3DPlaneDetectionPlaneList *detectionResult; // ivar: _detectionResult
@property (readonly, nonatomic) NSUInteger detectionTypeMask; // ivar: _detectionTypeMask
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL sceneUnderstandingEnabled; // ivar: _sceneUnderstandingEnabled
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSDictionary *tracingEntry;
@property (readonly, nonatomic) ? visionToRendering; // ivar: _visionToRendering


+(?)_surfaceToWorldTransformForPlanepivot;
+(float)_orientedPivotForPlane:(struct CV3DPlaneDetectionPlane *)arg0 ;
+(float)_surfaceOrientedPivotForPlane:(struct CV3DSurfaceDetectionPlane *)arg0 ;
+(id)anchorForDetectionResult:(struct CV3DSurfaceDetectionResult *)arg0 ;
+(void)setSemanticsFromCV3D:(int)arg0 labelProbabilities:(id)arg1 sceneUnderstandingEnabled:(BOOL)arg2 onPlane:(id)arg3 ;
-(NSInteger)_worldAlignmentRotationForReferenceTransform:(struct ? )arg0 planeAlignment:(NSInteger)arg1 ;
-(id)_anchorForPlane:(struct CV3DPlaneDetectionPlane *)arg0 identifier:(id)arg1 referenceOriginTransform:(struct ? )arg2 ;
-(id)_geometryForPlane:(struct CV3DPlaneDetectionPlane *)arg0 planeOrientedPivot:(float)arg1 alignmentRotation:(NSInteger)arg2 planeBounds:(struct ? )arg3 ;
-(id)_gridExtentForPlane:(struct CV3DPlaneDetectionPlane *)arg0 planeOrientedPivot:(float)arg1 alignmentRotation:(NSInteger)arg2 ;
-(id)_updatedAnchor:(id)arg0 forPlane:(struct CV3DPlaneDetectionPlane *)arg1 referenceOriginTransform:(struct ? )arg2 ;
-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)initWithARPlaneData:(id)arg0 ;
-(id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList *)arg0 detectionTypeMask:(NSUInteger)arg1 sceneUnderstandingEnabled:(BOOL)arg2 ;
-(id)initWithDetectionResult:(struct CV3DPlaneDetectionPlaneList *)arg0 detectionTypeMask:(NSUInteger)arg1 sceneUnderstandingEnabled:(BOOL)arg2 visionToRendering:(struct ? )arg3 ;
-(struct ? )_applyPivotToPlaneToWorldTransform:(struct ? )arg0 pivot:(float)arg1 ;
-(struct ? )_boundsForPlane:(struct CV3DPlaneDetectionPlane *)arg0 planeOrientedPivot:(float)arg1 alignmentRotation:(NSInteger)arg2 ;
-(struct ? )_orientedBoundsForPlane:(struct CV3DPlaneDetectionPlane *)arg0 planeOrientedPivot:(float)arg1 alignmentRotation:(NSInteger)arg2 ;
-(void)_updateExtentsForPlaneAnchor:(id)arg0 plane:(struct CV3DPlaneDetectionPlane *)arg1 pivot:(float)arg2 ;


@end


#endif