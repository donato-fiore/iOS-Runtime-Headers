// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGENERGYEVENTENTRY_H
#define PLACCOUNTINGENERGYEVENTENTRY_H

@class PLEntry, NSNumber;


#import "PLAccountingRange.h"

@interface PLAccountingEnergyEventEntry : PLEntry

@property (readonly, nonatomic) CGFloat energy;
@property (readonly, nonatomic) NSNumber *nodeID;
@property (readonly, nonatomic) PLAccountingRange *range; // ivar: _range


+(id)entryKey;
+(void)load;
-(id)initWithNodeID:(id)arg0 withEnergy:(CGFloat)arg1 withRange:(id)arg2 withEntryDate:(id)arg3 ;


@end


#endif