// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFNATURALLIGHTINGACTION_H
#define _MKFNATURALLIGHTINGACTION_H

@class MKFAction, NSString, NSUUID, NSNumber, NSSet, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFNaturalLightingAction, MKFNaturalLightingActionPrivateExtensions, MKFHAPAccessory, MKFActionSet, MKFHome;


#import "_MKFHAPAccessory.h"
#import "MKFNaturalLightingActionDatabaseID.h"

@interface _MKFNaturalLightingAction : MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFNaturalLightingAction, MKFNaturalLightingActionPrivateExtensions>



@property (retain, nonatomic) _MKFHAPAccessory *accessory;
@property (retain, nonatomic) NSObject<MKFHAPAccessory> *accessory;
@property (readonly, retain, nonatomic) NSObject<MKFActionSet> *actionSet;
@property (readonly, copy, nonatomic) MKFNaturalLightingActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSUUID *lightProfileUUID;
@property (copy, nonatomic) NSUUID *lightProfileUUID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *naturalLightingEnabledField;
@property (copy, nonatomic) NSNumber *naturalLightingEnabledField;
@property (retain, nonatomic) NSSet *serviceUUIDs;
@property (retain, nonatomic) NSSet *serviceUUIDs;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfNaturalLightingAction;


@end


#endif