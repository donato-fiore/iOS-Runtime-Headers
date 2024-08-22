// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGQUALIFICATIONOWNER_H
#define PLACCOUNTINGQUALIFICATIONOWNER_H

@protocol PLAccountingQualificationOwnerManager;


#import "PLAccountingOwner.h"
#import "PLAccountingEnergyEstimateEventEntry.h"

@interface PLAccountingQualificationOwner : PLAccountingOwner

@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate; // ivar: _energyEstimate
@property (weak) NSObject<PLAccountingQualificationOwnerManager> *manager;


-(id)ID;
-(id)activationDate;
-(id)initWithEnergyEstimate:(id)arg0 ;
-(id)range;
-(void)qualify;
-(void)run;
-(void)setRunDate:(id)arg0 ;


@end


#endif