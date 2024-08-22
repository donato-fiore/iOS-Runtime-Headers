// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHARACTERISTICEVENTBASEMODEL_H
#define HMDCHARACTERISTICEVENTBASEMODEL_H

@class NSString, NSNumber;


#import "HMDEventModel.h"

@interface HMDCharacteristicEventBaseModel : HMDEventModel

@property (retain, nonatomic) NSString *accessory;
@property (retain, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) NSNumber *serviceID;


+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 className:(Class)arg3 message:(id)arg4 checkForSupport:(BOOL)arg5 outCharateristic:(*id)arg6 ;
+(id)properties;
-(id)dependentUUIDs;


@end


#endif