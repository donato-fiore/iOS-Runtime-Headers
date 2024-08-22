// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCOUNTINGDISTRIBUTIONMANAGER_H
#define PLACCOUNTINGDISTRIBUTIONMANAGER_H

@class NSString;
@protocol PLAccountingDistributionOwnerManager, PLAccountingDistributionManagerDelegate;


#import "PLAccountingOwnerDependencyManager.h"

@interface PLAccountingDistributionManager : PLAccountingOwnerDependencyManager <PLAccountingDistributionOwnerManager>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PLAccountingDistributionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)freeTimerInterval;
-(id)dependencyIDsForOwner:(id)arg0 ;
-(id)init;
-(id)ownerIDsForDependency:(id)arg0 ;
-(void)addDistributionEvent:(id)arg0 ;
-(void)addEnergyEstimate:(id)arg0 withNow:(id)arg1 ;
-(void)closeLastDistributionEventForwardWithDistributionID:(id)arg0 withEndDate:(id)arg1 ;
-(void)didDistributeEnergyEstimate:(id)arg0 ;
-(void)didDistributeToChildEnergyEstimate:(id)arg0 fromParentEnergyEstimate:(id)arg1 ;
-(void)reloadDependenciesNewerThanDate:(id)arg0 ;


@end


#endif