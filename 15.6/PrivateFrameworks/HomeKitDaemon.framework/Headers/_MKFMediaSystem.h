// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFMEDIASYSTEM_H
#define _MKFMEDIASYSTEM_H

@class MKFModel, NSString, NSUUID, NSArray, NSData, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaSystem, MKFMediaSystemPrivateExtensions, MKFApplicationData, MKFHome;


#import "_MKFApplicationData.h"
#import "MKFMediaSystemDatabaseID.h"
#import "_MKFHome.h"

@interface _MKFMediaSystem : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaSystem, MKFMediaSystemPrivateExtensions>



@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSString *configuredName;
@property (readonly, copy, nonatomic) MKFMediaSystemDatabaseID *databaseID;
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
@property (retain, nonatomic) NSArray *mediaSystemComponents;
@property (retain, nonatomic) NSArray *mediaSystemComponents;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *symptoms;
@property (retain, nonatomic) NSData *symptoms;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfMediaSystem;
-(id)materializeOrCreateApplicationDataRelation:(*BOOL)arg0 ;


@end


#endif