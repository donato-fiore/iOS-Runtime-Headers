// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLACCOUNTINGDISTRIBUTIONEVENTPOINTENTRY_H
#define PLACCOUNTINGDISTRIBUTIONEVENTPOINTENTRY_H



#import "PLAccountingDistributionEventEntry.h"

@interface PLAccountingDistributionEventPointEntry : PLAccountingDistributionEventEntry



+(id)entryKey;
+(int)classDirectionality;
+(void)load;
-(id)initWithDistributionID:(id)arg0 withChildNodeNameToWeight:(id)arg1 withStartDate:(id)arg2 ;


@end


#endif