// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSOFTWAREUPDATEMODEL_H
#define HMDSOFTWAREUPDATEMODEL_H

@class HMSoftwareUpdateDocumentationMetadata, NSNumber, NSDate, HMFSoftwareVersion;


#import "HMDBackingStoreModelObject.h"

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject

@property (copy, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (copy, nonatomic) NSNumber *downloadSize;
@property (copy, nonatomic) NSNumber *installDuration;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (copy, nonatomic) NSNumber *state;


+(id)properties;


@end


#endif