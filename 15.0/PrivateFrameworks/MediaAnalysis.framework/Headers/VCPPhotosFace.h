// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPHOTOSFACE_H
#define VCPPHOTOSFACE_H

@class NSString;
@protocol PFPhotosFaceRepresentation;

#import <Foundation/Foundation.h>

#import "VCPVNImageprintWrapper.h"

@interface VCPPhotosFace : NSObject <PFPhotosFaceRepresentation>



@property (copy, nonatomic) NSString *adjustmentVersion; // ivar: _adjustmentVersion
@property (nonatomic) unsigned short ageType; // ivar: _ageType
@property (nonatomic) NSUInteger algorithmVersion; // ivar: _algorithmVersion
@property (nonatomic) CGFloat blurScore; // ivar: _blurScore
@property (nonatomic) CGFloat bodyCenterX; // ivar: _bodyCenterX
@property (nonatomic) CGFloat bodyCenterY; // ivar: _bodyCenterY
@property (nonatomic) CGFloat bodyHeight; // ivar: _bodyHeight
@property (nonatomic) CGFloat bodyWidth; // ivar: _bodyWidth
@property (nonatomic) CGFloat centerX; // ivar: _centerX
@property (nonatomic) CGFloat centerY; // ivar: _centerY
@property (nonatomic) NSInteger clusterSequenceNumber; // ivar: _clusterSequenceNumber
@property (nonatomic) short detectionType; // ivar: _detectionType
@property (nonatomic) unsigned short ethnicityType; // ivar: _ethnicityType
@property (nonatomic) CGFloat exposureScore; // ivar: _exposureScore
@property (nonatomic) unsigned short expressionType; // ivar: _expressionType
@property (nonatomic) unsigned short eyesState; // ivar: _eyesState
@property (nonatomic) unsigned short facialHairType; // ivar: _facialHairType
@property (nonatomic) CGFloat gazeCenterX; // ivar: _gazeCenterX
@property (nonatomic) CGFloat gazeCenterY; // ivar: _gazeCenterY
@property (nonatomic) unsigned short gazeType; // ivar: _gazeType
@property (nonatomic) unsigned short glassesType; // ivar: _glassesType
@property (copy, nonatomic) NSString *groupingIdentifier; // ivar: _groupingIdentifier
@property (nonatomic) unsigned short hairColorType; // ivar: _hairColorType
@property (nonatomic) unsigned short hairType; // ivar: _hairType
@property (nonatomic) BOOL hasFaceMask; // ivar: _hasFaceMask
@property (nonatomic) BOOL hasSmile; // ivar: _hasSmile
@property (nonatomic) unsigned short headgearType; // ivar: _headgearType
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) VCPVNImageprintWrapper *imageprintWrapper; // ivar: _imageprintWrapper
@property (nonatomic) BOOL isInTrash; // ivar: _isInTrash
@property (nonatomic) BOOL isLeftEyeClosed; // ivar: _isLeftEyeClosed
@property (nonatomic) BOOL isRightEyeClosed; // ivar: _isRightEyeClosed
@property (nonatomic) BOOL isTooSmall; // ivar: _isTooSmall
@property (readonly, copy, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (nonatomic) BOOL manual; // ivar: _manual
@property (nonatomic) NSInteger nameSource; // ivar: _nameSource
@property (copy, nonatomic) NSString *personLocalIdentifier; // ivar: _personLocalIdentifier
@property (nonatomic) unsigned short poseType; // ivar: _poseType
@property (nonatomic) CGFloat poseYaw; // ivar: _poseYaw
@property (nonatomic) CGFloat quality; // ivar: _quality
@property (nonatomic) NSInteger qualityMeasure; // ivar: _qualityMeasure
@property (nonatomic) CGFloat roll; // ivar: _roll
@property (nonatomic) unsigned short sexType; // ivar: _sexType
@property (nonatomic) CGFloat size; // ivar: _size
@property (nonatomic) unsigned short skintoneType; // ivar: _skintoneType
@property (nonatomic) unsigned short smileType; // ivar: _smileType
@property (nonatomic) NSInteger sourceHeight; // ivar: _sourceHeight
@property (nonatomic) NSInteger sourceWidth; // ivar: _sourceWidth
@property (nonatomic) int trainingType; // ivar: _trainingType


+(id)faceWithLocalIdentifier:(id)arg0 ;
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
-(id)gistDescription;
-(id)initWithLocalIdentifier:(id)arg0 ;
-(id)photosFaceRepresentationLocalIdentifier;
-(struct CGRect )normalizedFaceRect;
-(void)replaceCoordinatesAndFeaturesFromDetectedFace:(id)arg0 ;


@end


#endif