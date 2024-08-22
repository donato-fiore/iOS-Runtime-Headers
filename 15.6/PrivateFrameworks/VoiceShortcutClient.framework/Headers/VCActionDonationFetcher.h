// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCACTIONDONATIONFETCHER_H
#define VCACTIONDONATIONFETCHER_H


#import <Foundation/Foundation.h>


@interface VCActionDonationFetcher : NSObject



+(BOOL)shouldFilterDonationsForAppWithApplicationBundleIdentifier:(id)arg0 ;
+(BOOL)shouldKeepAction:(id)arg0 forAppWithBundleIdentifier:(id)arg1 filteringForTopLevel:(BOOL)arg2 ;
+(BOOL)shouldKeepActionWithAppBundleIdentifierForDisplay:(id)arg0 ;
+(id)actionPredictionBlacklist;
+(id)appPredictionBlacklist;
+(id)donationFromEvent:(id)arg0 ;
+(id)donationFromEvent:(id)arg0 filteringForTopLevel:(BOOL)arg1 ;
+(id)donationWithUUID:(id)arg0 ;
+(id)fetchDonationsWithPredicate:(id)arg0 limit:(NSUInteger)arg1 filteringForTopLevel:(BOOL)arg2 ;
+(id)fetchDonationsWithPredicate:(id)arg0 limit:(NSUInteger)arg1 filteringForTopLevel:(BOOL)arg2 directAccess:(BOOL)arg3 ;
+(id)fetchEventsWithPredicate:(id)arg0 limit:(NSUInteger)arg1 ;
+(id)fetchEventsWithPredicate:(id)arg0 limit:(NSUInteger)arg1 directAccess:(BOOL)arg2 ;
+(id)filterDonations:(id)arg0 forApplicationBundleIdentifier:(id)arg1 ;
+(id)isEligibleForPredictionPredicate;
+(id)keyPathForStream:(id)arg0 ;
+(id)predicateForShortcutAvailabilityOptions:(NSUInteger)arg0 ;
+(id)streams;
+(id)whitelistedDonationsWithOptions:(NSUInteger)arg0 ;
+(void)fetchDonationsForApplicationBundleIdentifier:(id)arg0 limit:(NSUInteger)arg1 filteringForTopLevel:(BOOL)arg2 filteringForIsEligibleForPrediction:(BOOL)arg3 filteringForRecent:(BOOL)arg4 completion:(id)arg5 ;
+(void)fetchDonationsForApplicationBundleIdentifier:(id)arg0 limit:(NSUInteger)arg1 shortcutAvailability:(NSUInteger)arg2 completion:(id)arg3 ;
+(void)fetchDonationsWithLimit:(NSUInteger)arg0 filteringForIsEligibleForPrediction:(BOOL)arg1 completion:(id)arg2 ;
+(void)getPredicateForIntentsWithApplicationBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:(id)arg0 filteringForIsEligibleForPrediction:(BOOL)arg1 completionHandler:(id)arg2 ;
+(void)sourceAppIdentifierArrayForApplicationBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif