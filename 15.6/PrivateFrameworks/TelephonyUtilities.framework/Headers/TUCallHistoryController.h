// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCALLHISTORYCONTROLLER_H
#define TUCALLHISTORYCONTROLLER_H

@class CHManager, NSString, NSMutableSet, NSArray;
@protocol TUCallProviderManagerDelegate;

#import <Foundation/Foundation.h>

#import "TUCallProviderManager.h"
#import "TUDispatcher.h"

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate>



@property (retain, nonatomic) CHManager *callHistoryManager; // ivar: _callHistoryManager
@property (retain, nonatomic) TUCallProviderManager *callProviderManager; // ivar: _callProviderManager
@property (nonatomic) NSUInteger coalescingStrategy; // ivar: _coalescingStrategy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TUDispatcher *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *metadataPreCachedOptions; // ivar: _metadataPreCachedOptions
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) NSArray *recentCalls; // ivar: _recentCalls
@property (retain, nonatomic) TUDispatcher *simpleIvarDispatcher; // ivar: _simpleIvarDispatcher
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *thirdPartyCallProviders; // ivar: _thirdPartyCallProviders
@property (nonatomic) NSUInteger unreadCallCount; // ivar: _unreadCallCount


+(id)callHistoryControllerWithCoalescingStrategy:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
+(id)sharedController;
+(id)sharedControllerWithCoalescingStrategy:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)_callHistoryCoalescingStrategyForCoalescingStrategy:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoalescingStrategy:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)recentCallsWithPredicate:(id)arg0 ;
-(void)_updateCallHistoryManagerUsingCurrentOptions;
-(void)boostQualityOfService;
-(void)callHistoryDatabaseChanged:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllRecentCalls;
-(void)deleteRecentCall:(id)arg0 ;
-(void)deleteRecentCalls:(id)arg0 ;
-(void)dispatcherDidFinishBoost:(id)arg0 ;
-(void)loadDispatchQueue;
-(void)markRecentAudioCallsAsRead;
-(void)markRecentCallsAsRead;
-(void)markRecentCallsAsReadWithPredicate:(id)arg0 ;
-(void)markRecentVideoCallsAsRead;
-(void)providersChangedForProviderManager:(id)arg0 ;
-(void)reloadWithOptions:(NSUInteger)arg0 ;


@end


#endif