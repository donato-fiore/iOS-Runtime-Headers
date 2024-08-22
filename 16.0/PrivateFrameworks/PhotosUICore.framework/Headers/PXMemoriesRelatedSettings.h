// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMEMORIESRELATEDSETTINGS_H
#define PXMEMORIESRELATEDSETTINGS_H



#import "PXSettings.h"

@interface PXMemoriesRelatedSettings : PXSettings

@property (nonatomic) NSUInteger deleteBehavior; // ivar: _deleteBehavior
@property (nonatomic) NSUInteger discoveryRankingMode; // ivar: _discoveryRankingMode
@property (nonatomic) BOOL enableDiscoveryFeed; // ivar: _enableDiscoveryFeed
@property (nonatomic) BOOL enableFeedbackComboUI; // ivar: _enableFeedbackComboUI
@property (nonatomic) BOOL enableFeedbackUI; // ivar: _enableFeedbackUI
@property (nonatomic) BOOL enableIPadWideHeader; // ivar: _enableIPadWideHeader
@property (nonatomic) BOOL enableMemoriesLivingOnFeedback; // ivar: _enableMemoriesLivingOnFeedback
@property (nonatomic) BOOL fakePeopleProximity; // ivar: _fakePeopleProximity
@property (nonatomic) BOOL includeChillMixInMusicForYou; // ivar: _includeChillMixInMusicForYou
@property (nonatomic) BOOL includeGetUpMixInMusicForYou; // ivar: _includeGetUpMixInMusicForYou
@property (nonatomic) NSInteger minimumNumberOfCuratedAssetsForInterestingMoments; // ivar: _minimumNumberOfCuratedAssetsForInterestingMoments
@property (nonatomic) NSInteger minimumNumberOfCuratedAssetsForMemories; // ivar: _minimumNumberOfCuratedAssetsForMemories
@property (nonatomic) NSInteger minimumNumberOfCuratedAssetsForMovieHeader; // ivar: _minimumNumberOfCuratedAssetsForMovieHeader
@property (nonatomic) BOOL recoverBlacklistedMemories; // ivar: _recoverBlacklistedMemories
@property (nonatomic) CGFloat refreshPhotoKitTimeout; // ivar: _refreshPhotoKitTimeout
@property (nonatomic) BOOL showEphemeralMemories; // ivar: _showEphemeralMemories
@property (nonatomic) BOOL showMemoryTitleLayer; // ivar: _showMemoryTitleLayer
@property (nonatomic) NSInteger subtitleFontSize; // ivar: _subtitleFontSize
@property (nonatomic) NSUInteger timelineSchedulerMode; // ivar: _timelineSchedulerMode
@property (nonatomic) BOOL useOnlyMusicForTopicInTopPickSuggestions; // ivar: _useOnlyMusicForTopicInTopPickSuggestions
@property (nonatomic) CGFloat widgetRefreshTimeInterval; // ivar: _widgetRefreshTimeInterval


+(BOOL)isAssetCountAcceptableForMemoryPlayback:(NSInteger)arg0 ;
+(id)schedulerOptionsFromTimelineSchedulerMode:(NSUInteger)arg0 ;
+(id)settingsControllerModule;
+(id)sharedInstance;
+(void)_generateQuestionsWithOptions:(NSInteger)arg0 count:(NSUInteger)arg1 inModuleController:(id)arg2 ;
+(void)_presentAlertForMemoriesGenerationResult:(id)arg0 error:(id)arg1 inModuleController:(id)arg2 ;
+(void)_presentAlertWithTitle:(id)arg0 andMessage:(id)arg1 inModuleController:(id)arg2 ;
-(id)parentSettings;
-(void)performPostSaveActions;
-(void)setDefaultValues;


@end


#endif