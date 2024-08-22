// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMMOVIEPROVIDERANALYTICSEVENT_H
#define PMMOVIEPROVIDERANALYTICSEVENT_H

@class NSDate, NSString;
@protocol CoreAnalyticsEventProtocol;


#import "PMCoreAnalyticsEvent.h"

@interface PMMovieProviderAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol>



@property (nonatomic) NSInteger abortedDuringDownloadCount; // ivar: _abortedDuringDownloadCount
@property (nonatomic) NSInteger assetCountDeltaFromEditing; // ivar: _assetCountDeltaFromEditing
@property (nonatomic) NSInteger changedDurationCount; // ivar: _changedDurationCount
@property (nonatomic) NSInteger changedKeyAssetCount; // ivar: _changedKeyAssetCount
@property (nonatomic) NSInteger changedMoodCount; // ivar: _changedMoodCount
@property (nonatomic) NSInteger changedMusicCount; // ivar: _changedMusicCount
@property (nonatomic) NSInteger changedSubTitleCount; // ivar: _changedSubTitleCount
@property (nonatomic) NSInteger changedTitleCount; // ivar: _changedTitleCount
@property (nonatomic) NSInteger changedTrimRangeCount; // ivar: _changedTrimRangeCount
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAbortDuringDownload; // ivar: _didAbortDuringDownload
@property (nonatomic) BOOL didChangeDuration; // ivar: _didChangeDuration
@property (nonatomic) BOOL didChangeKeyAsset; // ivar: _didChangeKeyAsset
@property (nonatomic) BOOL didChangeMood; // ivar: _didChangeMood
@property (nonatomic) BOOL didChangeMusic; // ivar: _didChangeMusic
@property (nonatomic) BOOL didChangeSubTitle; // ivar: _didChangeSubTitle
@property (nonatomic) BOOL didChangeTitle; // ivar: _didChangeTitle
@property (nonatomic) BOOL didChangeTrimRange; // ivar: _didChangeTrimRange
@property (nonatomic) BOOL didEdit; // ivar: _didEdit
@property (nonatomic) BOOL didPlayAllTheWayThrough; // ivar: _didPlayAllTheWayThrough
@property (nonatomic) BOOL didShare; // ivar: _didShare
@property (nonatomic) BOOL didStartPlayback; // ivar: _didStartPlayback
@property (nonatomic) NSInteger editDoneCount; // ivar: _editDoneCount
@property (nonatomic) BOOL featuredMusicUsed; // ivar: _featuredMusicUsed
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *memoryCategory; // ivar: _memoryCategory
@property (copy, nonatomic) NSString *memorySubcategory; // ivar: _memorySubcategory
@property (nonatomic) NSInteger playPercent; // ivar: _playPercent
@property (nonatomic) NSInteger playedAllTheWayThroughCount; // ivar: _playedAllTheWayThroughCount
@property (nonatomic) NSInteger sharedCount; // ivar: _sharedCount
@property (nonatomic) NSInteger startedPlaybackCount; // ivar: _startedPlaybackCount
@property (readonly) Class superclass;


-(id)copy;
-(id)eventByAssigningAssetCountDeltaFromEditingWithCount:(NSInteger)arg0 ;
-(id)eventByAssigningDidAbortDuringDownload;
-(id)eventByAssigningDidChangeDuration;
-(id)eventByAssigningDidChangeKeyAsset;
-(id)eventByAssigningDidChangeMood;
-(id)eventByAssigningDidChangeMusic;
-(id)eventByAssigningDidChangeSubTitle;
-(id)eventByAssigningDidChangeTitle;
-(id)eventByAssigningDidChangeTrimRange;
-(id)eventByAssigningDidEdit;
-(id)eventByAssigningDidPlayAllTheWayThrough;
-(id)eventByAssigningDidShare;
-(id)eventByAssigningDidStartPlayback;
-(id)eventByIncreasingAbortedDuringDownloadCount;
-(id)eventByIncreasingChangedDurationCount;
-(id)eventByIncreasingChangedKeyAssetCount;
-(id)eventByIncreasingChangedMoodCount;
-(id)eventByIncreasingChangedMusicCount;
-(id)eventByIncreasingChangedSubtitleCount;
-(id)eventByIncreasingChangedTitleCount;
-(id)eventByIncreasingChangedTrimRangeCount;
-(id)eventByIncreasingEditDoneCount;
-(id)eventByIncreasingPlayedAllTheWayThroughCount;
-(id)eventByIncreasingSharedCount;
-(id)eventByIncreasingStartedPlaybackCount;
-(id)eventBySettingFeaturedMusicUsed:(BOOL)arg0 ;
-(id)eventBySettingMemoryCategory:(id)arg0 ;
-(id)eventBySettingMemorySubcategory:(id)arg0 ;
-(id)eventBySettingPlayPercent:(NSInteger)arg0 ;
-(id)eventName;
-(id)eventPayload;
-(id)init;


@end


#endif