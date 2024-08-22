// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKAPPUSAGETOMBSTONEREQUIREMENT_H
#define _DKAPPUSAGETOMBSTONEREQUIREMENT_H

@class DKTombstoneRequirement;



@interface _DKAppUsageTombstoneRequirement : DKTombstoneRequirement



-(id)eventPredicate;
-(id)predicate;
-(id)propertiesToFetch;
-(void)assignPropertiesToTombstone:(id)arg0 extractedFromEvent:(id)arg1 ;
-(void)assignPropertiesToTombstone:(id)arg0 extractedFromPartialEvent:(id)arg1 ;


@end


#endif