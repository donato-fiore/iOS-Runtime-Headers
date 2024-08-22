// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGRIDINLINEPLAYBACKCONTROLLER_H
#define PXGRIDINLINEPLAYBACKCONTROLLER_H

@class NSMapTable, NSMutableArray, NSArray, NSString;
@protocol PXPreferencesObserver, OS_dispatch_queue, PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXUpdater.h"

@interface PXGridInlinePlaybackController : NSObject <PXPreferencesObserver>

 {
    NSObject<OS_dispatch_queue> *_recordsQueue;
    os_unfair_lock_s _lookupLock;
    NSMapTable *_lookupLock_recordsByDisplayAsset;
    NSMutableArray *_currentlyPlayingRecords;
    NSMutableArray *_visibleRecords;
    PXUpdater *_updater;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) BOOL applicationActive; // ivar: _applicationActive
@property (nonatomic) BOOL autoplaySettingEnabled; // ivar: _autoplaySettingEnabled
@property (nonatomic) BOOL canCreateRecords; // ivar: _canCreateRecords
@property (readonly, nonatomic) BOOL canProvideGeometriesForRecords;
@property (readonly, nonatomic) UIEdgeInsets criticallyVisibleEdgeInsets; // ivar: _criticallyVisibleEdgeInsets
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *currentHoveredDisplayAsset;
@property (readonly, copy, nonatomic) NSArray *currentRecords;
@property (readonly, nonatomic) CGRect currentVisibleRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isContentViewVisible; // ivar: _isContentViewVisible
@property (nonatomic) BOOL isContextMenuInteractionActive; // ivar: _isContextMenuInteractionActive
@property (nonatomic) BOOL isDragSessionActive; // ivar: _isDragSessionActive
@property (nonatomic) BOOL isOneUpVisible; // ivar: _isOneUpVisible
@property (nonatomic) BOOL lowPowerModeEnabled; // ivar: _lowPowerModeEnabled
@property (nonatomic) BOOL playbackEnabled; // ivar: _playbackEnabled
@property (readonly, nonatomic) BOOL shouldEnablePlayback;
@property (readonly, nonatomic) BOOL shouldPlayOnHover;
@property (readonly) Class superclass;


-(BOOL)_hasAnyPlaybackRecords;
-(BOOL)canPlayAsset:(id)arg0 ;
-(BOOL)canUpdatePlayingRecords;
-(BOOL)isDisplayAssetEligibleForAutoPlayback:(id)arg0 ;
-(BOOL)isPlayingDisplayAsset:(id)arg0 ;
-(id)checkOutPlaybackRecordForDisplayAsset:(id)arg0 mediaProvider:(id)arg1 geometryReference:(id)arg2 ;
-(id)checkOutPlaybackRecordForDisplayAsset:(id)arg0 mediaProvider:(id)arg1 geometryReference:(id)arg2 configurationBlock:(id)arg3 ;
-(id)createPlaybackRecordForDisplayAsset:(id)arg0 mediaProvider:(id)arg1 geometryReference:(id)arg2 ;
-(id)filterSortedRecordsToPlay:(id)arg0 ;
-(id)init;
-(struct CGRect )frameForPlaybackRecord:(id)arg0 minPlayableSize:(struct CGSize *)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidResignActive:(id)arg0 ;
-(void)_processInfoPowerStateDidChange:(id)arg0 ;
-(void)_startPlaybackForRecords:(id)arg0 ;
-(void)_stopPlaybackForRecords:(id)arg0 ;
-(void)_updateActive;
-(void)_updateCanCreateRecords;
-(void)_updateLowPowerModeEnabled;
-(void)_updatePlaybackEnabled;
-(void)_updatePlayingRecords;
-(void)_updateVisibilityOfRecords;
-(void)checkInPlaybackRecordForDisplayAsset:(id)arg0 ;
-(void)checkInPlaybackRecordForDisplayAssets:(id)arg0 ;
-(void)dealloc;
-(void)didUpdatePlayingRecords;
-(void)invalidatePlaybackEnabled;
-(void)invalidatePlayingRecords;
-(void)preferencesDidChange;
-(void)setNeedsUpdate;
-(void)visibleRectDidChange;
-(void)willCheckInPlaybackRecordForDisplayAsset:(id)arg0 ;


@end


#endif