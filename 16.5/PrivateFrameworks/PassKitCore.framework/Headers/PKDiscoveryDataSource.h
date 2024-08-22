// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDISCOVERYDATASOURCE_H
#define PKDISCOVERYDATASOURCE_H

@class AMSMetrics, NSArray, NSString;
@protocol PKDiscoveryObserver, OS_dispatch_queue, PKDiscoveryDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "PKDiscoveryService.h"

@interface PKDiscoveryDataSource : NSObject <PKDiscoveryObserver>

 {
    PKDiscoveryService *_discoveryService;
    AMSMetrics *_AMPMetrics;
    os_unfair_lock_s _articleLayoutsLock;
    NSArray *_articleLayouts;
    BOOL _updatingArticles;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (retain, nonatomic) NSArray *articleLayouts;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDiscoveryDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMiniCardsAllowed) BOOL miniCardsAllowed; // ivar: _miniCardsAllowed
@property (readonly) Class superclass;


-(BOOL)_queue_updateArticleLayouts:(id)arg0 ;
-(id)_articleLayoutForItemIdentifier:(id)arg0 ;
-(id)cachedDiscoveryArticleLayoutForItemWithIdentifier:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_addDismissActionToArticleLayouts:(id)arg0 ;
-(void)_manifestAllowsMiniCardsWithCompletion:(id)arg0 ;
-(void)_updateArticlesWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)discoveryArticleLayoutForItemWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)discoveryService:(id)arg0 completedCTAForItem:(id)arg1 ;
-(void)discoveryService:(id)arg0 receivedUpdatedDiscoveryArticleLayouts:(id)arg1 ;
-(void)displayedDiscoveryItem:(id)arg0 isWelcomeCard:(BOOL)arg1 afterSwipingToCard:(BOOL)arg2 multipleStoryCardsAvailable:(BOOL)arg3 callToAction:(NSInteger)arg4 cardSize:(NSInteger)arg5 ;
-(void)tappedDiscoveryItem:(id)arg0 callToAction:(id)arg1 cardSize:(NSInteger)arg2 ;
-(void)updateArticleLayouts;


@end


#endif