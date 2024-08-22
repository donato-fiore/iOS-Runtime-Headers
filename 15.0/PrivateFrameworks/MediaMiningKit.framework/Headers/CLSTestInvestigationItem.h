// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSTESTINVESTIGATIONITEM_H
#define CLSTESTINVESTIGATIONITEM_H

@class NSArray, NSString, CLLocation, NSSet, VNSceneprint, NSDate, NSDateComponents;
@protocol CLSInvestigationItem;

#import <Foundation/Foundation.h>


@interface CLSTestInvestigationItem : NSObject <CLSInvestigationItem>



@property (readonly, nonatomic) CGFloat clsAestheticScore; // ivar: _clsAestheticScore
@property (readonly, nonatomic) CGFloat clsAutoplaySuggestionScore; // ivar: _clsAutoplaySuggestionScore
@property (nonatomic) BOOL clsAvoidIfPossibleForKeyItem; // ivar: _clsAvoidIfPossibleForKeyItem
@property (readonly, nonatomic) NSArray *clsConsolidatedPersonLocalIdentifiers; // ivar: _clsConsolidatedPersonLocalIdentifiers
@property (nonatomic) CGFloat clsContentScore; // ivar: _clsContentScore
@property (readonly, nonatomic) CGFloat clsDuration; // ivar: _clsDuration
@property (readonly, nonatomic) CGFloat clsExposureScore; // ivar: _clsExposureScore
@property (readonly, nonatomic) CGFloat clsFaceScore; // ivar: _clsFaceScore
@property (readonly, nonatomic) BOOL clsHasCustomPlaybackVariation; // ivar: _clsHasCustomPlaybackVariation
@property (readonly, nonatomic) BOOL clsHasInterestingAudioClassification; // ivar: _clsHasInterestingAudioClassification
@property (readonly) BOOL clsHasInterestingScenes; // ivar: _clsHasInterestingScenes
@property (readonly) BOOL clsHasPoorResolution; // ivar: _clsHasPoorResolution
@property (readonly, nonatomic) CGFloat clsHighlightVisibilityScore; // ivar: _clsHighlightVisibilityScore
@property (readonly, nonatomic) NSString *clsIdentifier; // ivar: _clsIdentifier
@property (readonly, nonatomic) BOOL clsIsAestheticallyPrettyGood; // ivar: _clsIsAestheticallyPrettyGood
@property (readonly, nonatomic) BOOL clsIsBlurry; // ivar: _clsIsBlurry
@property (readonly) BOOL clsIsInhabited; // ivar: _clsIsInhabited
@property (readonly, nonatomic) BOOL clsIsInterestingHDR; // ivar: _clsIsAnInterestingHDR
@property (readonly, nonatomic) BOOL clsIsInterestingLivePhoto; // ivar: _clsIsAnInterestingPhoto
@property (readonly, nonatomic) BOOL clsIsInterestingPanorama; // ivar: _clsIsAnInterestingPanorama
@property (readonly, nonatomic) BOOL clsIsInterestingReframe; // ivar: _clsIsInterestingReframe
@property (readonly, nonatomic) BOOL clsIsInterestingSDOF; // ivar: _clsIsAnInterestingSDOF
@property (readonly, nonatomic) BOOL clsIsInterestingVideo; // ivar: _clsIsAnInterestingVideo
@property (readonly, nonatomic) BOOL clsIsLongExposure; // ivar: _clsIsLongExposure
@property (readonly, nonatomic) BOOL clsIsLoopOrBounce; // ivar: _clsIsLoopOrBounce
@property (readonly, nonatomic) BOOL clsIsNonMemorable; // ivar: _clsIsNonMemorable
@property (readonly, nonatomic) BOOL clsIsScreenshotOrScreenRecording; // ivar: _clsIsScreenshotOrScreenRecording
@property (readonly, nonatomic) BOOL clsIsUtility; // ivar: _clsIsUtility
@property (retain, nonatomic) CLLocation *clsLocation; // ivar: _clsLocation
@property (readonly, nonatomic) NSUInteger clsPeopleCount;
@property (readonly, nonatomic) NSArray *clsPersonAndPetLocalIdentifiers; // ivar: _clsPersonAndPetLocalIdentifiers
@property (retain, nonatomic) NSArray *clsPersonLocalIdentifiers; // ivar: _clsPersonLocalIdentifiers
@property (readonly, nonatomic) NSArray *clsPetLocalIdentifiers; // ivar: _clsPetLocalIdentifiers
@property (readonly, nonatomic) NSInteger clsPlayCount; // ivar: _clsPlayCount
@property (copy, nonatomic) NSSet *clsSceneClassifications; // ivar: _clsSceneClassifications
@property (readonly, nonatomic) VNSceneprint *clsSceneprint; // ivar: _clsSceneprint
@property (readonly, nonatomic) NSInteger clsShareCount; // ivar: _clsShareCount
@property (readonly, nonatomic) CGFloat clsSharpnessScore; // ivar: _clsSharpnessScore
@property (readonly, nonatomic) CGFloat clsSquareCropScore; // ivar: _clsSquareCropScore
@property (readonly, nonatomic) NSArray *clsUnprefetchedPersonLocalIdentifiers; // ivar: _clsUnprefetchedPersonLocalIdentifiers
@property (readonly, nonatomic) NSInteger clsViewCount; // ivar: _clsViewCount
@property (readonly, nonatomic) NSDate *cls_localDate;
@property (readonly, nonatomic) NSDateComponents *cls_localDateComponents;
@property (retain, nonatomic) NSDate *cls_universalDate; // ivar: _cls_universalDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (readonly, nonatomic) BOOL isVideo; // ivar: _isVideo
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) CLLocationCoordinate2D pl_coordinate;
@property (readonly, nonatomic) NSDate *pl_date;
@property (readonly, nonatomic) CGFloat pl_gpsHorizontalAccuracy;
@property (readonly, nonatomic) NSString *pl_uuid;
@property (readonly) Class superclass;


+(id)itemWithPeopleNames:(id)arg0 universalDate:(id)arg1 coordinate:(struct CLLocationCoordinate2D )arg2 ;
+(id)itemWithUniversalDate:(id)arg0 sceneClassifications:(id)arg1 ;
-(BOOL)clsAvoidIfPossibleAsKeyItemForMemories:(BOOL)arg0 allowGuestAsset:(BOOL)arg1 ;
-(CGFloat)scoreInContext:(id)arg0 ;
-(id)init;


@end


#endif