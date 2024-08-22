// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFHOMEMANAGERHOME_H
#define _MKFHOMEMANAGERHOME_H

@class MKFModel, NSString, NSNumber, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeManagerHome, MKFHomeManagerHomePrivateExtensions, MKFHomeManager;


#import "MKFHomeManagerHomeDatabaseID.h"
#import "HMDHomeManagerHomeHandle.h"
#import "_MKFHomeManager.h"

@interface _MKFHomeManagerHome : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeManagerHome, MKFHomeManagerHomePrivateExtensions>



@property (readonly, copy, nonatomic) MKFHomeManagerHomeDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *deleted;
@property (copy, nonatomic) NSNumber *deleted;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDHomeManagerHomeHandle *handle;
@property (retain, nonatomic) HMDHomeManagerHomeHandle *handle;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHomeManager *homeManager;
@property (readonly, retain, nonatomic) NSObject<MKFHomeManager> *homeManager;
@property (retain, nonatomic) _MKFHomeManager *homeManagerPrimary;
@property (retain, nonatomic) NSObject<MKFHomeManager> *homeManagerPrimary;
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
-(id)castIfHomeManagerHome;
-(id)hmd_modelsWithChangeType:(NSUInteger)arg0 detached:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif