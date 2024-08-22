// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCOUNTINGDISTRIBUTIONRULEENTRY_H
#define PLACCOUNTINGDISTRIBUTIONRULEENTRY_H

@class NSNumber;


#import "PLAccountingRuleEntry.h"

@interface PLAccountingDistributionRuleEntry : PLAccountingRuleEntry

@property (readonly, nonatomic) NSNumber *distributionID;
@property (readonly, nonatomic) NSNumber *nodeID;
@property (readonly, nonatomic) NSNumber *rootNodeID;


+(id)entryKey;
+(void)load;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithNodeID:(id)arg0 withRootNodeID:(id)arg1 withDistributionID:(id)arg2 withEntryDate:(id)arg3 ;


@end


#endif