// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEMUSICTRAININGDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCEMUSICTRAININGDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEMusicTrainingDependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) CGFloat compoundActiveBundleScore; // ivar: _compoundActiveBundleScore
@property (nonatomic) CGFloat compoundMediaTypeBundleScore; // ivar: _compoundMediaTypeBundleScore
@property (nonatomic) CGFloat entitySearchBundleRecencyS; // ivar: _entitySearchBundleRecencyS
@property (nonatomic) CGFloat entitySearchBundleScore; // ivar: _entitySearchBundleScore
@property (nonatomic) BOOL hasCompoundActiveBundleScore;
@property (nonatomic) BOOL hasCompoundMediaTypeBundleScore;
@property (nonatomic) BOOL hasEntitySearchBundleRecencyS;
@property (nonatomic) BOOL hasEntitySearchBundleScore;
@property (nonatomic) BOOL hasIsAppFirstParty;
@property (nonatomic) BOOL hasIsClientForegroundActiveBundle;
@property (nonatomic) BOOL hasIsDisambiguationSelectedApp;
@property (nonatomic) BOOL hasIsForegroundBundle;
@property (nonatomic) BOOL hasIsModelPredictedApp;
@property (nonatomic) BOOL hasIsNowPlayingBundle;
@property (nonatomic) BOOL hasIsNowPlayingBundlePSE1;
@property (nonatomic) BOOL hasIsNowPlayingBundlePSE2;
@property (nonatomic) BOOL hasIsNowPlayingLastBundle;
@property (nonatomic) BOOL hasIsRawLastNowPlayingCoreDuet;
@property (nonatomic) BOOL hasIsRawMediaCategoryAudiobookSignal;
@property (nonatomic) BOOL hasIsRawMediaCategoryMusicSignal;
@property (nonatomic) BOOL hasIsRawMediaCategoryPodcastSignal;
@property (nonatomic) BOOL hasIsRawMediaCategoryRadioSignal;
@property (nonatomic) BOOL hasIsRawMediaCategoryVideoSignal;
@property (nonatomic) BOOL hasIsRequestedApp;
@property (nonatomic) BOOL hasIsSupportedFlag;
@property (nonatomic) BOOL hasIsSupportedUnicornMatchFlag;
@property (nonatomic) BOOL hasIsUnicornFlag;
@property (nonatomic) BOOL hasNowPlayingBundleCount;
@property (nonatomic) BOOL hasNowPlayingBundleRecencyS;
@property (nonatomic) BOOL hasNowPlayingBundleScore;
@property (nonatomic) BOOL hasNowPlayingUsage14Days;
@property (nonatomic) BOOL hasNowPlayingUsage1Day;
@property (nonatomic) BOOL hasNowPlayingUsage7Days;
@property (nonatomic) BOOL hasRawEntitySearchRecency;
@property (nonatomic) BOOL hasRawMediaTypeUsageSignalBook;
@property (nonatomic) BOOL hasRawMediaTypeUsageSignalMusic;
@property (nonatomic) BOOL hasRawMediaTypeUsageSignalPodcast;
@property (nonatomic) BOOL hasRawMediaTypeUsageSignalVideo;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet10Min;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet1Day;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet1Hr;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet28Day;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet2Min;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet6Hr;
@property (nonatomic) BOOL hasRawNowPlayingCountCoreDuet7Day;
@property (nonatomic) BOOL hasRawNowPlayingRecencyCD;
@property (nonatomic) BOOL hasUsageScoreBooks;
@property (nonatomic) BOOL hasUsageScoreMusic;
@property (nonatomic) BOOL hasUsageScorePodcasts;
@property (nonatomic) BOOL hasVq21Score;
@property (nonatomic) BOOL isAppFirstParty; // ivar: _isAppFirstParty
@property (nonatomic) BOOL isClientForegroundActiveBundle; // ivar: _isClientForegroundActiveBundle
@property (nonatomic) BOOL isDisambiguationSelectedApp; // ivar: _isDisambiguationSelectedApp
@property (nonatomic) BOOL isForegroundBundle; // ivar: _isForegroundBundle
@property (nonatomic) BOOL isModelPredictedApp; // ivar: _isModelPredictedApp
@property (nonatomic) BOOL isNowPlayingBundle; // ivar: _isNowPlayingBundle
@property (nonatomic) BOOL isNowPlayingBundlePSE1; // ivar: _isNowPlayingBundlePSE1
@property (nonatomic) BOOL isNowPlayingBundlePSE2; // ivar: _isNowPlayingBundlePSE2
@property (nonatomic) BOOL isNowPlayingLastBundle; // ivar: _isNowPlayingLastBundle
@property (nonatomic) BOOL isRawLastNowPlayingCoreDuet; // ivar: _isRawLastNowPlayingCoreDuet
@property (nonatomic) BOOL isRawMediaCategoryAudiobookSignal; // ivar: _isRawMediaCategoryAudiobookSignal
@property (nonatomic) BOOL isRawMediaCategoryMusicSignal; // ivar: _isRawMediaCategoryMusicSignal
@property (nonatomic) BOOL isRawMediaCategoryPodcastSignal; // ivar: _isRawMediaCategoryPodcastSignal
@property (nonatomic) BOOL isRawMediaCategoryRadioSignal; // ivar: _isRawMediaCategoryRadioSignal
@property (nonatomic) BOOL isRawMediaCategoryVideoSignal; // ivar: _isRawMediaCategoryVideoSignal
@property (nonatomic) BOOL isRequestedApp; // ivar: _isRequestedApp
@property (nonatomic) BOOL isSupportedFlag; // ivar: _isSupportedFlag
@property (nonatomic) BOOL isSupportedUnicornMatchFlag; // ivar: _isSupportedUnicornMatchFlag
@property (nonatomic) BOOL isUnicornFlag; // ivar: _isUnicornFlag
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int nowPlayingBundleCount; // ivar: _nowPlayingBundleCount
@property (nonatomic) CGFloat nowPlayingBundleRecencyS; // ivar: _nowPlayingBundleRecencyS
@property (nonatomic) CGFloat nowPlayingBundleScore; // ivar: _nowPlayingBundleScore
@property (nonatomic) int nowPlayingUsage14Days; // ivar: _nowPlayingUsage14Days
@property (nonatomic) int nowPlayingUsage1Day; // ivar: _nowPlayingUsage1Day
@property (nonatomic) int nowPlayingUsage7Days; // ivar: _nowPlayingUsage7Days
@property (nonatomic) int rawEntitySearchRecency; // ivar: _rawEntitySearchRecency
@property (nonatomic) int rawMediaTypeUsageSignalBook; // ivar: _rawMediaTypeUsageSignalBook
@property (nonatomic) int rawMediaTypeUsageSignalMusic; // ivar: _rawMediaTypeUsageSignalMusic
@property (nonatomic) int rawMediaTypeUsageSignalPodcast; // ivar: _rawMediaTypeUsageSignalPodcast
@property (nonatomic) int rawMediaTypeUsageSignalVideo; // ivar: _rawMediaTypeUsageSignalVideo
@property (nonatomic) int rawNowPlayingCountCoreDuet10Min; // ivar: _rawNowPlayingCountCoreDuet10Min
@property (nonatomic) int rawNowPlayingCountCoreDuet1Day; // ivar: _rawNowPlayingCountCoreDuet1Day
@property (nonatomic) int rawNowPlayingCountCoreDuet1Hr; // ivar: _rawNowPlayingCountCoreDuet1Hr
@property (nonatomic) int rawNowPlayingCountCoreDuet28Day; // ivar: _rawNowPlayingCountCoreDuet28Day
@property (nonatomic) int rawNowPlayingCountCoreDuet2Min; // ivar: _rawNowPlayingCountCoreDuet2Min
@property (nonatomic) int rawNowPlayingCountCoreDuet6Hr; // ivar: _rawNowPlayingCountCoreDuet6Hr
@property (nonatomic) int rawNowPlayingCountCoreDuet7Day; // ivar: _rawNowPlayingCountCoreDuet7Day
@property (nonatomic) int rawNowPlayingRecencyCD; // ivar: _rawNowPlayingRecencyCD
@property (nonatomic) CGFloat usageScoreBooks; // ivar: _usageScoreBooks
@property (nonatomic) CGFloat usageScoreMusic; // ivar: _usageScoreMusic
@property (nonatomic) CGFloat usageScorePodcasts; // ivar: _usageScorePodcasts
@property (nonatomic) CGFloat vq21Score; // ivar: _vq21Score


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCompoundActiveBundleScore;
-(void)deleteCompoundMediaTypeBundleScore;
-(void)deleteEntitySearchBundleRecencyS;
-(void)deleteEntitySearchBundleScore;
-(void)deleteIsAppFirstParty;
-(void)deleteIsClientForegroundActiveBundle;
-(void)deleteIsDisambiguationSelectedApp;
-(void)deleteIsForegroundBundle;
-(void)deleteIsModelPredictedApp;
-(void)deleteIsNowPlayingBundle;
-(void)deleteIsNowPlayingBundlePSE1;
-(void)deleteIsNowPlayingBundlePSE2;
-(void)deleteIsNowPlayingLastBundle;
-(void)deleteIsRawLastNowPlayingCoreDuet;
-(void)deleteIsRawMediaCategoryAudiobookSignal;
-(void)deleteIsRawMediaCategoryMusicSignal;
-(void)deleteIsRawMediaCategoryPodcastSignal;
-(void)deleteIsRawMediaCategoryRadioSignal;
-(void)deleteIsRawMediaCategoryVideoSignal;
-(void)deleteIsRequestedApp;
-(void)deleteIsSupportedFlag;
-(void)deleteIsSupportedUnicornMatchFlag;
-(void)deleteIsUnicornFlag;
-(void)deleteNowPlayingBundleCount;
-(void)deleteNowPlayingBundleRecencyS;
-(void)deleteNowPlayingBundleScore;
-(void)deleteNowPlayingUsage14Days;
-(void)deleteNowPlayingUsage1Day;
-(void)deleteNowPlayingUsage7Days;
-(void)deleteRawEntitySearchRecency;
-(void)deleteRawMediaTypeUsageSignalBook;
-(void)deleteRawMediaTypeUsageSignalMusic;
-(void)deleteRawMediaTypeUsageSignalPodcast;
-(void)deleteRawMediaTypeUsageSignalVideo;
-(void)deleteRawNowPlayingCountCoreDuet10Min;
-(void)deleteRawNowPlayingCountCoreDuet1Day;
-(void)deleteRawNowPlayingCountCoreDuet1Hr;
-(void)deleteRawNowPlayingCountCoreDuet28Day;
-(void)deleteRawNowPlayingCountCoreDuet2Min;
-(void)deleteRawNowPlayingCountCoreDuet6Hr;
-(void)deleteRawNowPlayingCountCoreDuet7Day;
-(void)deleteRawNowPlayingRecencyCD;
-(void)deleteUsageScoreBooks;
-(void)deleteUsageScoreMusic;
-(void)deleteUsageScorePodcasts;
-(void)deleteVq21Score;
-(void)writeTo:(id)arg0 ;


@end


#endif