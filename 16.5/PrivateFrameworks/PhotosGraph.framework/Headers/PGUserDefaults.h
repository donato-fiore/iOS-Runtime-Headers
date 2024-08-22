// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGUSERDEFAULTS_H
#define PGUSERDEFAULTS_H


#import <Foundation/Foundation.h>


@interface PGUserDefaults : NSObject



+(BOOL)boundTextFeaturesPerEvent;
+(BOOL)isAlwaysShowingHolidayCalendarEvents;
+(BOOL)isAutonamingDisabled;
+(BOOL)isAutonamingFilteredOutInferencesIngestAllowed;
+(BOOL)isAutonamingSignalPropertiesIngestAllowed;
+(BOOL)isBehavioralCurationEnabled;
+(BOOL)isMemoriesLivingOnFeedbackEnabled;
+(BOOL)isMemoriesNotificationDisabled;
+(BOOL)isMemoryElectionDisabled;
+(BOOL)isPhotosChallengeEnabled;
+(BOOL)isPublicEventsEnabled;
+(BOOL)isRelationshipFilteredOutInferencesIngestAllowed;
+(BOOL)isRelationshipInferenceDisabled;
+(BOOL)isRelationshipSignalPropertiesIngestAllowed;
+(BOOL)isShowingHolidayCalendarEvents;
+(BOOL)musicCurationAllowAllForExport;
+(BOOL)musicCurationAllowExplicitMusicContent;
+(BOOL)musicCurationShouldUseOldStylePreviewURL;
+(BOOL)onThisDayHighlightKeyAssetRotationIsEnabled;
+(BOOL)peopleSuggestionLearningIsEnabled;
+(BOOL)shouldDisableContentClassificationTask;
+(BOOL)suppressGraphLiveUpdate;
+(BOOL)useExtendedCurationAssetCountForLocationTitles;
+(CGFloat)minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
+(NSUInteger)maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
+(NSUInteger)maximumNumberOfTextFeaturesPerEvent;
+(NSUInteger)maximumNumberOfVisibleItems;
+(NSUInteger)maximumNumberOfVisibleRegularItems;
+(NSUInteger)minimumNumberOfCuratedAssetsForInterestingMoments;
+(NSUInteger)minimumNumberOfVisibleItems;
+(id)extendedCurationOptions;
+(void)_registerDefaults;
+(void)initialize;
+(void)setExtendedCurationOptions:(id)arg0 ;


@end


#endif