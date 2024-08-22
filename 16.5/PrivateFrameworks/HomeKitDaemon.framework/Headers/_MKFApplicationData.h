// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFAPPLICATIONDATA_H
#define _MKFAPPLICATIONDATA_H

@class MKFModel, NSDictionary, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFApplicationData, MKFApplicationDataPrivateExtensions, MKFAccessory, MKFActionSet, MKFHome, MKFRoom, MKFService, MKFServiceGroup;


#import "_MKFAccessory.h"
#import "_MKFActionSet.h"
#import "MKFApplicationDataDatabaseID.h"
#import "_MKFHome.h"
#import "_MKFRoom.h"
#import "_MKFService.h"
#import "_MKFServiceGroup.h"

@interface _MKFApplicationData : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFApplicationData, MKFApplicationDataPrivateExtensions>



@property (retain, nonatomic) _MKFAccessory *accessory;
@property (readonly, retain, nonatomic) NSObject<MKFAccessory> *accessory;
@property (retain, nonatomic) _MKFActionSet *actionSet;
@property (readonly, retain, nonatomic) NSObject<MKFActionSet> *actionSet;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (readonly, copy, nonatomic) MKFApplicationDataDatabaseID *databaseID;
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
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) _MKFRoom *room;
@property (readonly, retain, nonatomic) NSObject<MKFRoom> *room;
@property (retain, nonatomic) _MKFService *service;
@property (readonly, retain, nonatomic) NSObject<MKFService> *service;
@property (retain, nonatomic) _MKFServiceGroup *serviceGroup;
@property (readonly, retain, nonatomic) NSObject<MKFServiceGroup> *serviceGroup;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)appDataDictionaryForContainer:(id)arg0 ;
+(id)backingModelProtocol;
+(id)castIfApplicationDataContainer:(id)arg0 ;
+(id)fetchRequest;
+(id)hmd_parentAttributeKeyPaths;
+(id)modelIDForContainerUUID:(id)arg0 ;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(BOOL)hasValidContainer;
-(BOOL)validateForInsertOrUpdate:(*id)arg0 ;
-(id)castIfApplicationData;


@end


#endif