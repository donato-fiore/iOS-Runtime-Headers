// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMESETTINGSMODEL_H
#define HMDHOMESETTINGSMODEL_H

@class NSNumber, NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDHomeSettingsBaseModel.h"

@interface HMDHomeSettingsModel : HMDHomeSettingsBaseModel <HMDBackingStoreModelObjectCDRepresentable>



@property (copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)defaultModelForHomeUUID:(id)arg0 ;
+(id)modelIDForHomeUUID:(id)arg0 ;
+(id)modelNamespace;
+(id)properties;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;


@end


#endif