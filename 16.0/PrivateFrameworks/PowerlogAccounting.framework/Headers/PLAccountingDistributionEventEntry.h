// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGDISTRIBUTIONEVENTENTRY_H
#define PLACCOUNTINGDISTRIBUTIONEVENTENTRY_H

@class NSDictionary, NSNumber;


#import "PLAccountingEventEntry.h"

@interface PLAccountingDistributionEventEntry : PLAccountingEventEntry

@property BOOL _distributeRangeWeightedTotal; // ivar: __distributeRangeWeightedTotal
@property (readonly, nonatomic) NSDictionary *childNodeIDToWeight; // ivar: _childNodeIDToWeight
@property (readonly, nonatomic) NSDictionary *childNodeNameToWeight;
@property (readonly, nonatomic) BOOL distributeRangeWeightedTotal;
@property (readonly, nonatomic) NSNumber *distributionID;


+(void)load;
-(BOOL)isEmptyEvent;
-(BOOL)isEqualContentsWithEvent:(id)arg0 ;
-(id)initWithDistributionID:(id)arg0 withChildNodeIDToWeight:(id)arg1 withRange:(id)arg2 ;
-(id)initWithDistributionID:(id)arg0 withChildNodeNameToWeight:(id)arg1 withRange:(id)arg2 ;
-(id)subEntryKey;
-(int)instanceDirectionality;


@end


#endif