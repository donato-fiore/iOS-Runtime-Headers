// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFSERVICE_H
#define _MKFSERVICE_H

@class MKFModel, NSArray, NSSet, NSUUID, NSNumber, NSString, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFService, MKFServicePrivateExtensions, MKFHAPAccessory, MKFApplicationData, MKFHome;


#import "_MKFHAPAccessory.h"
#import "_MKFApplicationData.h"
#import "MKFServiceDatabaseID.h"

@interface _MKFService : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFService, MKFServicePrivateExtensions>



@property (retain, nonatomic) _MKFHAPAccessory *accessory;
@property (readonly, retain, nonatomic) NSObject<MKFHAPAccessory> *accessory;
@property (readonly, retain, nonatomic) NSArray *actionCharacteristicWrites;
@property (retain, nonatomic) NSSet *actionCharacteristicWrites_;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (copy, nonatomic) NSUUID *associatedServiceType;
@property (copy, nonatomic) NSUUID *associatedServiceType;
@property (retain, nonatomic) NSArray *characteristics;
@property (retain, nonatomic) NSSet *characteristics_;
@property (copy, nonatomic) NSNumber *configurationState;
@property (copy, nonatomic) NSNumber *configurationState;
@property (readonly, copy, nonatomic) MKFServiceDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSArray *eventCharacteristics;
@property (retain, nonatomic) NSSet *eventCharacteristics_;
@property (copy, nonatomic) NSString *expectedConfiguredName;
@property (copy, nonatomic) NSString *expectedConfiguredName;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSNumber *instanceID;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSNumber *labelIndex;
@property (copy, nonatomic) NSNumber *labelIndex;
@property (copy, nonatomic) NSNumber *labelNamespace;
@property (copy, nonatomic) NSNumber *labelNamespace;
@property (copy, nonatomic) NSNumber *lastKnownDiscoveryMode;
@property (copy, nonatomic) NSNumber *lastKnownDiscoveryMode;
@property (copy, nonatomic) NSNumber *lastKnownOperatingState;
@property (copy, nonatomic) NSNumber *lastKnownOperatingState;
@property (copy, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons;
@property (copy, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons;
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSArray *mediaSourceDisplayOrder;
@property (retain, nonatomic) NSArray *mediaSourceDisplayOrder;
@property (copy, nonatomic) NSNumber *mediaSourceIdentifier;
@property (copy, nonatomic) NSNumber *mediaSourceIdentifier;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *providedName;
@property (copy, nonatomic) NSString *providedName;
@property (readonly, retain, nonatomic) NSArray *serviceGroups;
@property (retain, nonatomic) NSSet *serviceGroups_;
@property (copy, nonatomic) NSNumber *serviceProperties;
@property (copy, nonatomic) NSNumber *serviceProperties;
@property (copy, nonatomic) NSUUID *serviceSubtype;
@property (copy, nonatomic) NSUUID *serviceSubtype;
@property (copy, nonatomic) NSUUID *serviceType;
@property (copy, nonatomic) NSUUID *serviceType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForKeyAttribute:(id)arg0 parent:(id)arg1 ;
-(id)castIfService;
-(id)createCharacteristicsRelationOfType:(id)arg0 instanceID:(id)arg1 ;
-(id)createCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(id)arg0 ;
-(id)createCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(id)arg0 ;
-(id)createCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(id)arg0 ;
-(id)createCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(id)arg0 ;
-(id)findCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(id)arg0 ;
-(id)findCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(id)arg0 ;
-(id)findCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(id)arg0 ;
-(id)findCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(id)arg0 ;
-(id)materializeOrCreateApplicationDataRelation:(*BOOL)arg0 ;
-(id)materializeOrCreateCharacteristicsRelationOfType:(id)arg0 instanceID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)pr_findCharacteristicWithInstanceID:(id)arg0 ;
-(void)synchronizeCharacteristicsRelationWith:(id)arg0 ;


@end


#endif