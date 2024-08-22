// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFSOFTWAREUPDATE_H
#define _MKFSOFTWAREUPDATE_H

@class MKFModel, NSString, HMSoftwareUpdateDocumentationMetadata, NSNumber, NSUUID, NSDate, HMFSoftwareVersion;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFSoftwareUpdate, MKFSoftwareUpdatePrivateExtensions, MKFAccessory, MKFHome;


#import "_MKFAccessory.h"
#import "MKFSoftwareUpdateDatabaseID.h"

@interface _MKFSoftwareUpdate : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFSoftwareUpdate, MKFSoftwareUpdatePrivateExtensions>



@property (retain, nonatomic) _MKFAccessory *accessory;
@property (readonly, retain, nonatomic) NSObject<MKFAccessory> *accessory;
@property (readonly, copy, nonatomic) MKFSoftwareUpdateDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (retain, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (copy, nonatomic) NSNumber *downloadSize;
@property (copy, nonatomic) NSNumber *downloadSize;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSNumber *installDuration;
@property (copy, nonatomic) NSNumber *installDuration;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *state;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfSoftwareUpdate;


@end


#endif