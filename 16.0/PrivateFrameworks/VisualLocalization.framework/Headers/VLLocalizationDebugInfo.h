// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VLLOCALIZATIONDEBUGINFO_H
#define VLLOCALIZATIONDEBUGINFO_H

@class NSUUID, GEOVLFLocation, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_VLStatistics.h"

@interface VLLocalizationDebugInfo : NSObject <NSSecureCoding>

 {
    NSUUID *_identifier;
    CGFloat _monotonicTimestamp;
    CGFloat _duration;
    ? _gravity;
    ? _radialDistortion;
    _VLStatistics *_statistics;
    BOOL _hasResultPose;
    ? _resultTransform;
    ? _resultLocation;
    float _resultConfidence;
    ? _resultCovariance;
    GEOVLFLocation *_analyticsLocation;
}


@property (readonly, nonatomic, getter=_cameraIntrinsics) ? cameraIntrinsics; // ivar: _cameraIntrinsics
@property (readonly, nonatomic, getter=_exposureTargetOffset) CGFloat exposureTargetOffset; // ivar: _exposureTargetOffset
@property (readonly, nonatomic, getter=_fusedConfidences) *float fusedConfidences;
@property ? gravity;
@property (readonly, nonatomic, getter=_heading) ? heading; // ivar: _heading
@property (readonly, nonatomic, getter=_inlierIndices) *int inlierIndices;
@property (readonly, nonatomic) NSUInteger inliersCount;
@property (readonly, nonatomic, getter=_location) ? location; // ivar: _location
@property (readonly, nonatomic) NSData *pngData; // ivar: _imageData
@property (readonly, nonatomic) *float points2D;
@property (readonly, nonatomic) *CGFloat points3D;
@property ? radialDistortion;
@property (readonly, nonatomic, getter=_resultStatus) NSUInteger resultStatus; // ivar: _resultStatus
@property (readonly, nonatomic, getter=_solutionsCount) NSUInteger solutionsCount;
@property (readonly, nonatomic, getter=_solverConfidences) *float solverConfidences;
@property (readonly, nonatomic, getter=_timestamp) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic, getter=_transform) ? transform; // ivar: _transform


-(BOOL)isEqual:(id)arg0 ;
-(id)analyticsInformationWithSessionStartMonotonicTime:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif