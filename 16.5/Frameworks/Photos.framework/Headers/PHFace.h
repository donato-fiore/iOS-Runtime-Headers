// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHFACE_H
#define PHFACE_H

@class NSString;


#import "PHObject.h"

@interface PHFace : PHObject

@property (readonly, copy, nonatomic) id *adjustmentVersion; // ivar: _adjustmentVersion
@property (readonly, nonatomic) unsigned short ageType; // ivar: _ageType
@property (readonly, nonatomic) CGFloat blurScore; // ivar: _blurScore
@property (readonly, nonatomic) CGFloat bodyCenterX; // ivar: _bodyCenterX
@property (readonly, nonatomic) CGFloat bodyCenterY; // ivar: _bodyCenterY
@property (readonly, nonatomic) CGFloat bodyHeight; // ivar: _bodyHeight
@property (readonly, nonatomic) CGFloat bodyWidth; // ivar: _bodyWidth
@property (readonly, nonatomic) CGFloat centerX; // ivar: _centerX
@property (readonly, nonatomic) CGFloat centerY; // ivar: _centerY
@property (readonly, nonatomic) NSInteger clusterSequenceNumber; // ivar: _clusterSequenceNumber
@property (readonly, nonatomic, getter=isConfirmedFaceCropGenerationPending) BOOL confirmedFaceCropGenerationPending;
@property (readonly, nonatomic) short confirmedFaceCropGenerationState; // ivar: _confirmedFaceCropGenerationState
@property (readonly, nonatomic) short detectionType; // ivar: _detectionType
@property (readonly, nonatomic) unsigned short ethnicityType; // ivar: _ethnicityType
@property (readonly, nonatomic) unsigned short eyeMakeupType; // ivar: _eyeMakeupType
@property (readonly, nonatomic) unsigned short eyesState; // ivar: _eyesState
@property (nonatomic) NSInteger faceAlgorithmVersion; // ivar: _faceAlgorithmVersion
@property (readonly, nonatomic) unsigned short faceExpressionType; // ivar: _faceExpressionType
@property (readonly, nonatomic) unsigned short facialHairType; // ivar: _facialHairType
@property (readonly, nonatomic) CGFloat gazeCenterX; // ivar: _gazeCenterX
@property (readonly, nonatomic) CGFloat gazeCenterY; // ivar: _gazeCenterY
@property (readonly, nonatomic) unsigned short gazeType; // ivar: _gazeType
@property (readonly, nonatomic) unsigned short glassesType; // ivar: _glassesType
@property (readonly, nonatomic) unsigned short hairColorType; // ivar: _hairColorType
@property (readonly, nonatomic) unsigned short hairType; // ivar: _hairType
@property (readonly, nonatomic) BOOL hasFaceMask; // ivar: _hasFaceMask
@property (readonly, nonatomic) BOOL hasSmile; // ivar: _hasSmile
@property (readonly, nonatomic) unsigned short headgearType; // ivar: _headgearType
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic, getter=isInTrash) BOOL inTrash; // ivar: _inTrash
@property (readonly, nonatomic) BOOL isInVIPModel; // ivar: _isInVIPModel
@property (readonly, nonatomic, getter=isLeftEyeClosed) BOOL leftEyeClosed; // ivar: _leftEyeClosed
@property (readonly, nonatomic) unsigned short lipMakeupType; // ivar: _lipMakeupType
@property (readonly, nonatomic) BOOL manual; // ivar: _manual
@property (readonly, nonatomic) NSInteger nameSource; // ivar: _nameSource
@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) NSString *personUUID; // ivar: _personUUID
@property (readonly, nonatomic) unsigned short poseType; // ivar: _poseType
@property (nonatomic) CGFloat poseYaw; // ivar: _poseYaw
@property (readonly, nonatomic) CGFloat quality; // ivar: _quality
@property (readonly, nonatomic) NSInteger qualityMeasure; // ivar: _qualityMeasure
@property (readonly, nonatomic, getter=isRightEyeClosed) BOOL rightEyeClosed; // ivar: _rightEyeClosed
@property (readonly, nonatomic) CGFloat roll; // ivar: _roll
@property (readonly, nonatomic) unsigned short sexType; // ivar: _sexType
@property (readonly, nonatomic) CGFloat size; // ivar: _size
@property (readonly, nonatomic) unsigned short skintoneType; // ivar: _skintoneType
@property (readonly, nonatomic) unsigned short smileType; // ivar: _smileType
@property (readonly, nonatomic) NSInteger sourceHeight; // ivar: _sourceHeight
@property (readonly, nonatomic) NSInteger sourceWidth; // ivar: _sourceWidth
@property (readonly, nonatomic) int trainingType; // ivar: _trainingType


+(BOOL)managedObjectSupportsBodyDetection;
+(BOOL)managedObjectSupportsDetectionType;
+(BOOL)managedObjectSupportsFaceState;
+(Class)propertySetClassForPropertySet:(id)arg0 ;
+(NSUInteger)propertyFetchHintsForPropertySets:(id)arg0 ;
+(id)_composePropertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)analyticsPropertiesToFetch;
+(id)corePropertiesToFetch;
+(id)croppingPropertiesToFetch;
+(id)entityKeyMap;
+(id)fetchFacesForFaceCrop:(id)arg0 options:(id)arg1 ;
+(id)fetchFacesForPerson:(id)arg0 options:(id)arg1 ;
+(id)fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg0 options:(id)arg1 ;
+(id)fetchFacesInAsset:(id)arg0 options:(id)arg1 ;
+(id)fetchFacesInAssets:(id)arg0 options:(id)arg1 ;
+(id)fetchFacesInFaceGroup:(id)arg0 options:(id)arg1 ;
+(id)fetchFacesOnAssetWithFace:(id)arg0 options:(id)arg1 ;
+(id)fetchFacesWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchFacesWithOptions:(id)arg0 ;
+(id)fetchKeyFaceByPersonLocalIdentifierForPersons:(id)arg0 options:(id)arg1 ;
+(id)fetchKeyFaceForFaceGroup:(id)arg0 options:(id)arg1 ;
+(id)fetchKeyFaceForPerson:(id)arg0 options:(id)arg1 ;
+(id)fetchRejectedFacesForPerson:(id)arg0 options:(id)arg1 ;
+(id)fetchSingletonFacesWithOptions:(id)arg0 ;
+(id)fetchSuggestedFacesForPerson:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)genderAgePropertiesToFetch;
+(id)identifierCode;
+(id)managedEntityName;
+(id)personBuilderPropertiesToFetch;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)propertySetAccessorsByPropertySet;
+(id)propertySetsForPropertyFetchHints:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
-(Class)changeRequestClass;
-(id)_createPropertyObjectOfClass:(Class)arg0 ;
-(id)_createPropertyObjectOfClass:(Class)arg0 preFetchedProperties:(id)arg1 ;
-(id)faceClusteringProperties;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(void)fetchPropertySetsIfNeeded;


@end


#endif