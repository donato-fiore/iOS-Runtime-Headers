// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSOFTWAREUPDATEMODEL_H
#define HMDSOFTWAREUPDATEMODEL_H

@class NSString, HMSoftwareUpdateDocumentationMetadata, NSNumber, NSDate, HMFSoftwareVersion;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (copy, nonatomic) NSNumber *downloadSize;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *installDuration;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (copy, nonatomic) NSNumber *state;
@property (readonly) Class superclass;


+(Class)cd_entityClass;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)cd_fetchManagedObjectWithError:(*id)arg0 ;


@end


#endif