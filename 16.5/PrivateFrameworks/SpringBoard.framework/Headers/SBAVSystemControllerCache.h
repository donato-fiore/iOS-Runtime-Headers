// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAVSYSTEMCONTROLLERCACHE_H
#define SBAVSYSTEMCONTROLLERCACHE_H

@class NSNotificationCenter, NSHashTable, AVOutputContext, NSMutableDictionary, BSAtomicSignal, NSString, NSDictionary, NSArray;
@protocol OS_dispatch_queue, SBAVSystemControllerDataProviding;

#import <Foundation/Foundation.h>


@interface SBAVSystemControllerCache : NSObject {
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSNotificationCenter *_notificationCenter;
    id *_dataProviderInitializer;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    AVOutputContext *_queue_outputContext;
    id<SBAVSystemControllerDataProviding> *_queue_dataProvider;
    NSMutableDictionary *_notificationToHandlerMap;
    NSMutableDictionary *_notificationToBackgroundQueryCancellationSignalMap;
    BOOL _queue_initialized;
    BSAtomicSignal *_queue_serverDeathSignal;
    BOOL _queue_fullyMuted;
    BOOL _queue_audioSessionPlaying;
    NSString *_queue_activeAudioRoute;
    NSDictionary *_queue_activeAudioRouteInfo;
    NSArray *_queue_pickableRoutes;
    NSArray *_queue_activeOutputDevices;
    BOOL _outputContextSupportsMultipleOutputDevices;
    BOOL _queue_airplayDisplayActive;
    NSObject<OS_dispatch_queue> *_backgroundQueryQueue;
}


@property (readonly, copy, nonatomic) NSString *activeAudioRoute;
@property (readonly, copy, nonatomic) NSDictionary *activeAudioRouteInfo;
@property (readonly, copy, nonatomic) NSArray *activeOutputDevices;
@property (readonly, nonatomic, getter=isAirplayDisplayActive) BOOL airplayDisplayActive;
@property (readonly, nonatomic, getter=isAudioSessionPlaying) BOOL audioSessionPlaying;
@property (readonly, nonatomic, getter=isFullyMuted) BOOL fullyMuted;
@property (readonly, copy, nonatomic) NSArray *pickableRoutes;


+(id)sharedInstance;
-(id)_queryActiveOutputDevicesFromContext:(id)arg0 ;
-(id)_queue_backgroundQueryCancellationSignalForNotificationCreatingIfNecessary:(id)arg0 ;
-(id)init;
-(id)initWithCallOutQueue:(id)arg0 notificationCenter:(id)arg1 dataProviderInitializer:(id)arg2 ;
-(void)_queue_notifyObserversWithBlock:(id)arg0 ;
-(void)_queue_rebuildCache;
-(void)_queue_signalBackgroundQueryCancellationForNotification:(id)arg0 ;
// -(void)_queue_updateActiveAudioRouteFromNotification:(id)arg0 allowingBackgroundQueries:(BOOL)arg1 backgroundQueriesCancelledBlock:(id)arg2 cancelBackgroundQueriesBlock:(unk)arg3 completion:(id)arg4  ;
// -(void)_queue_updateActiveOutputDevicesFromNotification:(id)arg0 allowingBackgroundQueries:(BOOL)arg1 backgroundQueriesCancelledBlock:(id)arg2 cancelBackgroundQueriesBlock:(unk)arg3 completion:(id)arg4  ;
// -(void)_queue_updateAirplayDisplayActiveFromNotification:(id)arg0 allowingBackgroundQueries:(BOOL)arg1 backgroundQueriesCancelledBlock:(id)arg2 cancelBackgroundQueriesBlock:(unk)arg3 completion:(id)arg4  ;
// -(void)_queue_updateAudioSessionPlayingFromNotification:(id)arg0 allowingBackgroundQueries:(BOOL)arg1 backgroundQueriesCancelledBlock:(id)arg2 cancelBackgroundQueriesBlock:(unk)arg3 completion:(id)arg4  ;
// -(void)_queue_updateFullyMutedFromNotification:(id)arg0 allowingBackgroundQueries:(BOOL)arg1 backgroundQueriesCancelledBlock:(id)arg2 cancelBackgroundQueriesBlock:(unk)arg3 completion:(id)arg4  ;
// -(void)_queue_updatePickableRoutesFromNotification:(id)arg0 allowingBackgroundQueries:(BOOL)arg1 backgroundQueriesCancelledBlock:(id)arg2 cancelBackgroundQueriesBlock:(unk)arg3 completion:(id)arg4  ;
-(void)_receiveUpdatedValueFromNotification:(id)arg0 ;
-(void)_serverDied:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)fetchPickableRoutesWithCompletion:(id)arg0 ;


@end


#endif