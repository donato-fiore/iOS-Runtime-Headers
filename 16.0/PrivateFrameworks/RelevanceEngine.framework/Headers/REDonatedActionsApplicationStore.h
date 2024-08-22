// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDONATEDACTIONSAPPLICATIONSTORE_H
#define REDONATEDACTIONSAPPLICATIONSTORE_H

@class NSMutableSet, NSString;
@protocol REDonatedActionFilteredCacheDelegate, OS_dispatch_queue, REMLElementRanker;

#import <Foundation/Foundation.h>

#import "REDonatedActionFilteredCache.h"
#import "REUpNextScheduler.h"
#import "RERelevanceEngine.h"

@interface REDonatedActionsApplicationStore : NSObject <REDonatedActionFilteredCacheDelegate>

 {
    REDonatedActionFilteredCache *_cache;
    REUpNextScheduler *_scheduler;
    REUpNextScheduler *_applicationScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_applications;
    RERelevanceEngine *_filteringEngine;
    id<REMLElementRanker> *_elementRanker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldFilterDonation:(id)arg0 ;
-(id)init;
-(id)initWithLocationManager:(id)arg0 ;
-(void)_notify;
-(void)_notifyApplicationsUpdates;
-(void)_queue_loadApplicationsIfNeededWithCompletion:(id)arg0 ;
-(void)_sortDonationsByCount:(id)arg0 completion:(id)arg1 ;
-(void)donatedActionFilteredCacheCountDidChange;
-(void)donatedActionFilteredCacheDidAddDonation:(id)arg0 ;
-(void)donatedActionFilteredCacheDonationRemoved;
// -(void)fetchAllUniqueDonationsWithBlock:(id)arg0 completion:(unk)arg1  ;
-(void)fetchApplicationsProvidingDonations:(id)arg0 ;
-(void)fetchDonationWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchFirstPerformedActionDate:(id)arg0 ;
-(void)fetchPerformedCountForAction:(id)arg0 completion:(id)arg1 ;
-(void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg0 actionIdentifier:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchTopDonationsForApplications:(id)arg0 fromOnlyRecentPlatform:(BOOL)arg1 block:(id)arg2 ;


@end


#endif