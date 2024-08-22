// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFVALVEACTIVESTATECONTROLITEM_H
#define HFVALVEACTIVESTATECONTROLITEM_H



#import "HFPowerStateControlItem.h"

@interface HFValveActiveStateControlItem : HFPowerStateControlItem



-(id)_faucetValveSubtypeToIconIdentifierMap;
-(id)_iconDescriptorForServiceSubtype:(id)arg0 inUse:(BOOL)arg1 active:(BOOL)arg2 hasFaucetAsParentService:(BOOL)arg3 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 auxiliaryTargetValueTuples:(id)arg1 additionalCharacteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg0 displayResults:(id)arg1 ;
-(id)resultsForBatchReadResponse:(id)arg0 ;
-(id)servicePredicateForCharacteristicType:(id)arg0 withUsage:(NSUInteger)arg1 ;
-(id)writeValue:(id)arg0 ;


@end


#endif