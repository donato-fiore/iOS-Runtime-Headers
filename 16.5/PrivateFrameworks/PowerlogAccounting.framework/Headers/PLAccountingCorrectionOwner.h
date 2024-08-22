// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCOUNTINGCORRECTIONOWNER_H
#define PLACCOUNTINGCORRECTIONOWNER_H

@protocol PLAccountingCorrectionOwnerManager;


#import "PLAccountingOwner.h"
#import "PLAccountingEnergyEstimateEventEntry.h"

@interface PLAccountingCorrectionOwner : PLAccountingOwner

@property (weak) NSObject<PLAccountingCorrectionOwnerManager> *manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *rootEnergyEstimate; // ivar: _rootEnergyEstimate


-(id)ID;
-(id)activationDate;
-(id)initWithRootEnergyEstimate:(id)arg0 ;
-(id)range;
-(void)correct;
-(void)run;
-(void)setRunDate:(id)arg0 ;


@end


#endif