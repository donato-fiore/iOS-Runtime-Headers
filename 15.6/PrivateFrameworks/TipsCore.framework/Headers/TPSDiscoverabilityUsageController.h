// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSDISCOVERABILITYUSAGECONTROLLER_H
#define TPSDISCOVERABILITYUSAGECONTROLLER_H

@class NSString, NSSortDescriptor;

#import <Foundation/Foundation.h>

#import "TPSDuetDataProvider.h"

@interface TPSDiscoverabilityUsageController : NSObject

@property (readonly, copy, nonatomic) NSString *currentOSBuildVersion; // ivar: _currentOSBuildVersion
@property (readonly, copy, nonatomic) NSString *currentOSMajorVersion; // ivar: _currentOSMajorVersion
@property (readonly, nonatomic) TPSDuetDataProvider *duetProvider; // ivar: _duetProvider
@property (readonly, copy, nonatomic) NSSortDescriptor *eventSortDescriptor; // ivar: _eventSortDescriptor


+(id)sharedInstance;
-(NSUInteger)_evaluateFrequencyControlForBundleID:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)_discoverabilityUsageStream;
-(id)_eligibleContentForBundleID:(id)arg0 context:(id)arg1 fromEvents:(id)arg2 ;
-(id)_eventsPredicateForAbsentUsageFlag;
-(id)_eventsPredicateForBundleID:(id)arg0 ;
-(id)_eventsPredicateForBundleID:(id)arg0 sinceDate:(id)arg1 ;
-(id)_eventsPredicateForContentID:(id)arg0 sinceDate:(id)arg1 ;
-(id)_eventsPredicateForContentIDs:(id)arg0 sinceDate:(id)arg1 ;
-(id)_eventsPredicateForHintDisplayed;
-(id)_eventsPredicateForInactiveContentIDs:(id)arg0 sinceDate:(id)arg1 ;
-(id)_eventsPredicateForInactiveHintStates;
-(id)_filterFrequencyControlForTips:(id)arg0 bundleID:(id)arg1 context:(id)arg2 error:(*id)arg3 ;
-(id)_initWithDirectory:(id)arg0 ;
-(id)_majorVersionFilterPredicate;
-(id)_majorVersionForBuildVersion:(id)arg0 ;
-(id)_metaDataForUsageEvent:(id)arg0 ;
-(id)_tipIdentifiersFromTips:(id)arg0 ;
-(id)eligibleContentForBundleID:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)_commonInit;
-(void)addContentUsageEvents:(id)arg0 completion:(id)arg1 ;
-(void)eligibleContentForBundleID:(id)arg0 context:(id)arg1 completion:(id)arg2 ;


@end


#endif