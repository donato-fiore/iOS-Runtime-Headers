// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPERSONMANAGERSETTINGSMODEL_H
#define HMDHOMEPERSONMANAGERSETTINGSMODEL_H

@class NSString, NSUUID;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDHomeSettingsBaseModel.h"

@interface HMDHomePersonManagerSettingsModel : HMDHomeSettingsBaseModel <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSUUID *zoneUUID;
@property (retain) NSString *zoneUUIDString;


+(Class)cd_entityClass;
+(id)defaultModelForHomeUUID:(id)arg0 ;
+(id)modelIDForHomeUUID:(id)arg0 ;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)createSettings;
-(id)initWithHomeUUID:(id)arg0 ;


@end


#endif