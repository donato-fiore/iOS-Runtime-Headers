// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFAPPLEMEDIAACCESSORYPOWERACTION_H
#define _MKFAPPLEMEDIAACCESSORYPOWERACTION_H

@class MKFAction, NSString, NSUUID, NSNumber, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAppleMediaAccessoryPowerAction, MKFAppleMediaAccessoryPowerActionPrivateExtensions, MKFAppleMediaAccessory, MKFActionSet, MKFHome;


#import "_MKFAppleMediaAccessory.h"
#import "MKFAppleMediaAccessoryPowerActionDatabaseID.h"

@interface _MKFAppleMediaAccessoryPowerAction : MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAppleMediaAccessoryPowerAction, MKFAppleMediaAccessoryPowerActionPrivateExtensions>



@property (retain, nonatomic) _MKFAppleMediaAccessory *accessory;
@property (retain, nonatomic) NSObject<MKFAppleMediaAccessory> *accessory;
@property (readonly, retain, nonatomic) NSObject<MKFActionSet> *actionSet;
@property (readonly, copy, nonatomic) MKFAppleMediaAccessoryPowerActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *targetSleepWakeState;
@property (copy, nonatomic) NSNumber *targetSleepWakeState;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAppleMediaAccessoryPowerAction;


@end


#endif