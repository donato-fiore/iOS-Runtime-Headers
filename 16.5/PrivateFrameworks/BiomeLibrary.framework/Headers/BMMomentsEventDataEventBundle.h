// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMMOMENTSEVENTDATAEVENTBUNDLE_H
#define BMMOMENTSEVENTDATAEVENTBUNDLE_H

@class BMEventBase, NSString, NSDate, NSArray;
@protocol BMStoreData;


#import "BMMomentsEventDataAction.h"

@interface BMMomentsEventDataEventBundle : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_bundleStartDate;
    CGFloat _raw_bundleStartDate;
    BOOL _hasRaw_bundleEndDate;
    CGFloat _raw_bundleEndDate;
    BOOL _hasRaw_bundleCreationDate;
    CGFloat _raw_bundleCreationDate;
    BOOL _hasRaw_bundleExpirationDate;
    CGFloat _raw_bundleExpirationDate;
    BOOL _hasRaw_suggestionTimestamp;
    CGFloat _raw_suggestionTimestamp;
    BOOL _hasRaw_appEntryEventTimestamp;
    CGFloat _raw_appEntryEventTimestamp;
    BOOL _hasRaw_appEntryEventStartTime;
    CGFloat _raw_appEntryEventStartTime;
    BOOL _hasRaw_appEntryEventEndTime;
    CGFloat _raw_appEntryEventEndTime;
    BOOL _hasRaw_clientActivityEventTimestamp;
    CGFloat _raw_clientActivityEventTimestamp;
}


