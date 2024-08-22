// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKELIGIBLEFORPREDICTIONTOMBSTONEREQUIREMENT_H
#define _DKELIGIBLEFORPREDICTIONTOMBSTONEREQUIREMENT_H

@class DKTombstoneRequirement;



@interface _DKEligibleForPredictionTombstoneRequirement : DKTombstoneRequirement



-(id)eligibleForPredictionKey;
-(id)eventPredicate;
-(id)identifier;
-(id)predicate;
-(id)propertiesToFetch;
-(void)assignPropertiesToTombstone:(id)arg0 extractedFromEvent:(id)arg1 ;
-(void)assignPropertiesToTombstone:(id)arg0 extractedFromPartialEvent:(id)arg1 ;


@end


#endif