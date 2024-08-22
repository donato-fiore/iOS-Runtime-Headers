// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONDONATIONRECOMMENDER_H
#define WFACTIONDONATIONRECOMMENDER_H

@class NSMutableDictionary, NSArray, NSSet;
@protocol WFApplicationStateObserver, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFCachedDonations.h"

@interface WFActionDonationRecommender : NSObject <WFApplicationStateObserver>



@property (retain, nonatomic) NSObject<OS_dispatch_group> *activeFetchGroup; // ivar: _activeFetchGroup
@property (retain, nonatomic) WFCachedDonations *cachedActionPredictionsForAllApps; // ivar: _cachedActionPredictionsForAllApps
@property (retain, nonatomic) NSMutableDictionary *cachedActionPredictionsPerApp; // ivar: _cachedActionPredictionsPerApp
@property (retain, nonatomic) WFCachedDonations *cachedDonationsForAllApps; // ivar: _cachedDonationsForAllApps
@property (retain, nonatomic) NSMutableDictionary *cachedDonationsPerApp; // ivar: _cachedDonationsPerApp
@property (readonly, nonatomic) NSArray *defaultRecommendations; // ivar: _defaultRecommendations
@property (readonly, nonatomic) NSSet *excludedAppBundleIdentifiers; // ivar: _excludedAppBundleIdentifiers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)disabledSpotlightApps;
+(id)donationsByRemovingDuplicatesFromDonations:(id)arg0 excludingAppIdentifiers:(id)arg1 includingSingleDonationPerApp:(BOOL)arg2 ;
+(id)filterDonationsForTitleLength:(id)arg0 ;
+(id)filteredActionDonations:(id)arg0 byApplicationAppIdentifier:(id)arg1 ;
+(id)getDonationsFromActionResponse:(id)arg0 ;
+(id)sharedRecommender;
-(id)init;
-(void)_fetchDonationsWithLimit:(NSUInteger)arg0 applicationBundleIdentifier:(id)arg1 includeSuggestedForAllApps:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)applicationContext:(id)arg0 applicationStateDidChange:(NSInteger)arg1 ;
-(void)cacheActionPredictionDonations:(id)arg0 forApplicationBundleIdentifier:(id)arg1 ballpark:(NSUInteger)arg2 ;
-(void)cacheRecentDonations:(id)arg0 forApplicationBundleIdentifier:(id)arg1 ballpark:(NSUInteger)arg2 ;
-(void)fetchDonationsWithLimit:(NSUInteger)arg0 applicationBundleIdentifier:(id)arg1 includeSuggestedForAllApps:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)fetchRecommendedDonationsForAppPredictionsWithCompletionHandler:(id)arg0 ;
-(void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif