// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CLVLLOCALIZATIONMAPS488DETAILS_H
#define _CLVLLOCALIZATIONMAPS488DETAILS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CLVLLocalizationMaps488Details : NSObject <NSCopying, NSSecureCoding>

 {
    CGFloat _slamOrigin;
    CGFloat _resultPoseRotation;
    CGFloat _resultPoseTranslation;
}


@property (readonly, nonatomic) NSUInteger descriptorDimension; // ivar: _descriptorDimension
@property (readonly, nonatomic) NSUInteger frameCount; // ivar: _frameCount
@property (readonly, nonatomic) *int inlierIndices; // ivar: _inlierIndices
@property (readonly, nonatomic) NSUInteger inliersCount; // ivar: _inliersCount
@property (readonly, nonatomic) *float perFrameCalibrationMatrices; // ivar: _perFrameCalibrationMatrices
@property (readonly, nonatomic) *float perFrameDistortion; // ivar: _perFrameDistortion
@property (readonly, nonatomic) *float perFrameVioPoses; // ivar: _perFrameVioPoses
@property (readonly, nonatomic) *int perFrameVioStatusCodes; // ivar: _perFrameVioStatusCodes
@property (readonly, nonatomic) *float points2D; // ivar: _points2D
@property (readonly, nonatomic) *CGFloat points3D; // ivar: _points3D
@property (readonly, nonatomic) *CGFloat resultPoseRotation;
@property (readonly, nonatomic) *CGFloat resultPoseTranslation;
@property (readonly, nonatomic) *CGFloat slamOrigin;
@property (readonly, nonatomic) char * slamTrackDescriptors; // ivar: _slamTrackDescriptors
@property (readonly, nonatomic) *short slamTrackImageIndices; // ivar: _slamTrackImageIndices
@property (readonly, nonatomic) *short slamTrackObservations; // ivar: _slamTrackObservations
@property (readonly, nonatomic) *float slamTracks; // ivar: _slamTracks
@property (readonly, nonatomic) *float slamTracks2D; // ivar: _slamTracks2D
@property (readonly, nonatomic) NSUInteger slamTracksCount; // ivar: _slamTracksCount
@property (readonly, nonatomic) NSUInteger totalObservationsCount; // ivar: _totalObservationsCount


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithMemberIndent:(id)arg0 endIndent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetFrames;
-(void)resetInliers;


@end


#endif