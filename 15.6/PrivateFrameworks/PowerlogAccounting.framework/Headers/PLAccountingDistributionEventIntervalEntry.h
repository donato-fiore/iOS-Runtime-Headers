// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGDISTRIBUTIONEVENTINTERVALENTRY_H
#define PLACCOUNTINGDISTRIBUTIONEVENTINTERVALENTRY_H



#import "PLAccountingDistributionEventEntry.h"

@interface PLAccountingDistributionEventIntervalEntry : PLAccountingDistributionEventEntry



+(id)entryKey;
+(int)classDirectionality;
+(void)load;
-(id)initWithDistributionID:(id)arg0 withChildNodeIDToWeight:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;
-(id)initWithDistributionID:(id)arg0 withChildNodeNameToWeight:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;


@end


#endif