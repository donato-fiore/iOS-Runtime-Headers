// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCOUNTINGDISTRIBUTIONOWNER_H
#define PLACCOUNTINGDISTRIBUTIONOWNER_H

@protocol PLAccountingDistributionOwnerManager;


#import "PLAccountingOwner.h"
#import "PLAccountingEnergyEstimateEventEntry.h"

@interface PLAccountingDistributionOwner : PLAccountingOwner

@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate; // ivar: _energyEstimate
@property (weak) NSObject<PLAccountingDistributionOwnerManager> *manager;


-(id)ID;
-(id)activationDate;
-(id)initWithEnergyEstimate:(id)arg0 ;
-(id)range;
-(void)distribute;
-(void)run;
-(void)setRunDate:(id)arg0 ;


@end


#endif