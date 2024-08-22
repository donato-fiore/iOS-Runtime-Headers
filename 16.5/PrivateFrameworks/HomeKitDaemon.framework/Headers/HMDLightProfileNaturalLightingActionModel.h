// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLIGHTPROFILENATURALLIGHTINGACTIONMODEL_H
#define HMDLIGHTPROFILENATURALLIGHTINGACTIONMODEL_H

@class NSUUID, NSString, NSNumber, NSSet;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDActionModel.h"

@interface HMDLightProfileNaturalLightingActionModel : HMDActionModel <HMDBackingStoreModelObjectCDRepresentable>



@property (retain) NSUUID *accessoryUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSUUID *lightProfileUUID;
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (retain) NSNumber *naturalLightingEnabledField;
@property (retain) NSSet *serviceUUIDs;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)dependentUUIDs;


@end


#endif