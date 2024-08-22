// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGQUALIFICATIONMANAGER_H
#define PLACCOUNTINGQUALIFICATIONMANAGER_H

@protocol PLAccountingQualificationManagerDelegate;


#import "PLAccountingOwnerDependencyManager.h"
#import "PLAccountingEnergyEventEntry.h"

@interface PLAccountingQualificationManager : PLAccountingOwnerDependencyManager

@property (weak) NSObject<PLAccountingQualificationManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PLAccountingEnergyEventEntry *lastQualifiedEnergyEvent; // ivar: _lastQualifiedEnergyEvent


+(CGFloat)freeTimerInterval;
-(id)dependencyIDsForOwner:(id)arg0 ;
-(id)ownerIDsForDependency:(id)arg0 ;
-(void)addEnergyEstimate:(id)arg0 withNow:(id)arg1 ;
-(void)addQualificationEvent:(id)arg0 ;
-(void)closeLastQualificationEventForwardWithQualificationID:(id)arg0 withEndDate:(id)arg1 ;
-(void)didQualifyEnergyEvent:(id)arg0 withRootNodeID:(id)arg1 withQualificationID:(id)arg2 ;
-(void)reloadDependenciesNewerThanDate:(id)arg0 ;


@end


#endif