@property (readonly, nonatomic) int appEntryEventAddedCharacters; // ivar: _appEntryEventAddedCharacters
@property (readonly, nonatomic) NSString *appEntryEventClientIdentifier; // ivar: _appEntryEventClientIdentifier
@property (readonly, nonatomic) NSDate *appEntryEventEndTime;
@property (readonly, nonatomic) NSDate *appEntryEventStartTime;
@property (readonly, nonatomic) NSDate *appEntryEventTimestamp;
@property (readonly, nonatomic) int appEntryEventTotalCharacters; // ivar: _appEntryEventTotalCharacters
@property (readonly, nonatomic) int appEntryEventType; // ivar: _appEntryEventType
@property (readonly, nonatomic) NSArray *backgroundActions; // ivar: _backgroundActions
@property (readonly, nonatomic) int bundlEngagement; // ivar: _bundlEngagement
@property (readonly, nonatomic) BMMomentsEventDataAction *bundleActionType; // ivar: _bundleActionType
@property (readonly, nonatomic) int bundleBaseEventCateory; // ivar: _bundleBaseEventCateory
@property (readonly, nonatomic) NSDate *bundleCreationDate;
@property (readonly, nonatomic) NSDate *bundleEndDate;
@property (readonly, nonatomic) NSArray *bundleEventIDs; // ivar: _bundleEventIDs
@property (readonly, nonatomic) NSDate *bundleExpirationDate;
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) int bundleIncludesAnomalousEvent; // ivar: _bundleIncludesAnomalousEvent
@property (readonly, nonatomic) int bundleInterfaceType; // ivar: _bundleInterfaceType
@property (readonly, nonatomic) BOOL bundleIsFamilyIncluded; // ivar: _bundleIsFamilyIncluded
@property (readonly, nonatomic) int bundlePCount; // ivar: _bundlePCount
@property (readonly, nonatomic) int bundlePlaceType; // ivar: _bundlePlaceType
@property (readonly, nonatomic) int bundlePlaceUserType; // ivar: _bundlePlaceUserType
@property (readonly, nonatomic) NSString *bundlePromptLanguageFormat; // ivar: _bundlePromptLanguageFormat
@property (readonly, nonatomic) BOOL bundlePromptParametersAvailability; // ivar: _bundlePromptParametersAvailability
@property (readonly, nonatomic) NSString *bundlePromptToneID; // ivar: _bundlePromptToneID
@property (readonly, nonatomic) BOOL bundleSourceBooksExists; // ivar: _bundleSourceBooksExists
@property (readonly, nonatomic) BOOL bundleSourceHealthExists; // ivar: _bundleSourceHealthExists
@property (readonly, nonatomic) BOOL bundleSourceMotionExists; // ivar: _bundleSourceMotionExists
@property (readonly, nonatomic) BOOL bundleSourcePDExists; // ivar: _bundleSourcePDExists
@property (readonly, nonatomic) BOOL bundleSourcePhotoExists; // ivar: _bundleSourcePhotoExists
@property (readonly, nonatomic) BOOL bundleSourcePostAnalyticsExists; // ivar: _bundleSourcePostAnalyticsExists
@property (readonly, nonatomic) BOOL bundleSourceProactiveExists; // ivar: _bundleSourceProactiveExists
@property (readonly, nonatomic) BOOL bundleSourceRoutineExists; // ivar: _bundleSourceRoutineExists
@property (readonly, nonatomic) BOOL bundleSourceScreenTimeExists; // ivar: _bundleSourceScreenTimeExists
@property (readonly, nonatomic) NSDate *bundleStartDate;
@property (readonly, nonatomic) int bundleTimeTag; // ivar: _bundleTimeTag
@property (readonly, nonatomic) CGFloat bundleVersion; // ivar: _bundleVersion
@property (readonly, nonatomic) int bundleVisitMapItemSource; // ivar: _bundleVisitMapItemSource
@property (readonly, nonatomic) int bundleVisitPlaceLabelGranularity; // ivar: _bundleVisitPlaceLabelGranularity
@property (readonly, nonatomic) int bundleVisitPlaceType; // ivar: _bundleVisitPlaceType
@property (readonly, nonatomic) int callDuration; // ivar: _callDuration
@property (readonly, nonatomic) int callPlace; // ivar: _callPlace
@property (readonly, nonatomic) NSString *clientActivityEventClientIdentifier; // ivar: _clientActivityEventClientIdentifier
@property (readonly, nonatomic) NSDate *clientActivityEventTimestamp;
@property (readonly, nonatomic) int clientActivityEventType; // ivar: _clientActivityEventType
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int distanceFromHome; // ivar: _distanceFromHome
@property (readonly, nonatomic) NSArray *gaPRArray; // ivar: _gaPRArray
@property (nonatomic) BOOL hasAppEntryEventAddedCharacters; // ivar: _hasAppEntryEventAddedCharacters
@property (nonatomic) BOOL hasAppEntryEventTotalCharacters; // ivar: _hasAppEntryEventTotalCharacters
@property (nonatomic) BOOL hasBundleIsFamilyIncluded; // ivar: _hasBundleIsFamilyIncluded
@property (nonatomic) BOOL hasBundlePCount; // ivar: _hasBundlePCount
@property (nonatomic) BOOL hasBundlePromptParametersAvailability; // ivar: _hasBundlePromptParametersAvailability
@property (nonatomic) BOOL hasBundleSourceBooksExists; // ivar: _hasBundleSourceBooksExists
@property (nonatomic) BOOL hasBundleSourceHealthExists; // ivar: _hasBundleSourceHealthExists
@property (nonatomic) BOOL hasBundleSourceMotionExists; // ivar: _hasBundleSourceMotionExists
@property (nonatomic) BOOL hasBundleSourcePDExists; // ivar: _hasBundleSourcePDExists
@property (nonatomic) BOOL hasBundleSourcePhotoExists; // ivar: _hasBundleSourcePhotoExists
@property (nonatomic) BOOL hasBundleSourcePostAnalyticsExists; // ivar: _hasBundleSourcePostAnalyticsExists
@property (nonatomic) BOOL hasBundleSourceProactiveExists; // ivar: _hasBundleSourceProactiveExists
@property (nonatomic) BOOL hasBundleSourceRoutineExists; // ivar: _hasBundleSourceRoutineExists
@property (nonatomic) BOOL hasBundleSourceScreenTimeExists; // ivar: _hasBundleSourceScreenTimeExists
@property (nonatomic) BOOL hasBundleVersion; // ivar: _hasBundleVersion
@property (nonatomic) BOOL hasIsBundleResourceTypeInterenceTagIncluded; // ivar: _hasIsBundleResourceTypeInterenceTagIncluded
@property (nonatomic) BOOL hasIsBundleResourceTypeMediaIncluded; // ivar: _hasIsBundleResourceTypeMediaIncluded
@property (nonatomic) BOOL hasIsBundleResourceTypePhotoAssetsIncluded; // ivar: _hasIsBundleResourceTypePhotoAssetsIncluded
@property (nonatomic) BOOL hasIsBundleResourceTypeUnknown; // ivar: _hasIsBundleResourceTypeUnknown
@property (nonatomic) BOOL hasIsBundleResourceTypeValueIncluded; // ivar: _hasIsBundleResourceTypeValueIncluded
@property (nonatomic) BOOL hasIsBundleResourceTypeWebLinkIncluded; // ivar: _hasIsBundleResourceTypeWebLinkIncluded
@property (nonatomic) BOOL hasRankingVersion; // ivar: _hasRankingVersion
@property (nonatomic) BOOL hasSuggestionViewVisibleTime; // ivar: _hasSuggestionViewVisibleTime
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int homeAvailability; // ivar: _homeAvailability
@property (readonly, nonatomic) int interactionCount; // ivar: _interactionCount
@property (readonly, nonatomic) int interactionType; // ivar: _interactionType
@property (readonly, nonatomic) BOOL isBundleResourceTypeInterenceTagIncluded; // ivar: _isBundleResourceTypeInterenceTagIncluded
@property (readonly, nonatomic) BOOL isBundleResourceTypeMediaIncluded; // ivar: _isBundleResourceTypeMediaIncluded
@property (readonly, nonatomic) BOOL isBundleResourceTypePhotoAssetsIncluded; // ivar: _isBundleResourceTypePhotoAssetsIncluded
@property (readonly, nonatomic) BOOL isBundleResourceTypeUnknown; // ivar: _isBundleResourceTypeUnknown
@property (readonly, nonatomic) BOOL isBundleResourceTypeValueIncluded; // ivar: _isBundleResourceTypeValueIncluded
@property (readonly, nonatomic) BOOL isBundleResourceTypeWebLinkIncluded; // ivar: _isBundleResourceTypeWebLinkIncluded
@property (readonly, nonatomic) int labelConfidenceScore; // ivar: _labelConfidenceScore
@property (readonly, nonatomic) int photoLibraryType; // ivar: _photoLibraryType
@property (readonly, nonatomic) int photoSourceType; // ivar: _photoSourceType
@property (readonly, nonatomic) int ranking; // ivar: _ranking
@property (readonly, nonatomic) CGFloat rankingVersion; // ivar: _rankingVersion
@property (readonly, nonatomic) NSString *suggestionClientIdentifier; // ivar: _suggestionClientIdentifier
@property (readonly, nonatomic) NSString *suggestionIdentifier; // ivar: _suggestionIdentifier
@property (readonly, nonatomic) NSDate *suggestionTimestamp;
@property (readonly, nonatomic) int suggestionType; // ivar: _suggestionType
@property (readonly, nonatomic) NSString *suggestionViewContainerName; // ivar: _suggestionViewContainerName
@property (readonly, nonatomic) CGFloat suggestionViewVisibleTime; // ivar: _suggestionViewVisibleTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) int timeCorrelationScore; // ivar: _timeCorrelationScore
@property (readonly, nonatomic) int workAvailability; // ivar: _workAvailability


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 bundleStartDate:(id)arg1 bundleEndDate:(id)arg2 bundleCreationDate:(id)arg3 bundleExpirationDate:(id)arg4 bundleInterfaceType:(int)arg5 bundleSourceHealthExists:(id)arg6 bundleSourcePhotoExists:(id)arg7 bundleSourceProactiveExists:(id)arg8 bundleSourceRoutineExists:(id)arg9 bundlePromptLanguageFormat:(id)arg10 bundlePromptToneID:(id)arg11 bundlePromptParametersAvailability:(id)arg12 bundlePlaceType:(int)arg13 bundlePlaceUserType:(int)arg14 bundleBaseEventCateory:(int)arg15 bundleEventIDs:(id)arg16 bundleActionType:(id)arg17 backgroundActions:(id)arg18 bundleIsFamilyIncluded:(id)arg19 bundleTimeTag:(int)arg20 isBundleResourceTypeUnknown:(id)arg21 isBundleResourceTypeValueIncluded:(id)arg22 isBundleResourceTypePhotoAssetsIncluded:(id)arg23 isBundleResourceTypeMediaIncluded:(id)arg24 isBundleResourceTypeWebLinkIncluded:(id)arg25 isBundleResourceTypeInterenceTagIncluded:(id)arg26 bundlEngagement:(int)arg27 bundleVersion:(id)arg28 rankingVersion:(id)arg29 ;
-(id)initWithBundleIdentifier:(id)arg0 bundleStartDate:(id)arg1 bundleEndDate:(id)arg2 bundleCreationDate:(id)arg3 bundleExpirationDate:(id)arg4 bundleInterfaceType:(int)arg5 bundleSourceHealthExists:(id)arg6 bundleSourcePhotoExists:(id)arg7 bundleSourceProactiveExists:(id)arg8 bundleSourceRoutineExists:(id)arg9 bundlePromptLanguageFormat:(id)arg10 bundlePromptToneID:(id)arg11 bundlePromptParametersAvailability:(id)arg12 bundlePlaceType:(int)arg13 bundlePlaceUserType:(int)arg14 bundleBaseEventCateory:(int)arg15 bundleEventIDs:(id)arg16 bundleActionType:(id)arg17 backgroundActions:(id)arg18 bundleIsFamilyIncluded:(id)arg19 bundleTimeTag:(int)arg20 isBundleResourceTypeUnknown:(id)arg21 isBundleResourceTypeValueIncluded:(id)arg22 isBundleResourceTypePhotoAssetsIncluded:(id)arg23 isBundleResourceTypeMediaIncluded:(id)arg24 isBundleResourceTypeWebLinkIncluded:(id)arg25 isBundleResourceTypeInterenceTagIncluded:(id)arg26 bundlEngagement:(int)arg27 bundleVersion:(id)arg28 rankingVersion:(id)arg29 suggestionType:(int)arg30 suggestionTimestamp:(id)arg31 suggestionClientIdentifier:(id)arg32 suggestionViewContainerName:(id)arg33 suggestionViewVisibleTime:(id)arg34 appEntryEventType:(int)arg35 appEntryEventClientIdentifier:(id)arg36 appEntryEventTimestamp:(id)arg37 appEntryEventStartTime:(id)arg38 appEntryEventEndTime:(id)arg39 appEntryEventTotalCharacters:(id)arg40 appEntryEventAddedCharacters:(id)arg41 clientActivityEventType:(int)arg42 clientActivityEventClientIdentifier:(id)arg43 clientActivityEventTimestamp:(id)arg44 suggestionIdentifier:(id)arg45 photoSourceType:(int)arg46 photoLibraryType:(int)arg47 bundleSourcePostAnalyticsExists:(id)arg48 bundleSourcePDExists:(id)arg49 bundleSourceMotionExists:(id)arg50 bundleSourceBooksExists:(id)arg51 bundleSourceScreenTimeExists:(id)arg52 gaPRArray:(id)arg53 bundlePCount:(id)arg54 ranking:(int)arg55 labelConfidenceScore:(int)arg56 timeCorrelationScore:(int)arg57 callDuration:(int)arg58 interactionCount:(int)arg59 interactionType:(int)arg60 callPlace:(int)arg61 distanceFromHome:(int)arg62 homeAvailability:(int)arg63 workAvailability:(int)arg64 bundleVisitMapItemSource:(int)arg65 bundleVisitPlaceType:(int)arg66 bundleVisitPlaceLabelGranularity:(int)arg67 bundleIncludesAnomalousEvent:(int)arg68 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif