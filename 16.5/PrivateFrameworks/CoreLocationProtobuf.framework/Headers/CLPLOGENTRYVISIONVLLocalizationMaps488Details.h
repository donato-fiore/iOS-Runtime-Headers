// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPLOGENTRYVISIONVLLOCALIZATIONMAPS488DETAILS_H
#define CLPLOGENTRYVISIONVLLOCALIZATIONMAPS488DETAILS_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface CLPLOGENTRYVISIONVLLocalizationMaps488Details : PBCodable <NSCopying>

 {
    ? _inlierIndices;
    ? _perFrameCalibrationMatrices;
    ? _perFrameDistortions;
    ? _perFrameVioPoses;
    ? _perFrameVioStatusCodes;
    ? _points2ds;
    ? _points3ds;
    ? _resultPoseRotations;
    ? _resultPoseTranslations;
    ? _slamOrigins;
    ? _slamTrackImageIndices;
    ? _slamTrackObservations;
    ? _slamTracks;
    ? _slamTracks2ds;
    ? _has;
}


@property (nonatomic) NSUInteger descriptorDimension; // ivar: _descriptorDimension
@property (nonatomic) BOOL hasDescriptorDimension;
@property (nonatomic) BOOL hasNumFrames;
@property (nonatomic) BOOL hasNumInliers;
@property (nonatomic) BOOL hasNumSlamTracks;
@property (readonly, nonatomic) BOOL hasSlamTrackDescriptors;
@property (readonly, nonatomic) *int inlierIndices;
@property (readonly, nonatomic) NSUInteger inlierIndicesCount;
@property (nonatomic) NSUInteger numFrames; // ivar: _numFrames
@property (nonatomic) NSUInteger numInliers; // ivar: _numInliers
@property (nonatomic) NSUInteger numSlamTracks; // ivar: _numSlamTracks
@property (readonly, nonatomic) *float perFrameCalibrationMatrices;
@property (readonly, nonatomic) NSUInteger perFrameCalibrationMatricesCount;
@property (readonly, nonatomic) *float perFrameDistortions;
@property (readonly, nonatomic) NSUInteger perFrameDistortionsCount;
@property (readonly, nonatomic) *float perFrameVioPoses;
@property (readonly, nonatomic) NSUInteger perFrameVioPosesCount;
@property (readonly, nonatomic) *int perFrameVioStatusCodes;
@property (readonly, nonatomic) NSUInteger perFrameVioStatusCodesCount;
@property (readonly, nonatomic) *float points2ds;
@property (readonly, nonatomic) NSUInteger points2dsCount;
@property (readonly, nonatomic) *CGFloat points3ds;
@property (readonly, nonatomic) NSUInteger points3dsCount;
@property (readonly, nonatomic) *CGFloat resultPoseRotations;
@property (readonly, nonatomic) NSUInteger resultPoseRotationsCount;
@property (readonly, nonatomic) *CGFloat resultPoseTranslations;
@property (readonly, nonatomic) NSUInteger resultPoseTranslationsCount;
@property (readonly, nonatomic) *CGFloat slamOrigins;
@property (readonly, nonatomic) NSUInteger slamOriginsCount;
@property (retain, nonatomic) NSData *slamTrackDescriptors; // ivar: _slamTrackDescriptors
@property (readonly, nonatomic) *int slamTrackImageIndices;
@property (readonly, nonatomic) NSUInteger slamTrackImageIndicesCount;
@property (readonly, nonatomic) *int slamTrackObservations;
@property (readonly, nonatomic) NSUInteger slamTrackObservationsCount;
@property (readonly, nonatomic) *float slamTracks;
@property (readonly, nonatomic) *float slamTracks2ds;
@property (readonly, nonatomic) NSUInteger slamTracks2dsCount;
@property (readonly, nonatomic) NSUInteger slamTracksCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)points3dAtIndex:(NSUInteger)arg0 ;
-(CGFloat)resultPoseRotationAtIndex:(NSUInteger)arg0 ;
-(CGFloat)resultPoseTranslationAtIndex:(NSUInteger)arg0 ;
-(CGFloat)slamOriginAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(float)perFrameCalibrationMatricesAtIndex:(NSUInteger)arg0 ;
-(float)perFrameDistortionAtIndex:(NSUInteger)arg0 ;
-(float)perFrameVioPosesAtIndex:(NSUInteger)arg0 ;
-(float)points2dAtIndex:(NSUInteger)arg0 ;
-(float)slamTracks2dAtIndex:(NSUInteger)arg0 ;
-(float)slamTracksAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)inlierIndicesAtIndex:(NSUInteger)arg0 ;
-(int)perFrameVioStatusCodesAtIndex:(NSUInteger)arg0 ;
-(int)slamTrackImageIndicesAtIndex:(NSUInteger)arg0 ;
-(int)slamTrackObservationsAtIndex:(NSUInteger)arg0 ;
-(void)addInlierIndices:(int)arg0 ;
-(void)addPerFrameCalibrationMatrices:(float)arg0 ;
-(void)addPerFrameDistortion:(float)arg0 ;
-(void)addPerFrameVioPoses:(float)arg0 ;
-(void)addPerFrameVioStatusCodes:(int)arg0 ;
-(void)addPoints2d:(float)arg0 ;
-(void)addPoints3d:(CGFloat)arg0 ;
-(void)addResultPoseRotation:(CGFloat)arg0 ;
-(void)addResultPoseTranslation:(CGFloat)arg0 ;
-(void)addSlamOrigin:(CGFloat)arg0 ;
-(void)addSlamTrackImageIndices:(int)arg0 ;
-(void)addSlamTrackObservations:(int)arg0 ;
-(void)addSlamTracks2d:(float)arg0 ;
-(void)addSlamTracks:(float)arg0 ;
-(void)clearInlierIndices;
-(void)clearPerFrameCalibrationMatrices;
-(void)clearPerFrameDistortions;
-(void)clearPerFrameVioPoses;
-(void)clearPerFrameVioStatusCodes;
-(void)clearPoints2ds;
-(void)clearPoints3ds;
-(void)clearResultPoseRotations;
-(void)clearResultPoseTranslations;
-(void)clearSlamOrigins;
-(void)clearSlamTrackImageIndices;
-(void)clearSlamTrackObservations;
-(void)clearSlamTracks;
-(void)clearSlamTracks2ds;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif