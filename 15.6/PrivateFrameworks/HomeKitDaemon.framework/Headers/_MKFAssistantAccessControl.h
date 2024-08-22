// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFASSISTANTACCESSCONTROL_H
#define _MKFASSISTANTACCESSCONTROL_H

@class MKFModel, NSString, NSNumber, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAssistantAccessControl, MKFAssistantAccessControlPrivateExtensions, MKFAccessory, MKFHome;


#import "_MKFAccessory.h"
#import "MKFAssistantAccessControlDatabaseID.h"

@interface _MKFAssistantAccessControl : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAssistantAccessControl, MKFAssistantAccessControlPrivateExtensions>



@property (retain, nonatomic) _MKFAccessory *accessory;
@property (readonly, retain, nonatomic) NSObject<MKFAccessory> *accessory;
@property (copy, nonatomic) NSString *changeTag;
@property (copy, nonatomic) NSString *changeTag;
@property (readonly, copy, nonatomic) MKFAssistantAccessControlDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *enabled;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *options;
@property (copy, nonatomic) NSNumber *options;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAssistantAccessControl;


@end


#endif