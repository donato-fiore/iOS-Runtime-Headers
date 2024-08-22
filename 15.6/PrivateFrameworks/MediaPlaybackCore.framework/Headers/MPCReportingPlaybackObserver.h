// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCREPORTINGPLAYBACKOBSERVER_H
#define MPCREPORTINGPLAYBACKOBSERVER_H

@class NSData, MPAVItem, NSOperationQueue, NSString, MPAVController;

#import <Foundation/Foundation.h>

#import "MPCReportingController.h"

@interface MPCReportingPlaybackObserver : NSObject {
    NSData *_currentJingleReportingTimedMetadata;
    BOOL _hasPendingContainerChange;
    BOOL _hasSetLastPlayEventTimeStamp;
    BOOL _isReloadingWithPlaybackContext;
    BOOL _itemDidChangeWhenReloadingPlaybackContext;
    BOOL _isScrubbing;
    BOOL _currentItemIsHLS;
    MPAVItem *_itemForCurrentTimeChange;
    NSOperationQueue *_recordEventOperationQueue;
    NSString *_itemContentItemIDForLastPlayEventEndTime;
    CGFloat _lastPlayEventEndTimeForCurrentItem;
    CGFloat _lastPlayEventTimeStamp;
    BOOL _shouldReportAsPlaying;
    CGFloat _startTimeForCurrentTimeChange;
}


@property (nonatomic, getter=isSBEnabled) BOOL SBEnabled; // ivar: _SBEnabled
@property (nonatomic, getter=isOffline) BOOL offline; // ivar: _offline
@property (readonly, nonatomic) MPAVController *player; // ivar: _player
@property (readonly, nonatomic) MPCReportingController *reportingController; // ivar: _reportingController
@property (nonatomic) NSUInteger storeAccountID; // ivar: _storeAccountID
@property (copy, nonatomic) NSString *storeFrontID; // ivar: _storeFrontID


-(CGFloat)_itemEndTimeForItem:(id)arg0 withProposedEndTime:(CGFloat)arg1 ;
-(CGFloat)_itemStartTimeForItem:(id)arg0 ;
-(id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg0 eventSource:(id)arg1 ;
-(id)initWithPlayer:(id)arg0 reportingController:(id)arg1 ;
-(id)newPlayActivityEvent;
-(void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg0 ;
-(void)_playerDidReloadWithPlaybackContextNotification:(id)arg0 ;
-(void)_playerDidSetCurrentTimeNotification:(id)arg0 ;
-(void)_playerItemDidChangeNotification:(id)arg0 ;
-(void)_playerItemDidChangeWhenReloadingPlaybackContextNotification:(id)arg0 ;
-(void)_playerItemWillChangeNotification:(id)arg0 ;
-(void)_playerPlaybackStateDidChangeNotification:(id)arg0 ;
-(void)_playerWillReloadWithPlaybackContextNotification:(id)arg0 ;
-(void)_playerWillSetCurrentTimeNotification:(id)arg0 ;
-(void)_reportPlaybackEndedForTimeoutWithItem:(id)arg0 ;
-(void)_sendPlaybackEndNotification:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(void)_sendPlaybackStartNotification;
-(void)_setLastPlayEventEndTime:(CGFloat)arg0 forItemContentItemID:(id)arg1 ;
-(void)dealloc;
-(void)didHitPlaybackTimeoutEndingPlayback:(BOOL)arg0 withCurrentItem:(id)arg1 ;
-(void)didTransitionItemForBan:(id)arg0 ;
-(void)recordPlayActivityEvents:(id)arg0 forEventSource:(id)arg1 ;
-(void)recordUserSeekFromTime:(CGFloat)arg0 toTime:(CGFloat)arg1 forItem:(id)arg2 ;
-(void)willHitPlaybackTimeoutEndingPlayback:(BOOL)arg0 withCurrentItem:(id)arg1 ;
-(void)willTransitionItemForBan:(id)arg0 ;


@end


#endif