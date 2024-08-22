// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFACCOUNT_H
#define _MKFACCOUNT_H

@class MKFModel, NSString, NSArray, NSSet, NSUUID, NSNumber, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccount, MKFAccountPrivateExtensions, MKFHomeManager;


#import "MKFAccountDatabaseID.h"
#import "_MKFHomeManager.h"
#import "HMDAccountIdentifier.h"

@interface _MKFAccount : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccount, MKFAccountPrivateExtensions>



@property (readonly, copy, nonatomic) MKFAccountDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSSet *devices_;
@property (readonly, retain, nonatomic) NSArray *handles;
@property (retain, nonatomic) NSSet *handles_;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHomeManager *homeManager;
@property (readonly, retain, nonatomic) NSObject<MKFHomeManager> *homeManager;
@property (retain, nonatomic) HMDAccountIdentifier *identifier;
@property (retain, nonatomic) HMDAccountIdentifier *identifier;
@property (copy, nonatomic) NSNumber *local;
@property (copy, nonatomic) NSNumber *local;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAccount;
-(id)findDevicesRelationWithModelID:(id)arg0 ;
-(id)findHandlesRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateDevicesRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateHandlesRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)synchronizeDevicesRelationWith:(id)arg0 ;
-(void)synchronizeHandlesRelationWith:(id)arg0 ;


@end


#endif