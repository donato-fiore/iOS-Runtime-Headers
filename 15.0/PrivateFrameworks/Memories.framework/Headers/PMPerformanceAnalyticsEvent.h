// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMPERFORMANCEANALYTICSEVENT_H
#define PMPERFORMANCEANALYTICSEVENT_H

@class NSString;
@protocol CoreAnalyticsEventProtocol;


#import "PMCoreAnalyticsEvent.h"

@interface PMPerformanceAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol>



@property (nonatomic) NSInteger assetDownloadStage; // ivar: _assetDownloadStage
@property (nonatomic) NSInteger compositionStage; // ivar: _compositionStage
@property (copy, nonatomic) NSString *creationType; // ivar: _creationType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceFreeSpace; // ivar: _deviceFreeSpace
@property (nonatomic) NSInteger downloadErrorCount; // ivar: _downloadErrorCount
@property (copy, nonatomic) NSString *duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger musicSelectionStage; // ivar: _musicSelectionStage
@property (nonatomic) NSInteger nonLocalAssetCount; // ivar: _nonLocalAssetCount
@property (nonatomic) NSInteger numberOfAssets; // ivar: _numberOfAssets
@property (nonatomic) NSInteger numberOfItemsInEditList; // ivar: _numberOfItemsInEditList
@property (nonatomic) NSInteger picklistStage; // ivar: _picklistStage
@property (nonatomic) BOOL playHasStarted; // ivar: _playHasStarted
@property (nonatomic) NSInteger polishStage; // ivar: _polishStage
@property (nonatomic) NSInteger projectCreationStage; // ivar: _projectCreationStage
@property (nonatomic) NSInteger songDownloadStage; // ivar: _songDownloadStage
@property (nonatomic) NSInteger stabilizationStage; // ivar: _stabilizationStage
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalMovieCreationTime; // ivar: _totalMovieCreationTime
@property (nonatomic) NSInteger trimStage; // ivar: _trimStage
@property (copy, nonatomic) NSString *type; // ivar: _type


-(id)copy;
-(id)eventBySettingAssetDownloadStage:(NSInteger)arg0 ;
-(id)eventBySettingCompositionStage:(NSInteger)arg0 ;
-(id)eventBySettingCreationType:(id)arg0 ;
-(id)eventBySettingDownloadErrorCount:(NSInteger)arg0 ;
-(id)eventBySettingDuration:(id)arg0 ;
-(id)eventBySettingMusicSelectionStage:(NSInteger)arg0 ;
-(id)eventBySettingNonLocalAssetCount:(NSInteger)arg0 ;
-(id)eventBySettingNumberOfAssets:(NSInteger)arg0 ;
-(id)eventBySettingNumberOfItemsInEditList:(NSInteger)arg0 ;
-(id)eventBySettingPicklistStage:(NSInteger)arg0 ;
-(id)eventBySettingPlayHasStarted:(BOOL)arg0 ;
-(id)eventBySettingPolishStage:(NSInteger)arg0 ;
-(id)eventBySettingProjectCreationStage:(NSInteger)arg0 ;
-(id)eventBySettingSongDownloadStage:(NSInteger)arg0 ;
-(id)eventBySettingStabilizationStage:(NSInteger)arg0 ;
-(id)eventBySettingTotalMovieCreationTime:(NSInteger)arg0 ;
-(id)eventBySettingTrimStage:(NSInteger)arg0 ;
-(id)eventBySettingType:(id)arg0 ;
-(id)eventName;
-(id)eventPayload;
-(id)init;


@end


#endif