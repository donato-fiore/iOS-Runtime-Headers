// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACTIONSETSUGGESTIONVENDOR_H
#define HFACTIONSETSUGGESTIONVENDOR_H

@class HMActionSet, HMHome, NSArray;

#import <Foundation/Foundation.h>

#import "HFActionSetSuggestionFilter.h"

@interface HFActionSetSuggestionVendor : NSObject

@property (readonly, nonatomic) HMActionSet *actionSet; // ivar: _actionSet
@property (readonly, nonatomic) HFActionSetSuggestionFilter *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSArray *services; // ivar: _services


+(id)supportedBuiltInActionSetTypes;
-(id)_actionBuildersForBuiltInActionSetWithType:(id)arg0 outDependentServiceTypes:(*id)arg1 ;
-(id)_actionBuildersForCustomActionSet;
-(id)_actionBuildersForCustomActionSetWithService:(id)arg0 ;
-(id)_actionBuildersToSetLightbulbBrightness:(CGFloat)arg0 ;
-(id)_actionBuildersToSetLightbulbColorWithPaletteColor:(id)arg0 ;
-(id)_actionBuildersToSetPowerState:(BOOL)arg0 forServicesOfTypes:(id)arg1 ;
-(id)_actionBuildersToSetTargetBlindsPositionOpen:(BOOL)arg0 ;
-(id)_actionBuildersToSetTargetDoorState:(NSInteger)arg0 forServicesOfTypes:(id)arg1 ;
-(id)_actionBuildersToSetTargetLockState:(NSInteger)arg0 forServicesOfTypes:(id)arg1 ;
-(id)_actionBuildersToSetTargetSecuritySystemState:(NSInteger)arg0 ;
-(id)_controlItemValueSourceForService:(id)arg0 ;
-(id)_deriveActionForPrimaryCharacteristic:(id)arg0 ;
-(id)_deriveActionForPrimaryCharacteristic:(id)arg0 candidateServices:(id)arg1 targetThreshold:(CGFloat)arg2 ;
-(id)_deriveActionForSecondaryCharacteristic:(id)arg0 candidateServices:(id)arg1 ;
-(id)build;
-(id)buildWithOutDependentServiceTypes:(*id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 actionSet:(id)arg1 ;
-(id)initWithHome:(id)arg0 actionSet:(id)arg1 filter:(id)arg2 ;


@end


#endif