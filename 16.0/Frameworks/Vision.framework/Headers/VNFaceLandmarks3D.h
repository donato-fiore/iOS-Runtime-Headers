// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACELANDMARKS3D_H
#define VNFACELANDMARKS3D_H



#import "VNFaceLandmarks.h"
#import "VNFaceLandmarkRegion3D.h"

@interface VNFaceLandmarks3D : VNFaceLandmarks {
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
}


@property (readonly) VNFaceLandmarkRegion3D *allPoints; // ivar: _allPoints
@property (readonly) VNFaceLandmarkRegion3D *faceContour; // ivar: _faceContour
@property (readonly) VNFaceLandmarkRegion3D *innerLips; // ivar: _innerLips
@property (readonly) VNFaceLandmarkRegion3D *leftEye; // ivar: _leftEye
@property (readonly) VNFaceLandmarkRegion3D *leftEyebrow; // ivar: _leftEyebrow
@property (readonly) VNFaceLandmarkRegion3D *medianLine; // ivar: _medianLine
@property (readonly) VNFaceLandmarkRegion3D *nose; // ivar: _nose
@property (readonly) VNFaceLandmarkRegion3D *noseCrest; // ivar: _noseCrest
@property (readonly) VNFaceLandmarkRegion3D *outerLips; // ivar: _outerLips
@property (readonly) VNFaceLandmarkRegion3D *rightEye; // ivar: _rightEye
@property (readonly) VNFaceLandmarkRegion3D *rightEyebrow; // ivar: _rightEyebrow


+(BOOL)supportsSecureCoding;
+(NSUInteger)landmarkPointSizeInBytes;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(*void)_createPointArray:(*int)arg0 count:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 pointsData:(id)arg1 pointCount:(NSUInteger)arg2 userFacingBBox:(struct CGRect )arg3 alignedBBox:(struct _Geometry2D_rect2D_ )arg4 landmarkScore:(float)arg5 ;
-(void)_initLocks;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif