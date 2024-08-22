// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPUBIQUITOUSPLAYBACKPOSITIONCONTROLLER_H
#define MPUBIQUITOUSPLAYBACKPOSITIONCONTROLLER_H

@class SBCPlaybackPositionDomain, SBCPlaybackPositionSyncService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPUbiquitousPlaybackPositionController : NSObject

@property (readonly, nonatomic) BOOL applicationBecomingActive; // ivar: _applicationBecomingActive
@property (nonatomic, getter=isServiceActive) BOOL beganUsingPlaybackPositionMetadata; // ivar: _beganUsingPlaybackPositionMetadata
@property (nonatomic) BOOL databaseHasBookmarkableContents; // ivar: _databaseHasBookmarkableContents
@property (nonatomic) BOOL externallyActive; // ivar: _externallyActive
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic, getter=isServiceActive) BOOL serviceActive; // ivar: _isServiceActive
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // ivar: _serviceQueue
@property (retain, nonatomic) SBCPlaybackPositionDomain *uppDomain; // ivar: _uppDomain
@property (retain, nonatomic) SBCPlaybackPositionSyncService *uppServiceProxy; // ivar: _uppServiceProxy


+(id)sharedUbiquitousPlaybackPositionController;
-(BOOL)_onQueue_isEnabled;
-(BOOL)_onQueue_shouldBeActive;
-(id)_onServiceQueue_connectedUPPServiceProxy;
-(id)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(NSInteger)arg0 ;
-(id)init;
-(id)playbackPositionForLocalEntityIdentifier:(id)arg0 ;
-(id)playbackPositionForLocalEntityIdentifiers:(id)arg0 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_applicationDidEnterForegroundNotification:(id)arg0 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg0 ;
-(void)_onServiceQueue_becomeActiveService;
-(void)_onServiceQueue_resignActiveService;
-(void)_onServiceQueue_updateActiveServiceIfNeeded;
-(void)beginUsingPlaybackPositionMetadata;
-(void)dealloc;
-(void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(NSInteger)arg0 isCheckpoint:(BOOL)arg1 ;
-(void)persistPlaybackPositionMetadataEntity:(id)arg0 isCheckpoint:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif