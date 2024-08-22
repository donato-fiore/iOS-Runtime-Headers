// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGDISTRIBUTIONDEPENDENCY_H
#define PLACCOUNTINGDISTRIBUTIONDEPENDENCY_H



#import "PLAccountingDependency.h"
#import "PLAccountingDistributionEventEntry.h"

@interface PLAccountingDistributionDependency : PLAccountingDependency

@property (retain) PLAccountingDistributionEventEntry *distributionEvent; // ivar: _distributionEvent


-(id)ID;
-(id)activationDate;
-(id)initWithDistributionEvent:(id)arg0 ;
-(id)range;
-(void)setRange:(id)arg0 ;


@end


#endif