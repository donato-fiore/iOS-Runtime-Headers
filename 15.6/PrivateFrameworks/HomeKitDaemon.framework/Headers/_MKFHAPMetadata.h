// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFHAPMETADATA_H
#define _MKFHAPMETADATA_H

@class MKFModel, NSString, NSUUID, NSData, NSNumber, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHAPMetadata, MKFHAPMetadataPrivateExtensions, MKFHomeManager;


#import "MKFHAPMetadataDatabaseID.h"
#import "_MKFHomeManager.h"

@interface _MKFHAPMetadata : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHAPMetadata, MKFHAPMetadataPrivateExtensions>



@property (readonly, copy, nonatomic) MKFHAPMetadataDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHomeManager *homeManager;
@property (readonly, retain, nonatomic) NSObject<MKFHomeManager> *homeManager;
@property (retain, nonatomic) NSData *legacyCloudData;
@property (retain, nonatomic) NSData *legacyCloudData;
@property (retain, nonatomic) NSData *legacyIDSData;
@property (retain, nonatomic) NSData *legacyIDSData;
@property (copy, nonatomic) NSNumber *metadataVersion;
@property (copy, nonatomic) NSNumber *metadataVersion;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSData *rawPlist;
@property (retain, nonatomic) NSData *rawPlist;
@property (copy, nonatomic) NSNumber *schemaVersion;
@property (copy, nonatomic) NSNumber *schemaVersion;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfHAPMetadata;


@end


#endif