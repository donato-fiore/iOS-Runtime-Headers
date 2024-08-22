// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCAMERACLIPMANAGER_H
#define HMCAMERACLIPMANAGER_H

@class NSMutableDictionary, NSString, NSUUID, NSNotificationCenter, NSHashTable;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMCameraClipManager : NSObject <HMFLogging, HMFMessageReceiver>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) NSMutableDictionary *clipsByFetchUUID; // ivar: _clipsByFetchUUID
@property (readonly) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *fetchClientFactory; // ivar: _fetchClientFactory
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSHashTable *observers; // ivar: _observers
@property (readonly, copy) NSUUID *profileUniqueIdentifier; // ivar: _profileUniqueIdentifier
@property (readonly) NSMutableDictionary *significantEventsByFetchUUID; // ivar: _significantEventsByFetchUUID
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *videoAssetContextsByClipUUID; // ivar: _videoAssetContextsByClipUUID


+(id)logCategory;
-(id)initWithContext:(id)arg0 profileUniqueIdentifier:(id)arg1 ;
-(id)initWithContext:(id)arg0 profileUniqueIdentifier:(id)arg1 notificationCenter:(id)arg2 ;
-(id)logIdentifier;
-(void)addObserver:(id)arg0 ;
-(void)configure;
-(void)dealloc;
-(void)deleteAllClipsWithCompletionHandler:(id)arg0 ;
-(void)deleteClipWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)donateClipsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllClipsWithCompletion:(id)arg0 ;
-(void)fetchAllSignificantEventsWithCompletion:(id)arg0 ;
-(void)fetchClipForSignificantEventWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchClipWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchClipsWithDateInterval:(id)arg0 limit:(NSUInteger)arg1 shouldOrderAscending:(BOOL)arg2 completion:(id)arg3 ;
-(void)fetchClipsWithDateInterval:(id)arg0 quality:(NSInteger)arg1 limit:(NSUInteger)arg2 shouldOrderAscending:(BOOL)arg3 completion:(id)arg4 ;
-(void)fetchCountOfAllClipsWithCompletion:(id)arg0 ;
-(void)fetchCountOfClipsWithDateInterval:(id)arg0 completion:(id)arg1 ;
-(void)fetchCountOfClipsWithDateInterval:(id)arg0 quality:(NSInteger)arg1 completion:(id)arg2 ;
-(void)fetchFaceCropDataRepresentationForSignificantEventWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchFaceCropURLForSignificantEventWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchHeroFrameDataRepresentationForClipWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchHeroFrameURLOfClipWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)fetchSignificantEventsWithDateInterval:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchSignificantEventsWithDateInterval:(id)arg0 limit:(NSUInteger)arg1 shouldOrderAscending:(BOOL)arg2 completion:(id)arg3 ;
-(void)fetchSignificantEventsWithUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)handleDaemonReconnectedNotification:(id)arg0 ;
-(void)handleDidChangeClipsMessage:(id)arg0 ;
-(void)handleDidChangeSignificantEventsMessage:(id)arg0 ;
-(void)handleFaceMisclassificationForSignificantEvent:(id)arg0 completion:(id)arg1 ;
-(void)importClipsWithImportData:(id)arg0 completion:(id)arg1 ;
-(void)performCloudPullWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)subscribe;
-(void)unsubscribe;


@end


#endif