// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRV1NOWPLAYINGCONTROLLER_H
#define MRV1NOWPLAYINGCONTROLLER_H

@class NSString, NSMutableArray, MSVVariableIntervalTimer;
@protocol MRNowPlayingControllerImpl, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRNowPlayingControllerConfiguration.h"
#import "MRNowPlayingControllerDestination.h"
#import "MRAVEndpointObserver.h"
#import "MRNowPlayingControllerHelper.h"
#import "MRNowPlayingPlayerResponse.h"

@interface MRV1NowPlayingController : NSObject <MRNowPlayingControllerImpl>



@property (copy, nonatomic) MRNowPlayingControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *deferredContentItemsToMerge; // ivar: _deferredContentItemsToMerge
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) MRNowPlayingControllerDestination *destination; // ivar: _destination
@property (retain, nonatomic) MRAVEndpointObserver *endpointObserver; // ivar: _endpointObserver
@property (retain, nonatomic) NSString *endpointObserverGroupUID; // ivar: _endpointObserverGroupUID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRNowPlayingControllerHelper *helper; // ivar: helper
@property (retain, nonatomic) id *playerPathInvalidationObserver; // ivar: _playerPathInvalidationObserver
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL registeredForEndpointChanges; // ivar: _registeredForEndpointChanges
@property (nonatomic) BOOL registeredForNotifications; // ivar: _registeredForNotifications
@property (nonatomic) BOOL registeredForPlayerPathInvalidations; // ivar: _registeredForPlayerPathInvalidations
@property (nonatomic) BOOL requestingQueue; // ivar: _requestingQueue
@property (copy, nonatomic) MRNowPlayingPlayerResponse *response; // ivar: _response
@property (retain, nonatomic) MSVVariableIntervalTimer *retryTimer; // ivar: _retryTimer
@property (readonly) Class superclass;
@property (nonatomic) BOOL updateLoadingEnabled; // ivar: _updateLoadingEnabled


-(id)_loadNowPlayingStateForPlayerPath:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_createPlayerPathForEndpoint:(id)arg0 client:(id)arg1 player:(id)arg2 completion:(id)arg3 ;
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
-(void)_notifyDelegateOfPlaybackQueueChange:(id)arg0 ;
-(void)_notifyDelegateOfPlaybackStateChange:(unsigned int)arg0 ;
-(void)_notifyDelegateOfPlayerPathChange:(id)arg0 ;
-(void)_notifyDelegateOfSupportedCommandsChange:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedArtwork:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedClientProperties:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg0 ;
-(void)_onQueue_clearState;
-(void)_onQueue_retrieveEndpointForUID:(id)arg0 completion:(id)arg1 ;
-(void)_registerForEndpointChangesIfNeeded;
-(void)_registerForPlayerPathInvalidationsIfNeeded;
-(void)_registerNotificationHandlersIfNeeded;
-(void)_reloadForCompleteInvalidation;
-(void)_reloadForPlayerPathInvalidation;
-(void)_requestContentItemArtwork:(id)arg0 forPlayerPath:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_requestPlaybackQueueForPlayerPath:(id)arg0 includeArtwork:(BOOL)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_requestSupportedCommandsForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_resolvePlayerPath:(id)arg0 completion:(id)arg1 ;
-(void)_unregisterForEndpointChanges;
-(void)_unregisterForPlayerPathInvalidations;
-(void)_unregisterNotificationHandlers;
-(void)beginLoadingUpdates;
-(void)dealloc;
-(void)destinationWithCompletion:(id)arg0 ;
-(void)endLoadingUpdates;


@end


#endif