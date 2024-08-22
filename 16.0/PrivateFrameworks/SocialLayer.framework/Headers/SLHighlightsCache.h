// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLHIGHLIGHTSCACHE_H
#define SLHIGHLIGHTSCACHE_H

@class NSString, NSHashTable, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SLInteractionHandler.h"

@interface SLHighlightsCache : NSObject

@property (readonly, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *highlightArrayQueue; // ivar: _highlightArrayQueue
@property (readonly, copy, nonatomic) NSArray *highlights;
@property (retain, nonatomic) NSMutableDictionary *highlightsCache; // ivar: _highlightsCache
@property (retain, nonatomic) SLInteractionHandler *interactionHandler; // ivar: _interactionHandler
@property (readonly, nonatomic) int notificationTokenDeleteHighlights; // ivar: _notificationTokenDeleteHighlights
@property (readonly, nonatomic) int notificationTokenRefreshHighlights; // ivar: _notificationTokenRefreshHighlights
@property (readonly, nonatomic) int notificationTokenScreenTimeChange; // ivar: _notificationTokenScreenTimeChange
@property (copy, nonatomic) id *updateHighlightsBlock; // ivar: _updateHighlightsBlock


+(id)highlightFetchQueue;
+(id)sharedCache;
-(id)init;
-(void)_notifyDelegatesWithNotificationType:(NSInteger)arg0 withHighlights:(id)arg1 ;
-(void)_registerNotifications;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)didDeleteHighlightsOrAttributions;
-(void)fetchHighlightsWithLimit:(NSUInteger)arg0 variant:(id)arg1 completionBlock:(id)arg2 ;
-(void)removeDelegate:(id)arg0 ;
-(void)updateHighlights;


@end


#endif