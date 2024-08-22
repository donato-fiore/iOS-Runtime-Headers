// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLACCOUNTINGCORRECTIONDEPENDENCY_H
#define PLACCOUNTINGCORRECTIONDEPENDENCY_H



#import "PLAccountingDependency.h"
#import "PLAccountingEnergyEventEntry.h"

@interface PLAccountingCorrectionDependency : PLAccountingDependency

@property (retain) PLAccountingEnergyEventEntry *energyEvent; // ivar: _energyEvent


-(id)ID;
-(id)activationDate;
-(id)initWithEnergyEvent:(id)arg0 ;
-(id)range;


@end


#endif