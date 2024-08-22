// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRV2NOWPLAYINGCONTROLLER_H
#define MRV2NOWPLAYINGCONTROLLER_H

@class NSString, NSMutableArray, MSVVariableIntervalTimer;
@protocol MRNowPlayingControllerImpl, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRNowPlayingControllerConfiguration.h"
#import "MRNowPlayingControllerDestination.h"
#import "MRAVEndpointObserver.h"
#import "MRNowPlayingControllerHelper.h"

@interface MRV2NowPlayingController : NSObject <MRNowPlayingControllerImpl>



@property (nonatomic) BOOL beginLoadingInvalidated; // ivar: _beginLoadingInvalidated
@property (copy, nonatomic) MRNowPlayingControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *deferredContentItemsToMerge; // ivar: _deferredContentItemsToMerge
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) MRNowPlayingControllerDestination *destination; // ivar: _destination
@property (nonatomic) BOOL endpointChanged; // ivar: _endpointChanged
@property (nonatomic) BOOL endpointInvalidated; // ivar: _endpointInvalidated
@property (retain, nonatomic) MRAVEndpointObserver *endpointObserver; // ivar: _endpointObserver
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRNowPlayingControllerHelper *helper; // ivar: helper
@property (nonatomic) int incrementingRequestID; // ivar: _incrementingRequestID
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) MSVVariableIntervalTimer *loadRetryTimer; // ivar: _loadRetryTimer
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly, nonatomic) BOOL needsImmediateReload;
@property (readonly, nonatomic) NSString *needsImmediateReloadReason;
@property (copy, nonatomic) MRNowPlayingControllerDestination *pendingDestination; // ivar: _pendingDestination
@property (nonatomic) BOOL playerPathInvalidated; // ivar: _playerPathInvalidated
@property (retain, nonatomic) id *playerPathInvalidationObserver; // ivar: _playerPathInvalidationObserver
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL registeredForEndpointChanges; // ivar: _registeredForEndpointChanges
@property (nonatomic) BOOL registeredForEndpointInvalidations; // ivar: _registeredForEndpointInvalidations
@property (nonatomic) BOOL registeredForNotifications; // ivar: _registeredForNotifications
@property (nonatomic) BOOL registeredForPlayerPathInvalidations; // ivar: _registeredForPlayerPathInvalidations
@property (nonatomic) BOOL requestingQueue; // ivar: _requestingQueue
@property (readonly, nonatomic) BOOL shouldObserveInvalidations;
@property (readonly) Class superclass;
@property (nonatomic) BOOL updateLoadingEnabled; // ivar: _updateLoadingEnabled


-(BOOL)shouldDeferArtworkRequestForConfiguration:(id)arg0 ;
-(id)_loadNowPlayingStateForPlayerPath:(id)arg0 error:(*id)arg1 ;
-(id)effectivePlaybackQueueRequest;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_configureReloadTimerForError:(id)arg0 ;
-(void)_createUnresolvedPlayerPathForEndpoint:(id)arg0 client:(id)arg1 player:(id)arg2 completion:(id)arg3 ;
-(void)_handleActiveSystemEndpointChangedNotification:(id)arg0 ;
-(void)_handleEndpointChanged;
-(void)_handleEndpointChangedToEndpoint:(id)arg0 ;
-(void)_handleEndpointDidDisconnectNotification:(id)arg0 ;
-(void)_handleEndpointInvalidated;
-(void)_handlePlaybackQueueChangedNotification:(id)arg0 ;
-(void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg0 ;
-(void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg0 ;
-(void)_handlePlaybackStateChangedNotification:(id)arg0 ;
-(void)_handlePlayerPathInvalidatedWithPlayerPath:(id)arg0 ;
-(void)_handleRetryTimerElapsed;
-(void)_handleSupportedCommandsChangedNotification:(id)arg0 ;
-(void)_loadNowPlayingStateForConfiguration:(id)arg0 requestID:(id)arg1 completion:(id)arg2 ;
-(void)_loadNowPlayingStateForResolvedPlayerPath:(id)arg0 requestID:(id)arg1 completion:(id)arg2 ;
-(void)_notifyDelegateOfError:(id)arg0 ;
-(void)_notifyDelegateOfInvalidation;
-(void)_notifyDelegateOfNewResponse:(id)arg0 ;
-(void)_notifyDelegateOfPlaybackQueueChange:(id)arg0 ;
-(void)_notifyDelegateOfPlaybackStateChange:(unsigned int)arg0 ;
-(void)_notifyDelegateOfPlayerPathChange:(id)arg0 ;
-(void)_notifyDelegateOfSupportedCommandsChange:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedArtwork:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedClientProperties:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg0 ;
-(void)_onQueue_clearAllState;
-(void)_onQueue_clearStateForEndpoint;
-(void)_onQueue_clearStateForOutputDeviceUID;
-(void)_onQueue_clearStateForResolvedPlayerPath;
-(void)_onQueue_clearStateForUnresolvedPlayerPath;
-(void)_onQueue_retrieveEndpointForContextUID:(id)arg0 completion:(id)arg1 ;
-(void)_onQueue_retrieveEndpointForUID:(id)arg0 completion:(id)arg1 ;
-(void)_registerForEndpointChangesForOutputDeviceUID:(id)arg0 ;
-(void)_registerForEndpointInvalidations:(id)arg0 ;
-(void)_registerForPlayerPathInvalidationsForUnresolvedPlayerPath:(id)arg0 ;
-(void)_registerNotificationHandlersForResolvedPlayerPath:(id)arg0 ;
-(void)_reloadWithReason:(id)arg0 ;
-(void)_requestClientPropertiesForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_requestContentItemArtwork:(id)arg0 forPlayerPath:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_requestPlaybackQueueArtworkForIdentifiers:(id)arg0 ;
-(void)_requestPlaybackQueueForPlayerPath:(id)arg0 request:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_requestSupportedCommandsForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_resolveForConfiguration:(id)arg0 requestID:(id)arg1 completion:(id)arg2 ;
-(void)_resolveForEndpoint:(id)arg0 client:(id)arg1 player:(id)arg2 requestID:(id)arg3 completion:(id)arg4 ;
-(void)_resolveForOutputContextUID:(id)arg0 client:(id)arg1 player:(id)arg2 requestID:(id)arg3 completion:(id)arg4 ;
-(void)_resolveForOutputDeviceUID:(id)arg0 client:(id)arg1 player:(id)arg2 requestID:(id)arg3 completion:(id)arg4 ;
-(void)_resolveForUnresolvedPlayerPath:(id)arg0 requestID:(id)arg1 completion:(id)arg2 ;
-(void)_resolvePlayerPath:(id)arg0 completion:(id)arg1 ;
-(void)_unregisterForEndpointChanges;
-(void)_unregisterForEndpointInvalidations;
-(void)_unregisterForPlayerPathInvalidations;
-(void)_unregisterNotificationHandlers;
-(void)beginLoadingUpdates;
-(void)dealloc;
-(void)destinationWithCompletion:(id)arg0 ;
-(void)endLoadingUpdates;
-(void)onQueue_setResolvedPlayerPath:(id)arg0 ;
-(void)setIsLoading:(BOOL)arg0 ;


@end


#endif