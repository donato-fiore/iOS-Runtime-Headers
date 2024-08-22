// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHAPMETADATAMODEL_H
#define HMDHAPMETADATAMODEL_H

@class NSString, NSData, NSNumber, NSDictionary;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDHAPMetadataModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *legacyCloudData;
@property (retain, nonatomic) NSData *legacyIDSData;
@property (retain, nonatomic) NSNumber *metadataVersion;
@property (retain, nonatomic) NSDictionary *rawPlist;
@property (retain, nonatomic) NSNumber *schemaVersion;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)allowedTypes;
+(id)cd_parentReferenceName;
+(id)metadataModelObjectUUID;
+(id)modelWithDictionary:(id)arg0 ;
+(id)properties;
-(id)metadataDictionary;


@end


#endif