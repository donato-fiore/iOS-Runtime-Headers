// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDISCOVERYSERVICE_H
#define PKDISCOVERYSERVICE_H

@class NSHashTable;
@protocol PKDiscoveryServiceExportedInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKXPCService.h"

@interface PKDiscoveryService : NSObject <PKDiscoveryServiceExportedInterface>

 {
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSHashTable *_observers;
    os_unfair_lock_s _observersLock;
}




+(id)sharedInstance;
-(NSInteger)welcomeCardCount;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)errorHandlerForMethod:(SEL)arg0 completion:(SEL)arg1 ;
-(id)init;
-(id)observers;
-(void)addObserver:(id)arg0 ;
-(void)beginReporingDiscoveryAnalytics;
-(void)completedCTAForItem:(id)arg0 ;
-(void)completedDiscoveryItemCTAWithCompletion:(id)arg0 ;
-(void)deleteRuleWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)dialogRequestsChangedForPlacement:(id)arg0 ;
-(void)dialogRequestsForPlacement:(id)arg0 completion:(id)arg1 ;
-(void)discoveryArticleLayoutForItemWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)discoveryArticleLayoutsUpdated:(id)arg0 ;
-(void)discoveryArticleLayoutsWithCompletion:(id)arg0 ;
-(void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)arg0 active:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)discoveryEngagementMessagesUpdated;
-(void)discoveryItemWithIdentifier:(id)arg0 callToAction:(NSInteger)arg1 isScrollable:(BOOL)arg2 ;
-(void)discoveryItemWithIdentifier:(id)arg0 callToAction:(NSInteger)arg1 wasScrolledToTheBottom:(BOOL)arg2 ;
-(void)discoveryItemWithIdentifier:(id)arg0 launchedWithReferralSource:(NSUInteger)arg1 ;
-(void)discoveryItemsWithCompletion:(id)arg0 ;
-(void)dismissedDiscoveryItemWithIdentifier:(id)arg0 callToAction:(NSInteger)arg1 cardSize:(NSInteger)arg2 ;
-(void)dismissedDiscoveryItems:(id)arg0 ;
-(void)displayedDiscoveryEngagementMessageWithIdentifier:(id)arg0 ;
-(void)displayedDiscoveryItemWithIdentifier:(id)arg0 isWelcomeCard:(BOOL)arg1 afterSwipingToCard:(BOOL)arg2 multipleStoryCardsAvailable:(BOOL)arg3 callToAction:(NSInteger)arg4 cardSize:(NSInteger)arg5 ;
-(void)endReporingDiscoveryAnalytics;
-(void)evaluateRulesWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)expandedDiscoveryItemWithIdentifier:(id)arg0 callToAction:(NSInteger)arg1 afterSwipingToCard:(BOOL)arg2 multipleStoryCardsAvailable:(BOOL)arg3 cardSize:(NSInteger)arg4 ;
-(void)fetchUserProperties:(id)arg0 withParameters:(id)arg1 completion:(id)arg2 ;
-(void)fireEngagementEventNamed:(id)arg0 completion:(id)arg1 ;
-(void)insertDiscoveryEngagementMessages:(id)arg0 completion:(id)arg1 ;
-(void)insertDiscoveryItems:(id)arg0 discoveryArticleLayouts:(id)arg1 completion:(id)arg2 ;
-(void)insertRule:(id)arg0 completion:(id)arg1 ;
-(void)manifestAllowsMiniCardsWithCompletion:(id)arg0 ;
-(void)processDiscoveryItemsAndMessagesWithCompletion:(id)arg0 ;
-(void)removeDiscoveryMessageWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeDiscoveryUserNotificationsWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removedAllDiscoveryItems;
-(void)rulesWithCompletion:(id)arg0 ;
-(void)tappedDiscoveryItemWithIdentifier:(id)arg0 callToAction:(NSInteger)arg1 cardSize:(NSInteger)arg2 ;
-(void)updateDiscoveryEngagementMessageWithIdentifier:(id)arg0 forAction:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateDiscoveryItemWithIdentifier:(id)arg0 forAction:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateDiscoveryManifestWithCompletion:(id)arg0 ;


@end


#endif