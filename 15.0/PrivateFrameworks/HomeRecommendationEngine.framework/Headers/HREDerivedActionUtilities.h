// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HREDERIVEDACTIONUTILITIES_H
#define HREDERIVEDACTIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface HREDerivedActionUtilities : NSObject



+(id)_derivedActionForActionableObject:(id)arg0 actionType:(id)arg1 actions:(id)arg2 ;
+(id)_derivedActionForCharacteristic:(id)arg0 withExistingValues:(id)arg1 ;
+(id)_derivedActionForMediaProfiles:(id)arg0 withExistingValues:(id)arg1 ;
+(id)_filterActions:(id)arg0 withAccessoriesPassingTest:(id)arg1 ;
+(id)_filterActions:(id)arg0 withUnmatchedCharacteristicTypes:(id)arg1 ;
+(id)_serviceTypesExtrapolatingFromWholeHome;
+(id)_serviceTypesExtrapolatingFromZones;
+(id)actionType:(id)arg0 ;
+(id)actionTypeAlias;
+(id)actionTypeForActionClass:(Class)arg0 ;
+(id)actionTypeForCharacteristic:(id)arg0 ;
+(id)actionTypeForServiceType:(id)arg0 characteristicType:(id)arg1 ;
+(id)actionTypesForProfile:(id)arg0 ;
+(id)characteristicTypeAlias;
+(id)derivedActionsForActionableObjects:(id)arg0 fromActions:(id)arg1 ;
+(id)serviceTypeAlias;


@end


#endif