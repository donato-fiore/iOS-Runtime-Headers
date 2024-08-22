// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCOUNTINGDISTRIBUTIONEVENTFORWARDENTRY_H
#define PLACCOUNTINGDISTRIBUTIONEVENTFORWARDENTRY_H



#import "PLAccountingDistributionEventEntry.h"

@interface PLAccountingDistributionEventForwardEntry : PLAccountingDistributionEventEntry



+(id)entryKey;
+(int)classDirectionality;
+(void)load;
-(id)initWithDistributionID:(id)arg0 withChildNodeNameToWeight:(id)arg1 withStartDate:(id)arg2 ;


@end


#endif