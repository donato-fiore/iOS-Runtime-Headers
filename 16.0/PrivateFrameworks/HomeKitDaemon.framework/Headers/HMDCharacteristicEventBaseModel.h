// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCHARACTERISTICEVENTBASEMODEL_H
#define HMDCHARACTERISTICEVENTBASEMODEL_H

@class NSString, NSNumber;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDEventModel.h"

@interface HMDCharacteristicEventBaseModel : HMDEventModel <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSString *accessory;
@property (retain, nonatomic) NSNumber *characteristicID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *serviceID;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)eventModelWithDictionary:(id)arg0 home:(id)arg1 eventTriggerUUID:(id)arg2 className:(Class)arg3 message:(id)arg4 checkForSupport:(BOOL)arg5 outCharateristic:(*id)arg6 ;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)dependentUUIDs;


@end


#endif