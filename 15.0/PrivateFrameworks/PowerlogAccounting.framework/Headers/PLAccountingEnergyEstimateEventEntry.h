// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLACCOUNTINGENERGYESTIMATEEVENTENTRY_H
#define PLACCOUNTINGENERGYESTIMATEEVENTENTRY_H

@class NSDate, NSNumber;


#import "PLAccountingEnergyEventEntry.h"

@interface PLAccountingEnergyEstimateEventEntry : PLAccountingEnergyEventEntry

@property (retain, nonatomic) NSDate *correctionDate;
@property (nonatomic) CGFloat correctionEnergy;
@property (retain, nonatomic) NSDate *distributionDate;
@property (readonly, nonatomic) NSNumber *distributionRuleID;
@property BOOL isRootNodeEnergyAggregated; // ivar: _isRootNodeEnergyAggregated
@property (readonly, nonatomic) int numAncestors;
@property (readonly, nonatomic) int parentEntryID;
@property (retain, nonatomic) NSDate *qualificationDate;
@property (readonly, nonatomic) NSNumber *qualificationRuleIDSum;
@property (readonly, nonatomic) NSNumber *rootNodeID;
@property (nonatomic) CGFloat terminationRatio;


+(id)entryKey;
+(void)load;
-(id)initWithNodeID:(id)arg0 withRootNodeID:(id)arg1 withParentEntryID:(int)arg2 withNumAncestors:(int)arg3 withEnergy:(CGFloat)arg4 withRange:(id)arg5 withEntryDate:(id)arg6 ;


@end


#endif