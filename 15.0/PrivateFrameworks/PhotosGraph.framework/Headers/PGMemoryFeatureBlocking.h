// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORYFEATUREBLOCKING_H
#define PGMEMORYFEATUREBLOCKING_H


#import <Foundation/Foundation.h>


@interface PGMemoryFeatureBlocking : NSObject



+(id)_bestAddressNodeAsCollectionInMomentNodeAsCollection:(id)arg0 ;
+(id)_blockableDateFeatureForFeatureNodes:(id)arg0 momentNodes:(id)arg1 ;
+(id)_blockableDateIntervalFeatureForFeatureNodes:(id)arg0 momentNodes:(id)arg1 memoryCategory:(NSUInteger)arg2 ;
+(id)_blockableHolidayFeatureForFeatureNodes:(id)arg0 momentNodes:(id)arg1 ;
+(id)_blockableLocationFeatureForFeatureNodes:(id)arg0 ;
+(id)_blockableLocationFeatureForFeatureNodes:(id)arg0 momentNodes:(id)arg1 ;
+(id)_blockableLocationFeatureForMomentNodes:(id)arg0 ;
+(id)_blockablePersonFeatureForFeatureNodes:(id)arg0 momentNodes:(id)arg1 ;
+(id)_momentNodesWithBlockedFeatureInGraph:(id)arg0 areaNamesWithNegativeFeedback:(id)arg1 holidayNamesWithNegativeFeedback:(id)arg2 datesWithNegativeFeedback:(id)arg3 personUUIDsWithNegativeFeedback:(id)arg4 locationsWithNegativeFeedback:(id)arg5 loggingConnection:(id)arg6 progressReporter:(id)arg7 ;
+(id)_prominentPersonNodeAsCollectionInMomentNodeAsCollection:(id)arg0 withPersonNodes:(id)arg1 maximumNumberOfPersonsAllowed:(NSUInteger)arg2 minimumPresenceThreshold:(CGFloat)arg3 maximumOthersPresenceThreshold:(CGFloat)arg4 ;
+(id)blockableFeaturesForFeatureNodes:(id)arg0 momentNodes:(id)arg1 memoryCategory:(NSUInteger)arg2 ;
+(id)momentNodesWithBlockedFeatureInGraph:(id)arg0 userFeedbackCalculator:(id)arg1 loggingConnection:(id)arg2 progressReporter:(id)arg3 ;


@end


#endif