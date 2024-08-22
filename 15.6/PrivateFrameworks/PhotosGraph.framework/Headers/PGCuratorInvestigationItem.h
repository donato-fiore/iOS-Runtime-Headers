// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCURATORINVESTIGATIONITEM_H
#define PGCURATORINVESTIGATIONITEM_H

@class NSNumber, NSArray, NSString, CLLocation, NSSet, VNSceneprint, NSDate, NSDateComponents;
@protocol CLSInvestigationItem, CLSCurationModel;

#import <Foundation/Foundation.h>


@interface PGCuratorInvestigationItem : NSObject <CLSInvestigationItem>

 {
    NSNumber *_clsViewCount;
    NSNumber *_clsPlayCount;
    NSNumber *_clsShareCount;
    NSNumber *_clsIsUtility;
    NSNumber *_clsIsBlurry;
    NSNumber *_clsIsScreenshotOrScreenRecording;
    NSNumber *_isFavorite;
    NSNumber *_isVideo;
    NSNumber *_clsContentScore;
    NSNumber *_clsIsInterestingVideo;
    NSNumber *_clsIsInterestingLivePhoto;
    NSNumber *_clsIsInterestingPanorama;
    NSNumber *_clsIsInterestingSDOF;
    NSNumber *_clsIsInterestingHDR;
    NSNumber *_clsIsInterestingReframe;
    NSNumber *_clsHasInterestingAudioClassification;
    NSNumber *_clsHasCustomPlaybackVariation;
    NSNumber *_clsSharpnessScore;
    NSNumber *_clsExposureScore;
    NSNumber *_clsAestheticScore;
    NSNumber *_clsIsAestheticallyPrettyGood;
    NSNumber *_clsFaceScore;
    NSNumber *_clsIsInhabited;
    NSNumber *_clsAvoidIfPossibleForKeyItem;
    NSNumber *_clsHasPoorResolution;
    NSNumber *_clsHasInterestingScenes;
    NSNumber *_clsLikabilityScore;
    NSNumber *_clsInteractionScore;
    NSNumber *_clsHighlightVisibilityScore;
    NSNumber *_clsAutoplaySuggestionScore;
    NSNumber *_isShinyGem;
    NSNumber *_isRegularGem;
    NSNumber *_clsDuration;
    NSNumber *_clsIsNonMemorable;
    NSNumber *_clsIsLoopOrBounce;
    NSNumber *_clsIsLongExposure;
    NSNumber *_clsGpsHorizontalAccuracy;
    NSNumber *_clsSquareCropScore;
}


@property (readonly, nonatomic) CGFloat clsAestheticScore;
@property (readonly, nonatomic) CGFloat clsAutoplaySuggestionScore;
@property (readonly, nonatomic) NSArray *clsConsolidatedPersonLocalIdentifiers; // ivar: _clsConsolidatedPersonLocalIdentifiers
@property (readonly, nonatomic) CGFloat clsContentScore;
@property (readonly, nonatomic) CGFloat clsDuration;
@property (readonly, nonatomic) CGFloat clsExposureScore;
@property (readonly, nonatomic) CGFloat clsFaceScore;
@property (readonly, nonatomic) BOOL clsHasCustomPlaybackVariation;
@property (readonly, nonatomic) BOOL clsHasInterestingAudioClassification;
@property (readonly) BOOL clsHasInterestingScenes;
@property (readonly) BOOL clsHasPoorResolution;
@property (readonly, nonatomic) CGFloat clsHighlightVisibilityScore;
@property (readonly, nonatomic) NSString *clsIdentifier; // ivar: _clsIdentifier
@property (readonly, nonatomic) BOOL clsIsAestheticallyPrettyGood;
@property (readonly, nonatomic) BOOL clsIsBlurry;
@property (readonly) BOOL clsIsInhabited;
@property (readonly, nonatomic) BOOL clsIsInterestingHDR;
@property (readonly, nonatomic) BOOL clsIsInterestingLivePhoto;
@property (readonly, nonatomic) BOOL clsIsInterestingPanorama;
@property (readonly, nonatomic) BOOL clsIsInterestingReframe;
@property (readonly, nonatomic) BOOL clsIsInterestingSDOF;
@property (readonly, nonatomic) BOOL clsIsInterestingVideo;
@property (readonly, nonatomic) BOOL clsIsLongExposure;
@property (readonly, nonatomic) BOOL clsIsLoopOrBounce;
@property (readonly, nonatomic) BOOL clsIsNonMemorable;
@property (readonly, nonatomic) BOOL clsIsScreenshotOrScreenRecording;
@property (readonly, nonatomic) BOOL clsIsUtility;
@property (readonly, nonatomic) CLLocation *clsLocation; // ivar: _clsLocation
@property (readonly, nonatomic) NSUInteger clsPeopleCount;
@property (readonly, nonatomic) NSArray *clsPersonAndPetLocalIdentifiers; // ivar: _clsPersonAndPetLocalIdentifiers
@property (readonly, nonatomic) NSArray *clsPersonLocalIdentifiers; // ivar: _clsPersonLocalIdentifiers
@property (readonly, nonatomic) NSArray *clsPetLocalIdentifiers; // ivar: _clsPetLocalIdentifiers
@property (readonly, nonatomic) NSInteger clsPlayCount;
@property (readonly, copy, nonatomic) NSSet *clsSceneClassifications; // ivar: _clsSceneClassifications
@property (readonly, nonatomic) VNSceneprint *clsSceneprint; // ivar: _clsSceneprint
@property (readonly, nonatomic) NSInteger clsShareCount;
@property (readonly, nonatomic) CGFloat clsSharpnessScore;
@property (readonly, nonatomic) CGFloat clsSquareCropScore;
@property (readonly, nonatomic) NSArray *clsUnprefetchedPersonLocalIdentifiers; // ivar: _clsUnprefetchedPersonLocalIdentifiers
@property (readonly, nonatomic) NSInteger clsViewCount;
@property (readonly, nonatomic) NSDate *cls_localDate; // ivar: _cls_localDate
@property (readonly, nonatomic) NSDateComponents *cls_localDateComponents;
@property (readonly, nonatomic) NSDate *cls_universalDate; // ivar: _cls_universalDate
@property (readonly) NSObject<CLSCurationModel> *curationModel; // ivar: _curationModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *faceInfos; // ivar: _faceInfos
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) CLLocationCoordinate2D pl_coordinate;
@property (readonly, nonatomic) NSDate *pl_date;
@property (readonly, nonatomic) CGFloat pl_gpsHorizontalAccuracy;
@property (readonly, nonatomic) NSString *pl_uuid;
@property (readonly) Class superclass;


+(id)itemWithUUID:(id)arg0 itemInfo:(id)arg1 curationModel:(id)arg2 ;
-(BOOL)clsAvoidIfPossibleAsKeyItemForMemories:(BOOL)arg0 allowGuestAsset:(BOOL)arg1 ;
-(BOOL)isRegularGem;
-(BOOL)isShinyGem;
-(CGFloat)clsInteractionScore;
-(CGFloat)clsLikabilityScore;
-(CGFloat)scoreInContext:(id)arg0 ;
-(id)date;
-(id)init;
-(id)initWithUUID:(id)arg0 itemInfo:(id)arg1 curationModel:(id)arg2 ;


@end


#endif