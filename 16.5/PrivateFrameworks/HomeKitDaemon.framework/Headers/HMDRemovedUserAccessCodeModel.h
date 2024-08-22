// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOVEDUSERACCESSCODEMODEL_H
#define HMDREMOVEDUSERACCESSCODEMODEL_H

@class NSString, NSUUID, HMRemovedUserInfo, NSData;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDRemovedUserAccessCodeModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (copy) NSString *accessCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSUUID *hh2ModelID;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo;
@property (retain) NSData *removedUserInfoData;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)modelUUIDForHomeUUID:(id)arg0 removedUserInfo:(id)arg1 accessCode:(id)arg2 ;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)initWithRemovedUserInfo:(id)arg0 accessCode:(id)arg1 homeUUID:(id)arg2 ;
-(id)unarchiveRemovedUserInfo:(id)arg0 ;


@end


#endif