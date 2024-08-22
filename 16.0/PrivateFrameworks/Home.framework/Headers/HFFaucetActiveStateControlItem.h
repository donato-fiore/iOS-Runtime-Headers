// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFFAUCETACTIVESTATECONTROLITEM_H
#define HFFAUCETACTIVESTATECONTROLITEM_H



#import "HFPowerStateControlItem.h"

@interface HFFaucetActiveStateControlItem : HFPowerStateControlItem

@property (readonly, nonatomic) NSUInteger valveControlMode; // ivar: _valveControlMode


+(id)na_identity;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 auxiliaryTargetValueTuples:(id)arg1 additionalCharacteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg0 valveControlMode:(NSUInteger)arg1 displayResults:(id)arg2 ;
-(id)resultsForBatchReadResponse:(id)arg0 ;
-(id)servicePredicateForCharacteristicType:(id)arg0 withUsage:(NSUInteger)arg1 ;


@end


#endif