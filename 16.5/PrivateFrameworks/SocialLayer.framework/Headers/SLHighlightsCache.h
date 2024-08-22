// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLHIGHLIGHTSCACHE_H
#define SLHIGHLIGHTSCACHE_H

@class NSString, NSHashTable, NSArray, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SLInteractionHandler.h"

@interface SLHighlightsCache : NSObject

@property (readonly, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) id *clientUpdateHighlightsBlock; // ivar: _clientUpdateHighlightsBlock
@property (retain, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy, nonatomic) NSArray *highlights;
@property (retain, nonatomic) NSMutableDictionary *highlightsCache; // ivar: _highlightsCache
@property (retain, nonatomic) NSObject<OS_dispatch_group> *initialFetchGroup; // ivar: _initialFetchGroup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initialFetchWaitingQueue; // ivar: _initialFetchWaitingQueue
@property (retain, nonatomic) SLInteractionHandler *interactionHandler; // ivar: _interactionHandler
@property (readonly, nonatomic) int notificationTokenDeleteHighlights; // ivar: _notificationTokenDeleteHighlights
@property (readonly, nonatomic) int notificationTokenRefreshHighlights; // ivar: _notificationTokenRefreshHighlights
@property (readonly, nonatomic) int notificationTokenScreenTimeChange; // ivar: _notificationTokenScreenTimeChange
@property (copy, nonatomic) id *systemUpdateHighlightsBlock; // ivar: _systemUpdateHighlightsBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *threadSafePropertyQueue; // ivar: _threadSafePropertyQueue


+(id)highlightFetchQueue;
+(id)sharedCache;
-(id)_updateHighlightsWithPreviousUpdateBlock:(SEL)arg0 debounceInterval:(id)arg1 ;
-(id)init;
-(void)_fetchAndUpdateHighlightsImmediately;
-(void)_leaveInitialFetchGroupIfNecessary;
-(void)_notifyDelegatesWithNotificationType:(NSInteger)arg0 withHighlights:(id)arg1 ;
-(void)_registerNotifications;
-(void)_updateHighlightsForSystemNotification;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)didDeleteHighlightsOrAttributions;
-(void)fetchHighlightsWithLimit:(NSUInteger)arg0 variant:(id)arg1 completionBlock:(id)arg2 ;
-(void)removeDelegate:(id)arg0 ;
// -(void)runAfterInitialFetch:(id)arg0 onQueue:(unk)arg1  ;
-(void)updateHighlights;


@end


#endif