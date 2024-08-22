// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCHARACTERISTICTRIGGERBUILDERINTERFACE_H
#define HFCHARACTERISTICTRIGGERBUILDERINTERFACE_H

@class NSSet;


#import "HFEventTriggerBuilderInterface.h"

@interface HFCharacteristicTriggerBuilderInterface : HFEventTriggerBuilderInterface

@property (readonly, nonatomic) NSSet *characteristics;


-(BOOL)wouldFireForCharacteristic:(id)arg0 value:(id)arg1 ;
-(id)thresholdValueForCharacteristic:(id)arg0 thresholdValueRange:(id)arg1 ;
-(id)triggerValueForCharacteristic:(id)arg0 ;
-(void)removeAllCharacteristics;
-(void)removeCharacteristic:(id)arg0 ;
-(void)setCharacteristic:(id)arg0 triggerValue:(id)arg1 ;
-(void)setCharacteristic:(id)arg0 triggerValueRange:(id)arg1 ;


@end


#endif