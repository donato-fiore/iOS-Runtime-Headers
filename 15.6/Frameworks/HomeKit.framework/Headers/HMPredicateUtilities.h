// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMPREDICATEUTILITIES_H
#define HMPREDICATEUTILITIES_H


#import <Foundation/Foundation.h>


@interface HMPredicateUtilities : NSObject



+(BOOL)areOnlyHourAndMinuteSet:(id)arg0 ;
+(BOOL)containsPresenceEvents:(id)arg0 ;
+(BOOL)validatePredicate:(id)arg0 ;
+(id)bitwiseAndValueWithKeyPath:(id)arg0 inComparisonPredicate:(id)arg1 validValues:(NSInteger)arg2 ;
+(id)bitwiseAndValueWithKeyPath:(id)arg0 inPredicate:(id)arg1 validValues:(NSInteger)arg2 ;
+(id)personFamiliarityOptionsInComparisonPredicate:(id)arg0 ;
+(id)rewritePredicateForClient:(id)arg0 home:(id)arg1 ;
+(id)rewritePredicateForDaemon:(id)arg0 characteristicIsInvalid:(*BOOL)arg1 ;
+(id)significantEventTypesInComparisonPredicate:(id)arg0 ;


@end


#endif