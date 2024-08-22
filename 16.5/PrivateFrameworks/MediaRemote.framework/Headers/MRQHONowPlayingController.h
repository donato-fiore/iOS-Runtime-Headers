// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRQHONOWPLAYINGCONTROLLER_H
#define MRQHONOWPLAYINGCONTROLLER_H

@class NSString, NSMutableArray;
@protocol MRQHONowPlayingControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRArtwork.h"
#import "MRClient.h"
#import "MRAVEndpoint.h"
#import "MRAVEndpointObserver.h"
#import "MRPlayer.h"
#import "MRPlayerPath.h"
#import "MRNowPlayingPlayerResponse.h"

@interface MRQHONowPlayingController : NSObject

@property (retain, nonatomic) MRArtwork *cachedNowPlayingArtwork; // ivar: _cachedNowPlayingArtwork
@property (retain, nonatomic) NSString *cachedNowPlayingArtworkIdentifier; // ivar: _cachedNowPlayingArtworkIdentifier
@property (readonly, nonatomic) MRClient *client; // ivar: _client
@property (retain, nonatomic) NSMutableArray *deferredContentItemsToMerge; // ivar: _deferredContentItemsToMerge
@property (weak, nonatomic) NSObject<MRQHONowPlayingControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (retain, nonatomic) MRAVEndpoint *endpoint; // ivar: _endpoint
@property (retain, nonatomic) MRAVEndpointObserver *endpointObserver; // ivar: _endpointObserver
@property (retain, nonatomic) NSString *endpointObserverGroupUID; // ivar: _endpointObserverGroupUID
@property (readonly, nonatomic) MRPlayer *player; // ivar: _player
@property (retain, nonatomic) id *playerPathInvalidationObserver; // ivar: _playerPathInvalidationObserver
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL registeredForEndpointChanges; // ivar: _registeredForEndpointChanges
@property (nonatomic) BOOL registeredForNotifications; // ivar: _registeredForNotifications
@property (nonatomic) BOOL registeredForPlayerPathInvalidations; // ivar: _registeredForPlayerPathInvalidations
@property (nonatomic) BOOL requestingQueue; // ivar: _requestingQueue
@property (retain, nonatomic) MRPlayerPath *resolvedPlayerPath; // ivar: _resolvedPlayerPath
@property (copy, nonatomic) MRNowPlayingPlayerResponse *response; // ivar: _response
@property (readonly, nonatomic) NSString *uid; // ivar: _uid
@property (retain, nonatomic) MRPlayerPath *unresolvedPlayerPath; // ivar: _unresolvedPlayerPath
@property (nonatomic) BOOL updateLoadingEnabled; // ivar: _updateLoadingEnabled


+(id)localRouteController;
+(id)proactiveEndpointController;
-(id)_loadNowPlayingStateForPlayerPath:(id)arg0 error:(*id)arg1 ;
-(id)_onQueue_updateByMergingContentItemChanges:(id)arg0 ;
-(id)initWithUID:(id)arg0 ;
-(id)initWithUID:(id)arg0 client:(id)arg1 player:(id)arg2 ;
-(void)_createPlayerPathForEndpoint:(id)arg0 client:(id)arg1 player:(id)arg2 completion:(id)arg3 ;
-(void)_downloadContentItemArtwork:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_handleActiveSystemEndpointChangedNotification:(id)arg0 ;
-(void)_handlePlaybackQueueChangedNotification:(id)arg0 ;
-(void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg0 ;
-(void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg0 ;
-(void)_handlePlaybackStateChangedNotification:(id)arg0 ;
-(void)_handleSupportedCommandsChangedNotification:(id)arg0 ;
-(void)_loadNowPlayingStateForEndpoint:(id)arg0 client:(id)arg1 player:(id)arg2 completion:(id)arg3 ;
-(void)_loadNowPlayingStateForUID:(id)arg0 client:(id)arg1 player:(id)arg2 completion:(id)arg3 ;
-(void)_notifyDelegateOfError:(id)arg0 ;
-(void)_notifyDelegateOfInvalidation;
-(void)_notifyDelegateOfNewResponse:(id)arg0 ;
-(void)_notifyDelegateOfPlaybackQueueChangeFromOldQueue:(id)arg0 toNewQueue:(id)arg1 ;
-(void)_notifyDelegateOfPlaybackStateChangeFromOldState:(unsigned int)arg0 toNewState:(unsigned int)arg1 ;
-(void)_notifyDelegateOfSupportedCommandsChangeFromOldCommands:(id)arg0 toNewCommands:(id)arg1 ;
-(void)_notifyDelegateOfUpdatedArtwork:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedContentItems:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg0 ;
-(void)_onQueue_clearState;
-(void)_onQueue_requestAndUpdateArtworkForContentItems:(id)arg0 forPlayerPath:(id)arg1 withReason:(id)arg2 ;
-(void)_onQueue_requestPlaybackQueueForPlayerPath:(id)arg0 includeArtwork:(BOOL)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_onQueue_retrieveEndpointForUID:(id)arg0 completion:(id)arg1 ;
-(void)_onQueue_updateByReplacingWithNewResponse:(id)arg0 ;
-(void)_onQueue_updateWithNewDeviceLastPlayingDate:(id)arg0 ;
-(void)_onQueue_updateWithNewPlaybackQueue:(id)arg0 ;
-(void)_onQueue_updateWithNewPlaybackState:(unsigned int)arg0 ;
-(void)_onQueue_updateWithNewPlayerLastPlayingDate:(id)arg0 ;
-(void)_onQueue_updateWithNewSupportedCommands:(id)arg0 ;
-(void)_registerForEndpointChangesIfNeeded;
-(void)_registerForPlayerPathInvalidationsIfNeeded;
-(void)_registerNotificationHandlersIfNeeded;
-(void)_reloadForCompleteInvalidation;
-(void)_reloadForPlayerPathInvalidation;
-(void)_requestContentItemArtwork:(id)arg0 forPlayerPath:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_requestSupportedCommandsForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_resolvePlayerPath:(id)arg0 completion:(id)arg1 ;
-(void)_unregisterForEndpointChanges;
-(void)_unregisterForPlayerPathInvalidations;
-(void)_unregisterNotificationHandlers;
-(void)beginLoadingUpdates;
-(void)dealloc;
-(void)endLoadingUpdates;


@end


#endif