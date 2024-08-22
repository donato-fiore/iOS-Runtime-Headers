// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKTOMBSTONEPOLICY_H
#define _DKTOMBSTONEPOLICY_H

@class NSArray, NSPredicate;

#import <Foundation/Foundation.h>


@interface _DKTombstonePolicy : NSObject {
    NSArray *_requirements;
    NSPredicate *_predicateForEventsRequiredToBeTombstoned;
    NSPredicate *_eventPredicateForEventsRequiredToBeTombstoned;
    NSArray *_propertiesToFetchForTombstones;
}


@property (readonly, nonatomic) NSPredicate *predicateForEventsRequiredToBeTombstoned;
@property (readonly, nonatomic) NSArray *propertiesToFetchForTombstones;
@property (readonly, nonatomic) NSArray *requirements;


+(id)defaultPolicy;
-(id)init;
-(id)initWithRequirements:(id)arg0 ;
-(id)tombstonesForEvents:(id)arg0 resultingFromRequirementsWithIdentifiers:(*id)arg1 ;
-(id)tombstonesForPartialEvents:(id)arg0 resultingFromRequirementsWithIdentifiers:(*id)arg1 ;


@end


#endif