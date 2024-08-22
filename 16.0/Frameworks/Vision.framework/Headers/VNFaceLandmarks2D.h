// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACELANDMARKS2D_H
#define VNFACELANDMARKS2D_H

@class NSArray;


#import "VNFaceLandmarks.h"
#import "VNFaceLandmarkRegion2D.h"

@interface VNFaceLandmarks2D : VNFaceLandmarks {
    os_unfair_lock_s _allPointsLock;
    os_unfair_lock_s _faceContourLock;
    os_unfair_lock_s _leftEyeLock;
    os_unfair_lock_s _rightEyeLock;
    os_unfair_lock_s _leftEyebrowLock;
    os_unfair_lock_s _rightEyebrowLock;
    os_unfair_lock_s _noseLock;
    os_unfair_lock_s _noseCrestLock;
    os_unfair_lock_s _medianLineLock;
    os_unfair_lock_s _outerLipsLock;
    os_unfair_lock_s _innerLipsLock;
    os_unfair_lock_s _leftPupilLock;
    os_unfair_lock_s _rightPupilLock;
}


@property (readonly) VNFaceLandmarkRegion2D *allPoints; // ivar: _allPoints
@property (readonly) NSUInteger constellation; // ivar: _constellation
@property (readonly) VNFaceLandmarkRegion2D *faceContour; // ivar: _faceContour
@property (readonly) VNFaceLandmarkRegion2D *innerLips; // ivar: _innerLips
@property (readonly) VNFaceLandmarkRegion2D *leftEye; // ivar: _leftEye
@property (readonly) VNFaceLandmarkRegion2D *leftEyebrow; // ivar: _leftEyebrow
@property (readonly) VNFaceLandmarkRegion2D *leftPupil; // ivar: _leftPupil
@property (readonly) VNFaceLandmarkRegion2D *medianLine; // ivar: _medianLine
@property (readonly) VNFaceLandmarkRegion2D *nose; // ivar: _nose
@property (readonly) VNFaceLandmarkRegion2D *noseCrest; // ivar: _noseCrest
@property (readonly) VNFaceLandmarkRegion2D *outerLips; // ivar: _outerLips
@property (copy) NSArray *precisionEstimatesPerPoint; // ivar: _precisionEstimatesPerPoint
@property (readonly) VNFaceLandmarkRegion2D *rightEye; // ivar: _rightEye
@property (readonly) VNFaceLandmarkRegion2D *rightEyebrow; // ivar: _rightEyebrow
@property (readonly) VNFaceLandmarkRegion2D *rightPupil; // ivar: _rightPupil


+(BOOL)supportsSecureCoding;
+(NSUInteger)landmarkPointSizeInBytes;
+(id)_createNSArrayFrom:(id)arg0 withPointIndices:(*int)arg1 andPointCount:(NSUInteger)arg2 ;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(*void)_createPointArray:(*int)arg0 count:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_createFaceLandmarks2DRegionOfPoints:(NSInteger)arg0 fromPointIndexes:(*int)arg1 andPointCount:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 pointsData:(id)arg1 pointCount:(NSUInteger)arg2 constellation:(NSUInteger)arg3 precisionEstimatesPerPoint:(id)arg4 userFacingBBox:(struct CGRect )arg5 alignedBBox:(struct _Geometry2D_rect2D_ )arg6 landmarkScore:(float)arg7 ;
-(void)_initLocks;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif