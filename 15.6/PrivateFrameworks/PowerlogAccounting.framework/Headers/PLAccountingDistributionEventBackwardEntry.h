// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGDISTRIBUTIONEVENTBACKWARDENTRY_H
#define PLACCOUNTINGDISTRIBUTIONEVENTBACKWARDENTRY_H



#import "PLAccountingDistributionEventEntry.h"

@interface PLAccountingDistributionEventBackwardEntry : PLAccountingDistributionEventEntry



+(id)entryKey;
+(int)classDirectionality;
+(void)load;
-(id)initWithDistributionID:(id)arg0 withChildNodeNameToWeight:(id)arg1 withEndDate:(id)arg2 ;


@end


#endif