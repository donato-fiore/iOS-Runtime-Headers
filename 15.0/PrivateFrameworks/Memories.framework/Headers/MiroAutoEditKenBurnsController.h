// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROAUTOEDITKENBURNSCONTROLLER_H
#define MIROAUTOEDITKENBURNSCONTROLLER_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "KenBurnsClip.h"
#import "Project.h"

@interface MiroAutoEditKenBurnsController : NSObject

@property (retain, nonatomic) NSArray *allPersonsAndPetsDetectedFaces; // ivar: _allPersonsAndPetsDetectedFaces
@property (nonatomic) BOOL disableCroppingWithoutPet; // ivar: _disableCroppingWithoutPet
@property (nonatomic) CGRect endRect; // ivar: _endRect
@property (retain, nonatomic) NSArray *featuredPersonsDetectedFaces; // ivar: _featuredPersonsDetectedFaces
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges; // ivar: _featuredPersonsInMemoryAsFaceRanges
@property (nonatomic) CGRect finishAreaOfInterest; // ivar: _finishAreaOfInterest
@property (nonatomic) BOOL hasAreasOfInterest; // ivar: _hasAreasOfInterest
@property (readonly, nonatomic) CGFloat horizonNormalizedFromTop;
@property (nonatomic) BOOL interestingRegionsEstablished; // ivar: _interestingRegionsEstablished
@property (retain, nonatomic) KenBurnsClip *kbClip; // ivar: _kbClip
@property (nonatomic) BOOL kbReassignment; // ivar: _kbReassignment
@property (nonatomic) NSUInteger kbStyle; // ivar: _kbStyle
@property (nonatomic) CGFloat maximumZoomValue; // ivar: _maximumZoomValue
@property (nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset; // ivar: _memoryFeaturesPersonInAsset
@property (nonatomic) NSUInteger memorySubcategory; // ivar: _memorySubcategory
@property (nonatomic) NSUInteger panStyle; // ivar: _panStyle
@property (retain, nonatomic) Project *project; // ivar: _project
@property (nonatomic) CGFloat projectAspect; // ivar: _projectAspect
@property (nonatomic) CGRect startRect; // ivar: _startRect
@property (nonatomic) CGFloat targetAspect; // ivar: _targetAspect
@property (nonatomic) CGRect titleSafeInterestingRegions; // ivar: _titleSafeInterestingRegions
@property (nonatomic) CGRect unionOfAllFaceRegions; // ivar: _unionOfAllFaceRegions
@property (nonatomic) CGRect unionOfAllInterestingRegions; // ivar: _unionOfAllInterestingRegions
@property (nonatomic) CGRect unionOfAllSaliencyRegions; // ivar: _unionOfAllSaliencyRegions


+(BOOL)shouldHeroSubjectForCategory:(NSUInteger)arg0 subcategory:(NSUInteger)arg1 ;
+(BOOL)shouldTryToFitAllFaces:(NSUInteger)arg0 subcategory:(NSUInteger)arg1 ;
+(struct CGRect )rectForAsset:(id)arg0 targetAspect:(CGFloat)arg1 style:(NSUInteger)arg2 ;
+(struct CGRect )titleRectForAsset:(id)arg0 targetAspect:(CGFloat)arg1 memoryTypeDisablesCropping:(BOOL)arg2 memoryCategory:(NSUInteger)arg3 memorySubcategory:(NSUInteger)arg4 memoryFeaturesPersonInAsset:(id)arg5 featuredPersonsInMemoryAsFaceRanges:(id)arg6 ;
+(struct CGRect )unionOfAllInterestingRegionsRectForAsset:(id)arg0 ;
+(void)prepareKBClip:(id)arg0 project:(id)arg1 ;
-(BOOL)assetHasFeaturedPeople;
-(BOOL)assetIsFalsePositiveCandidateMADPets;
-(BOOL)backgroundTreatmentRequiredForStartEndRect;
-(BOOL)canCropRectSafelyFillFrame:(struct CGRect )arg0 ;
-(BOOL)canSupportKB;
-(BOOL)clipEligibleForNUpFraming:(id)arg0 ;
-(BOOL)clipRequiresOneUp:(id)arg0 ;
-(BOOL)isAttemptingToFrameAllFacesAcceptable:(struct CGRect )arg0 minFaceAreaIntersectingAmount:(CGFloat)arg1 ;
-(BOOL)isAttemptingToFrameAllFeaturedFacesAcceptable:(struct CGRect )arg0 minFaceAreaIntersectingAmount:(CGFloat)arg1 ;
-(BOOL)isPartialFaceFramingAcceptable:(id)arg0 unionOfAllFaceRegionsRect:(struct CGRect )arg1 minFaceAreaIntersectingAmount:(CGFloat)arg2 ;
-(BOOL)isTitle;
-(BOOL)shouldFeatureSpecificPerson;
-(BOOL)shouldFeatureSpecificPersonForClip:(id)arg0 ;
-(BOOL)shouldTryToFitAllFaces;
-(CGFloat)_scaleToPanOffsetFromScale:(CGFloat)arg0 ;
-(CGFloat)clampZoomDifference:(CGFloat)arg0 kenBurnsPace:(NSUInteger)arg1 ;
-(CGFloat)rectIntersectionAmount:(struct CGRect )arg0 rect2:(struct CGRect )arg1 ;
-(struct CGRect )_panFrameForStart:(BOOL)arg0 ;
-(struct CGRect )centerAroundAllFacesIncluded:(id)arg0 framingRect:(struct CGRect )arg1 minFaceAreaIntersectingAmount:(CGFloat)arg2 ;
-(struct CGRect )extendAllTheThings:(struct CGRect )arg0 ;
-(struct CGRect )extendAllTheThings:(struct CGRect )arg0 alignment:(NSInteger)arg1 ;
-(struct CGRect )extendAsMuchAsPossibleWithoutIncludingOtherFaces:(id)arg0 rect:(struct CGRect )arg1 ;
-(struct CGRect )forceFeaturedPersonZoomCrop;
-(struct CGRect )forceTitleZoomCrop;
-(struct CGRect )interestingRegionsAdjusted;
-(struct CGRect )maxRectICanExtendTo:(id)arg0 rect:(struct CGRect )arg1 ;
-(struct CGRect )noInformationCrop;
-(struct CGRect )rectInCorrectAspectRatioInsideRect:(struct CGRect )arg0 rectToInclude:(struct CGRect )arg1 targetAspectRatio:(float)arg2 ;
-(struct CGRect )roundValuesInRect:(struct CGRect )arg0 ;
-(struct CGRect )zoomToPeopleInterestingRegion:(struct CGRect )arg0 ;
-(void)_adjustZoomSpeedOfKenBurnsClip;
-(void)_customizePanOnlyKenBurnsClip;
-(void)_customizePortraitKB:(id)arg0 normalizedVerticalCenter:(CGFloat)arg1 ;
-(void)applyKenBurnsForClip:(id)arg0 kenBurnsStyle:(NSUInteger)arg1 panStyle:(NSUInteger)arg2 kenBurnsPace:(NSUInteger)arg3 maxiumumZoomValue:(CGFloat)arg4 ;
-(void)assignStartAndEndRect;
-(void)establishInterestingRegions;
-(void)finishConfiguringKBInfo;
-(void)prepareInterestingRegions;
-(void)prepareInterestingRegionsUsingMLFraming;


@end


#endif