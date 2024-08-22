// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVFACE_H
#define PVFACE_H

@class NSString;
@protocol PFPhotosFaceRepresentation;


#import "PVObject.h"
#import "PVFaceprint.h"

@interface PVFace : PVObject <PFPhotosFaceRepresentation>



@property (copy, nonatomic) NSString *adjustmentVersion; // ivar: _adjustmentVersion
@property (nonatomic) NSString *ageType; // ivar: _ageType
@property (nonatomic) NSString *baldType; // ivar: _baldType
@property (nonatomic) CGFloat blurScore; // ivar: _blurScore
@property (nonatomic) CGFloat centerX; // ivar: _centerX
@property (nonatomic) CGFloat centerY; // ivar: _centerY
@property (nonatomic) NSInteger clusterSequenceNumber; // ivar: _clusterSequenceNumber
@property (nonatomic) CGFloat exposureScore; // ivar: _exposureScore
@property (nonatomic) NSString *eyeMakeupType; // ivar: _eyeMakeupType
@property (nonatomic) NSString *eyesState; // ivar: _eyesState
@property (nonatomic) unsigned int faceAlgorithmVersion; // ivar: _faceAlgorithmVersion
@property (retain, nonatomic) PVFaceprint *faceprint; // ivar: _faceprint
@property (nonatomic) NSString *facialHairType; // ivar: _facialHairType
@property (nonatomic) NSString *genderType;
@property (nonatomic) NSString *glassesType; // ivar: _glassesType
@property (copy, nonatomic) NSString *groupingIdentifier; // ivar: _groupingIdentifier
@property (nonatomic) NSString *hairColorType; // ivar: _hairColorType
@property (nonatomic) BOOL hasSmile; // ivar: _hasSmile
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (nonatomic) BOOL isInTrash; // ivar: _isInTrash
@property (nonatomic) BOOL isLeftEyeClosed; // ivar: _isLeftEyeClosed
@property (nonatomic) BOOL isRightEyeClosed; // ivar: _isRightEyeClosed
@property (nonatomic) BOOL isTooSmall; // ivar: _isTooSmall
@property (nonatomic) CGFloat leftEyeX; // ivar: _leftEyeX
@property (nonatomic) CGFloat leftEyeY; // ivar: _leftEyeY
@property (nonatomic) NSString *lipMakeupType; // ivar: _lipMakeupType
@property (nonatomic) BOOL manual; // ivar: _manual
@property (nonatomic) CGFloat mouthX; // ivar: _mouthX
@property (nonatomic) CGFloat mouthY; // ivar: _mouthY
@property (nonatomic) NSInteger nameSource; // ivar: _nameSource
@property (copy, nonatomic) NSString *personLocalIdentifier; // ivar: _personLocalIdentifier
@property (nonatomic) CGFloat poseYaw; // ivar: _poseYaw
@property (nonatomic) CGFloat quality; // ivar: _quality
@property (nonatomic) NSInteger qualityMeasure; // ivar: _qualityMeasure
@property (nonatomic) CGFloat rightEyeX; // ivar: _rightEyeX
@property (nonatomic) CGFloat rightEyeY; // ivar: _rightEyeY
@property (nonatomic) CGFloat roll; // ivar: _roll
@property (nonatomic) NSString *sexType; // ivar: _sexType
@property (nonatomic) CGFloat size; // ivar: _size
@property (nonatomic) NSString *smileType; // ivar: _smileType
@property (nonatomic) NSInteger sourceHeight; // ivar: _sourceHeight
@property (nonatomic) NSInteger sourceWidth; // ivar: _sourceWidth
@property (nonatomic) int trainingType; // ivar: _trainingType


+(id)faceFromVNFaceObservation:(id)arg0 fromImage:(id)arg1 additionalVisionRequests:(id)arg2 faceAlgorithmUmbrellaVersion:(unsigned int)arg3 error:(*id)arg4 ;
+(id)faceFromVNFaceObservation:(id)arg0 fromImageWithPixelWidth:(NSUInteger)arg1 pixelHeight:(NSUInteger)arg2 additionalVisionRequests:(id)arg3 faceAlgorithmUmbrellaVersion:(unsigned int)arg4 error:(*id)arg5 ;
+(id)faceWithFace:(id)arg0 copyPropertiesOption:(NSInteger)arg1 ;
-(BOOL)photosFaceRepresentationHasSmile;
-(BOOL)photosFaceRepresentationIsLeftEyeClosed;
-(BOOL)photosFaceRepresentationIsRightEyeClosed;
-(BOOL)setCenterAndSizeFromNormalizedFaceRect:(struct CGRect )arg0 ;
-(CGFloat)photosFaceRepresentationBlurScore;
-(CGFloat)photosFaceRepresentationCenterX;
-(CGFloat)photosFaceRepresentationCenterY;
-(CGFloat)photosFaceRepresentationQuality;
-(CGFloat)photosFaceRepresentationRoll;
-(CGFloat)photosFaceRepresentationSize;
-(NSInteger)photosFaceRepresentationClusterSequenceNumber;
-(NSInteger)photosFaceRepresentationQualityMeasure;
-(NSInteger)photosFaceRepresentationSourceHeight;
-(NSInteger)photosFaceRepresentationSourceWidth;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)photosFaceRepresentationLocalIdentifier;
-(struct CGRect )absoluteFaceRect;
-(struct CGRect )absoluteFaceRectForImageSize:(struct CGSize )arg0 ;
-(struct CGRect )normalizedFaceRect;
-(void)_copyPropertiesFrom:(id)arg0 copyPropertiesOption:(NSInteger)arg1 ;
-(void)setCoordinatesAndFeaturesFromFace:(id)arg0 ;


@end


#endif