// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEMANAGERMODEL_H
#define HMDHOMEMANAGERMODEL_H

@class NSDictionary, NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeManagerModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSDictionary *cloudZoneInformation;
@property (retain, nonatomic) NSString *controllerKeyIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *primaryHomeUUID;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;


@end


#endif