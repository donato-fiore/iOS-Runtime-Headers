// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERACCESSCODEMODEL_H
#define HMDUSERACCESSCODEMODEL_H

@class NSUUID, NSString;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDUserAccessCodeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (retain) NSUUID *changedByUserUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSUUID *hh2ModelID;
@property (readonly) Class superclass;
@property (copy) NSString *value;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)modelUUIDWithUUID:(id)arg0 ;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)initWithUserUUID:(id)arg0 ;


@end


#endif