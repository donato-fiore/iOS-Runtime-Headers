// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEACCESSCODEMODEL_H
#define HMDHOMEACCESSCODEMODEL_H

@class NSString, NSUUID;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeAccessCodeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSUUID *hh2ModelID;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (copy) NSString *value;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)modelUUIDForHomeUUID:(id)arg0 accessCodeValue:(id)arg1 ;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)initWithHomeUUID:(id)arg0 value:(id)arg1 label:(id)arg2 ;


@end


#endif