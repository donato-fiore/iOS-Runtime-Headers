// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISCOVERYDATASOURCE_H
#define PKDISCOVERYDATASOURCE_H

@class NSArray, NSString;
@protocol PKDiscoveryObserver, OS_dispatch_queue, PKDiscoveryDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "PKDiscoveryService.h"

@interface PKDiscoveryDataSource : NSObject <PKDiscoveryObserver>

 {
    PKDiscoveryService *_discoveryService;
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
-(void)discoveryService:(id)arg0 receivedUpdatedDiscoveryArticleLayouts:(id)arg1 ;
-(void)displayedDiscoveryItemWithIdentifier:(id)arg0 ;
-(void)updateArticleLayouts;


@end


#endif