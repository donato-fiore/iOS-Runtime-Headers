// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFHOMEANNOUNCEMENTOBSERVER_H
#define AFHOMEANNOUNCEMENTOBSERVER_H

@class NSHashTable, ANLocalPlaybackSession, NSString;
@protocol ANLocalPlaybackSessionDelegate, AFNotifyObserverDelegate, AFInvalidating, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"
#import "AFNotifyObserver.h"
#import "AFHomeAnnouncement.h"
#import "AFHomeAnnouncementSnapshot.h"

@interface AFHomeAnnouncementObserver : NSObject <ANLocalPlaybackSessionDelegate, AFNotifyObserverDelegate, AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSHashTable *_listeners;
    AFNotifyObserver *_notifyObserver;
    ANLocalPlaybackSession *_localPlaybackSession;
    NSInteger _groupingDepth;
    NSObject<OS_dispatch_group> *_snapshotGroup;
    NSUInteger _state;
    AFHomeAnnouncement *_lastPlayedAnnouncement;
    AFHomeAnnouncementSnapshot *_snapshot;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_localPlaybackSession:(BOOL)arg0 ;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(void)_beginGrouping;
-(void)_endGrouping;
-(void)_enumerateListenersUsingBlock:(id)arg0 ;
-(void)_fetchStateAndLastPlayedAnnouncementForReason:(id)arg0 completion:(id)arg1 ;
-(void)_handleNotifyStateChangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)_invalidateLocalPlaybackSession;
-(void)_setUp;
-(void)_tearDown;
-(void)_updateLastPlayedAnnouncement:(id)arg0 ;
-(void)_updateSnapshot:(id)arg0 ;
-(void)_updateState:(NSUInteger)arg0 ;
-(void)addListener:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)getSnapshotWithCompletion:(id)arg0 ;
-(void)getStateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)notifyObserver:(id)arg0 didChangeStateFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)notifyObserver:(id)arg0 didReceiveNotificationWithToken:(int)arg1 ;
-(void)removeListener:(id)arg0 ;


@end


#endif