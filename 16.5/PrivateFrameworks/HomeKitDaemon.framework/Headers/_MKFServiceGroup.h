// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFSERVICEGROUP_H
#define _MKFSERVICEGROUP_H

@class MKFModel, NSString, NSUUID, NSArray, NSSet, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFServiceGroup, MKFServiceGroupPrivateExtensions, MKFApplicationData, MKFHome;


#import "_MKFApplicationData.h"
#import "MKFServiceGroupDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFServiceGroup : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFServiceGroup, MKFServiceGroupPrivateExtensions>



@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (readonly, copy, nonatomic) MKFServiceGroupDatabaseID *databaseID;
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
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSArray *services;
@property (retain, nonatomic) NSSet *services_;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfServiceGroup;
-(id)materializeOrCreateApplicationDataRelation:(*BOOL)arg0 ;
-(void)addServicesObject:(id)arg0 ;
-(void)removeServicesObject:(id)arg0 ;


@end


#endif