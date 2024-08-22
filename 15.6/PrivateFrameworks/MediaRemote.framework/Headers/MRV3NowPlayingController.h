// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRV3NOWPLAYINGCONTROLLER_H
#define MRV3NOWPLAYINGCONTROLLER_H

@class NSString, NSMutableArray, NSDate, MSVVariableIntervalTimer;
@protocol MRDestinationResolverDelegate, MRNowPlayingControllerImpl, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRNowPlayingControllerHelper.h"
#import "MRNowPlayingControllerConfiguration.h"
#import "MRNowPlayingControllerDestination.h"
#import "MRDestinationResolver.h"
#import "MRNowPlayingPlayerResponse.h"

@interface MRV3NowPlayingController : NSObject <MRDestinationResolverDelegate, MRNowPlayingControllerImpl>

 {
    MRNowPlayingControllerHelper *_helper;
}


@property (copy, nonatomic) MRNowPlayingControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *deferredContentItemsToMerge; // ivar: _deferredContentItemsToMerge
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) MRNowPlayingControllerDestination *destination;
@property (retain, nonatomic) MRDestinationResolver *destinationResolver; // ivar: _destinationResolver
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MRNowPlayingControllerHelper *helper;
@property (nonatomic) BOOL isResolving; // ivar: _isResolving
@property (nonatomic) BOOL isUpdating; // ivar: _isUpdating
@property (retain, nonatomic) NSDate *lastQueueRequestDate; // ivar: _lastQueueRequestDate
@property (retain, nonatomic) MSVVariableIntervalTimer *loadRetryTimer; // ivar: _loadRetryTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL registeredForNotifications; // ivar: _registeredForNotifications
@property (nonatomic) BOOL requestingQueue; // ivar: _requestingQueue
@property (copy, nonatomic) MRNowPlayingPlayerResponse *response; // ivar: _response
@property (readonly) Class superclass;


-(id)_loadNowPlayingStateForPlayerPath:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_handleClientPropertiesDidChange:(id)arg0 ;
-(void)_handlePlaybackQueueChangedNotification:(id)arg0 ;
-(void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)arg0 ;
-(void)_handlePlaybackQueueContentItemsChangedNotification:(id)arg0 ;
-(void)_handlePlaybackStateChangedNotification:(id)arg0 ;
-(void)_handleSupportedCommandsChangedNotification:(id)arg0 ;
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
-(void)_onQueue_clearStateForResolvedPlayerPath;
-(void)_registerNotificationHandlersForResolvedPlayerPath:(id)arg0 ;
-(void)_reloadWithReason:(id)arg0 ;
-(void)_requestClientPropertiesForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_requestContentItemArtwork:(id)arg0 forPlayerPath:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_requestPlaybackQueueForPlayerPath:(id)arg0 request:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_requestPlayerLastPlayingDateForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_requestSupportedCommandsForPlayerPath:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_unregisterNotificationHandlers;
-(void)beginLoadingUpdates;
-(void)beginResolving;
-(void)dealloc;
-(void)destinationResolver:(id)arg0 didFailWithError:(id)arg1 ;
-(void)destinationResolver:(id)arg0 playerPathDidChange:(id)arg1 ;
-(void)destinationResolverDestinationDidInvalidate:(id)arg0 ;
-(void)destinationWithCompletion:(id)arg0 ;
-(void)endLoadingUpdates;
-(void)sendCommand:(unsigned int)arg0 options:(id)arg1 appOptions:(unsigned int)arg2 completion:(id)arg3 ;


@end


#endif