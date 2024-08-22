// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFACTIONSET_H
#define _MKFACTIONSET_H

@class MKFModel, NSArray, NSSet, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFActionSet, MKFActionSetPrivateExtensions, MKFApplicationData, MKFHome;


#import "_MKFApplicationData.h"
#import "MKFActionSetDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFActionSet : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFActionSet, MKFActionSetPrivateExtensions>



@property (readonly, retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSSet *actions_;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (readonly, copy, nonatomic) MKFActionSetDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSDate *lastExecutionDate;
@property (copy, nonatomic) NSDate *lastExecutionDate;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (retain, nonatomic) NSSet *triggers_;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfActionSet;
-(id)createActionsRelationOfType:(id)arg0 modelID:(id)arg1 ;
-(id)createActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)arg0 ;
-(id)createActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg0 ;
-(id)createActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg0 ;
-(id)createActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg0 ;
-(id)createActionsRelationOfTypeShortcutActionWithModelID:(id)arg0 ;
-(id)findActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)arg0 ;
-(id)findActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg0 ;
-(id)findActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg0 ;
-(id)findActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg0 ;
-(id)findActionsRelationOfTypeShortcutActionWithModelID:(id)arg0 ;
-(id)materializeOrCreateActionsRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateActionsRelationOfTypeShortcutActionWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateApplicationDataRelation:(*BOOL)arg0 ;
-(void)synchronizeActionsRelationWith:(id)arg0 ;


@end


#endif