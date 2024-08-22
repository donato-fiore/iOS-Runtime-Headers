// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYUIRESPONSETYPEBATTERYBREAKDOWNINTERNAL_H
#define PLBATTERYUIRESPONSETYPEBATTERYBREAKDOWNINTERNAL_H



#import "PLBatteryUIResponseTypeBatteryBreakdown.h"

@interface PLBatteryUIResponseTypeBatteryBreakdownInternal : PLBatteryUIResponseTypeBatteryBreakdown



-(BOOL)filterFgBg:(id)arg0 filterArray:(id)arg1 ;
-(BOOL)shouldShowBreakdown:(id)arg0 ;
-(BOOL)showRootNodesInInternal;
-(void)filterEnergyEntries:(id)arg0 ;
-(void)populateInternalRootNodeEnergyKeys:(id)arg0 ;


@end


#endif