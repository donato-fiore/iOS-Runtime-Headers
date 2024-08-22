// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCAMERARECORDINGEVENTMANAGER_H
#define HMCAMERARECORDINGEVENTMANAGER_H

@class NSString, NSHashTable;
@protocol HMCameraClipManagerObserver, HMCameraRecordingReachabilityEventManagerObserver, HMFLogging;

#import <Foundation/Foundation.h>

#import "HMCameraClipManager.h"
#import "_HMContext.h"
#import "HMCameraRecordingReachabilityEventManager.h"

@interface HMCameraRecordingEventManager : NSObject <HMCameraClipManagerObserver, HMCameraRecordingReachabilityEventManagerObserver, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) HMCameraClipManager *clipManager; // ivar: _clipManager
@property (readonly) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSHashTable *observers; // ivar: _observers
@property (readonly) HMCameraRecordingReachabilityEventManager *reachabilityEventManager; // ivar: _reachabilityEventManager
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithContext:(id)arg0 clipManager:(id)arg1 reachabilityEventManager:(id)arg2 ;
-(id)mergedRecordingEventsWithRecordingEvents1:(id)arg0 recordingEvents2:(id)arg1 limit:(NSUInteger)arg2 shouldOrderAscending:(BOOL)arg3 ;
-(void)addObserver:(id)arg0 ;
-(void)clipManager:(id)arg0 didRemoveClipsWithUUIDs:(id)arg1 ;
-(void)clipManager:(id)arg0 didUpdateClips:(id)arg1 ;
-(void)deleteAllEventsWithCompletionHandler:(id)arg0 ;
-(void)fetchAllEventsWithCompletion:(id)arg0 ;
-(void)fetchCountOfAllEventsWithCompletion:(id)arg0 ;
-(void)fetchCountOfEventsWithDateInterval:(id)arg0 completion:(id)arg1 ;
-(void)fetchEventsWithDateInterval:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchEventsWithDateInterval:(id)arg0 limit:(NSUInteger)arg1 shouldOrderAscending:(BOOL)arg2 completion:(id)arg3 ;
-(void)fetchEventsWithDateInterval:(id)arg0 quality:(NSInteger)arg1 limit:(NSUInteger)arg2 shouldOrderAscending:(BOOL)arg3 completion:(id)arg4 ;
-(void)notifyObserversOfUpdatedEvents:(id)arg0 removedEventsWithUUIDs:(id)arg1 ;
-(void)performCloudPullWithCompletion:(id)arg0 ;
-(void)reachabilityEventManager:(id)arg0 didRemoveReachabilityEventsWithUUIDs:(id)arg1 ;
-(void)reachabilityEventManager:(id)arg0 didUpdateReachabilityEvents:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif