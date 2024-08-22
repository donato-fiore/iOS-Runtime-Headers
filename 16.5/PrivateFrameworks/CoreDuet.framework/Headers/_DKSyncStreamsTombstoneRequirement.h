// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKSYNCSTREAMSTOMBSTONEREQUIREMENT_H
#define _DKSYNCSTREAMSTOMBSTONEREQUIREMENT_H

@class DKTombstoneRequirement;



@interface _DKSyncStreamsTombstoneRequirement : DKTombstoneRequirement



-(id)eventPredicate;
-(id)predicate;
-(id)propertiesToFetch;
-(void)assignPropertiesToTombstone:(id)arg0 extractedFromEvent:(id)arg1 ;
-(void)assignPropertiesToTombstone:(id)arg0 extractedFromPartialEvent:(id)arg1 ;


@end


#endif