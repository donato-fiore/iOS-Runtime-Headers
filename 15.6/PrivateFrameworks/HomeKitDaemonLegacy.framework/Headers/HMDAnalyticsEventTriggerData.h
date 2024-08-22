// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDANALYTICSEVENTTRIGGERDATA_H
#define HMDANALYTICSEVENTTRIGGERDATA_H

@class HMFObject, NSArray;


#import "HMDAnalyticsPredicateData.h"

@interface HMDAnalyticsEventTriggerData : HMFObject

@property (nonatomic) int activationState; // ivar: _activationState
@property (nonatomic) int activationType; // ivar: _activationType
@property BOOL containsRecurrences; // ivar: _containsRecurrences
@property (copy, nonatomic) NSArray *events; // ivar: _events
@property BOOL executeOnce; // ivar: _executeOnce
@property (retain, nonatomic) HMDAnalyticsPredicateData *predicate; // ivar: _predicate


-(id)initWithEventTrigger:(id)arg0 isAdding:(BOOL)arg1 ;


@end


#endif