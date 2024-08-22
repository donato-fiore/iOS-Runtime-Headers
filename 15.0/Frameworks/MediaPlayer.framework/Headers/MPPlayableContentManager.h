// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPPLAYABLECONTENTMANAGER_H
#define MPPLAYABLECONTENTMANAGER_H

@class NSMutableSet, NSOperationQueue, CARSessionStatus, NSString, NSArray;
@protocol CARSessionObserving, OS_dispatch_queue, MPPlayableContentDataSource, MPPlayableContentDelegate;

#import <Foundation/Foundation.h>

#import "MPPlayableContentManagerContext.h"

@interface MPPlayableContentManager : NSObject <CARSessionObserving>

 {
    NSMutableSet *_mutatedContentItems;
    NSMutableSet *_contentItemIdentifiersSentToMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_artworkUpdateQueue;
    BOOL _coalescingUpdates;
    BOOL _scheduledSupportedAPIsChange;
    CARSessionStatus *_currentSessionStatus;
}


@property (retain, nonatomic) MPPlayableContentManagerContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<MPPlayableContentDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPPlayableContentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *nowPlayingIdentifiers; // ivar: _nowPlayingIdentifiers
@property (readonly) Class superclass;


+(BOOL)_deviceIsCarplayCapable;
+(id)sharedContentManager;
-(BOOL)_areContentLimitsEnforced;
-(BOOL)_contentItemWasSentToMediaRemote:(id)arg0 ;
-(BOOL)_musicListsLimited;
-(BOOL)_onQueueContentItemWasSentToMediaRemote:(id)arg0 ;
-(id)_init;
-(id)init;
-(void)_browsableContentEndpointChanged:(id)arg0 ;
-(void)_contentItemChangedNotification:(id)arg0 ;
-(void)_enqueueArtworkUpdate:(id)arg0 size:(struct CGSize )arg1 withCompletion:(id)arg2 ;
-(void)_enqueueArtworkUpdate:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handlePlaybackInitializationCompletedWithContext:(id)arg0 error:(id)arg1 ;
-(void)_limitedUIChanged:(id)arg0 ;
-(void)_markContentItemsAsSentToMediaRemote:(id)arg0 ;
-(void)_pushContentItemsUpdate;
-(void)_scheduleUpdateSupportedAPIs;
-(void)_setupMediaRemoteEndpoint;
-(void)_setupNotifications;
-(void)_tearDownMediaRemoteEndpoint;
-(void)_tearDownNotifications;
-(void)_updateSupportedAPIs;
-(void)beginUpdates;
-(void)dealloc;
-(void)endUpdates;
-(void)reloadData;
-(void)sessionDidConnect:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;


@end


#endif