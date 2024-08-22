// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUANNOUNCEMENTGLOBEVIEW_H
#define HUANNOUNCEMENTGLOBEVIEW_H

@class UIView, ANRemotePlaybackSession, NSString, NSMutableArray, NSMutableDictionary, UILabel, HFAudioPlayer, UIVisualEffectView, UIImageView, UITapGestureRecognizer;
@protocol HFAudioPlayerDelegate, OS_dispatch_queue, HUAnnouncementsGlobeViewDelegate;



@interface HUAnnouncementGlobeView : UIView <HFAudioPlayerDelegate>



@property (retain, nonatomic) ANRemotePlaybackSession *announceRemotePlaybackSession; // ivar: _announceRemotePlaybackSession
@property (retain, nonatomic) NSString *announcementGroupID; // ivar: _announcementGroupID
@property (retain, nonatomic) NSMutableArray *announcementIDs; // ivar: _announcementIDs
@property (retain, nonatomic) NSMutableDictionary *announcementsInfo; // ivar: _announcementsInfo
@property (retain, nonatomic) UILabel *announcementsProgressLabel; // ivar: _announcementsProgressLabel
@property (retain, nonatomic) HFAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSMutableArray *currentlyDisplayedAnnouncements; // ivar: _currentlyDisplayedAnnouncements
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataSourceUpdateQueue; // ivar: _dataSourceUpdateQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayVisitedOnceToken; // ivar: _displayVisitedOnceToken
@property (weak, nonatomic) NSObject<HUAnnouncementsGlobeViewDelegate> *globeViewDelegate; // ivar: _globeViewDelegate
@property (nonatomic) BOOL hasActivePlaybackSession; // ivar: _hasActivePlaybackSession
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *lastPlayedAnnouncementID; // ivar: _lastPlayedAnnouncementID
@property (retain, nonatomic) UIImageView *playImageView; // ivar: _playImageView
@property (nonatomic) CGSize playbackBoundingBoxSize; // ivar: _playbackBoundingBoxSize
@property (nonatomic) NSInteger seedOnceToken; // ivar: _seedOnceToken
@property (retain, nonatomic) NSString *selectedAnnouncementID; // ivar: _selectedAnnouncementID
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) UIView *tappableCoverView; // ivar: _tappableCoverView
@property (nonatomic) NSUInteger totalNumberOfAnnouncements; // ivar: _totalNumberOfAnnouncements
@property (retain, nonatomic) NSMutableArray *visitedAnnouncements; // ivar: _visitedAnnouncements


-(BOOL)_isNextAnnouncementTheOldest;
-(CGFloat)_radiusOfPlaybackViewInSlotPosition:(NSUInteger)arg0 ;
-(CGFloat)_xCoordinateForPlaybackViewInSlotPosition:(NSUInteger)arg0 ;
-(CGFloat)_yCoordinateForPlaybackViewInSlotPosition:(NSUInteger)arg0 ;
-(NSUInteger)_indexOfLatestCachedAnnouncementFromIDs:(id)arg0 ;
-(NSUInteger)_numberOfSlotsAvailableForNewAnnouncements:(id)arg0 ;
-(NSUInteger)_numberOfUnplayedAnnouncements;
-(id)_blurEffectForCurrentInterfaceStyle;
-(id)_nextAnnouncementPlaybackView;
-(id)_onQueue_fetchNewAnnouncementInfo:(id)arg0 oldestVisitedAnnouncementID:(id)arg1 ;
-(id)initWithAnnouncementPayload:(id)arg0 delegate:(id)arg1 ;
-(void)_addOrInsertAnnouncementsFromIDs:(id)arg0 withInfo:(id)arg1 withinRange:(struct _NSRange )arg2 inFreeSlots:(NSUInteger)arg3 ;
-(void)_addVisitedAnnouncementsToDisplayQueueIfNeeded;
-(void)_appendAnnouncements:(id)arg0 withInfo:(id)arg1 ;
-(void)_configureVisualStyleForBackgroundView;
-(void)_layoutPlaybackViewCenteredIfNeeded:(id)arg0 ;
-(void)_layoutPlaybackViewsWithAnimationDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_playAnnouncementWithInfo:(id)arg0 ;
-(void)_playNextAnnouncement;
-(void)_playRecentlyAddedAnnouncements;
-(void)_seedVisitedAnouncements:(id)arg0 withInfo:(id)arg1 ;
-(void)_setupConstrainstsForPlaybackViews;
-(void)_setupConstraintsForPlaybackViewIfNeeded:(id)arg0 slotPosition:(NSUInteger)arg1 ;
-(void)_setupIncomingAnnouncementSession;
-(void)_setupSubviewsForAnnouncementInfo:(id)arg0 ;
-(void)_showVisitedAnnouncementsView;
-(void)_submitAnalyticsForAnnouncePlaybackCompletedSuccessfully:(BOOL)arg0 forAnnouncementID:(id)arg1 interruptedByUser:(BOOL)arg2 ;
-(void)_togglePlayback:(id)arg0 ;
-(void)_updateLayoutAndAppearanceForPlaybackView:(id)arg0 atSlotPosition:(NSUInteger)arg1 ;
-(void)audioPlayer:(id)arg0 didPausePlaybackWithReason:(id)arg1 ;
-(void)audioPlayer:(id)arg0 didUpdateAveragePower:(CGFloat)arg1 ;
-(void)audioPlayerDidFinishPlayback:(id)arg0 withError:(id)arg1 ;
-(void)layoutSubviews;
-(void)skipToNextAnnouncement;
-(void)stopPlayback;
-(void)teardownAnnouncements;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif