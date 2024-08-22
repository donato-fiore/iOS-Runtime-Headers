// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCHARACTERISTICTHRESHOLDRANGEEVENTMODEL_H
#define HMDCHARACTERISTICTHRESHOLDRANGEEVENTMODEL_H

@class NSString, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDCharacteristicEventBaseModel.h"

@interface HMDCharacteristicThresholdRangeEventModel : HMDCharacteristicEventBaseModel <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *max;
@property (retain, nonatomic) NSNumber *min;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 checkForSupport:(BOOL)arg4 ;
+(id)properties;


@end


#endif