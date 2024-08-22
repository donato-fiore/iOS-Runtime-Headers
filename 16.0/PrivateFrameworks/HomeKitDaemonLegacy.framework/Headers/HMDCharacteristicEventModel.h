// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCHARACTERISTICEVENTMODEL_H
#define HMDCHARACTERISTICEVENTMODEL_H



#import "HMDCharacteristicEventBaseModel.h"

@interface HMDCharacteristicEventModel : HMDCharacteristicEventBaseModel

@property (retain, nonatomic) id *eventValue;


+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 message:(id)arg3 checkForSupport:(BOOL)arg4 error:(*id)arg5 ;
+(id)properties;


@end


#endif