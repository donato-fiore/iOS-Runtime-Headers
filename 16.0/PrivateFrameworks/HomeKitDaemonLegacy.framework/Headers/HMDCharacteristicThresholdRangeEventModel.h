// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCHARACTERISTICTHRESHOLDRANGEEVENTMODEL_H
#define HMDCHARACTERISTICTHRESHOLDRANGEEVENTMODEL_H

@class NSNumber;


#import "HMDCharacteristicEventBaseModel.h"

@interface HMDCharacteristicThresholdRangeEventModel : HMDCharacteristicEventBaseModel

@property (retain, nonatomic) NSNumber *max;
@property (retain, nonatomic) NSNumber *min;


+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 checkForSupport:(BOOL)arg4 ;
+(id)properties;


@end


#endif