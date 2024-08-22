// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFHOMEMANAGER_H
#define _MKFHOMEMANAGER_H

@class MKFModel, NSArray, NSSet, NSDictionary, NSString, NSUUID, HAPPairingIdentity, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeManager, MKFHomeManagerPrivateExtensions, MKFHAPMetadata, MKFHomeManagerHome;


#import "MKFHomeManagerDatabaseID.h"
#import "_MKFHAPMetadata.h"
#import "_MKFHomeManagerHome.h"

@interface _MKFHomeManager : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeManager, MKFHomeManagerPrivateExtensions>



@property (readonly, retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) NSSet *accounts_;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (copy, nonatomic) NSString *controllerKeyIdentifier;
@property (copy, nonatomic) NSString *controllerKeyIdentifier;
@property (readonly, copy, nonatomic) MKFHomeManagerDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSArray *homes;
@property (retain, nonatomic) NSSet *homes_;
@property (readonly, retain, nonatomic) NSArray *incomingInvitations;
@property (retain, nonatomic) NSSet *incomingInvitations_;
@property (retain, nonatomic) HAPPairingIdentity *legacyPairingIdentity;
@property (retain, nonatomic) HAPPairingIdentity *legacyPairingIdentity;
@property (retain, nonatomic) _MKFHAPMetadata *metadata;
@property (retain, nonatomic) NSObject<MKFHAPMetadata> *metadata;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSArray *pairingAppleAccessories;
@property (retain, nonatomic) NSArray *pairingAppleAccessories;
@property (retain, nonatomic) _MKFHomeManagerHome *primaryHome;
@property (retain, nonatomic) NSObject<MKFHomeManagerHome> *primaryHome;
@property (copy, nonatomic) NSUUID *primitiveModelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)defaultModelID;
+(id)fetchRequest;
+(id)fetchWithContext:(id)arg0 error:(*id)arg1 ;
-(id)castIfHomeManager;
-(id)findAccountsRelationWithModelID:(id)arg0 ;
-(id)findHomesRelationWithModelID:(id)arg0 ;
-(id)findIncomingInvitationsRelationWithModelID:(id)arg0 ;
-(id)hmd_modelsWithChangeType:(NSUInteger)arg0 detached:(BOOL)arg1 error:(*id)arg2 ;
-(id)materializeOrCreateAccountsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateHomesRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateIncomingInvitationsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateMetadataRelation:(*BOOL)arg0 ;
-(void)awakeFromInsert;


@end


#endif