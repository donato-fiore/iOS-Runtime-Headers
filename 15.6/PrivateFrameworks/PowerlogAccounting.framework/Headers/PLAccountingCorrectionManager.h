// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGCORRECTIONMANAGER_H
#define PLACCOUNTINGCORRECTIONMANAGER_H

@class NSString, NSMutableDictionary;
@protocol PLAccountingCorrectionOwnerManager, PLAccountingCorrectionManagerDelegate;


#import "PLAccountingOwnerDependencyManager.h"

@interface PLAccountingCorrectionManager : PLAccountingOwnerDependencyManager <PLAccountingCorrectionOwnerManager>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PLAccountingCorrectionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *parentEntryIDToChildEnergyEstimates; // ivar: _parentEntryIDToChildEnergyEstimates
@property (readonly) Class superclass;


+(CGFloat)disableCorrection;
+(CGFloat)freeTimerInterval;
-(id)childEnergyEstimatesForParentEntryID:(int)arg0 ;
-(id)dependencyIDsForOwner:(id)arg0 ;
-(id)ownerIDsForDependency:(id)arg0 ;
-(void)addEnergyMeasurement:(id)arg0 ;
-(void)addRootEnergyEstimate:(id)arg0 withNow:(id)arg1 ;
-(void)correctChildEnergyEstimate:(id)arg0 withParentEnergyEstimate:(id)arg1 withNow:(id)arg2 ;
-(void)didCorrectEnergyEstimate:(id)arg0 ;
-(void)reloadDependenciesNewerThanDate:(id)arg0 ;


@end


#endif