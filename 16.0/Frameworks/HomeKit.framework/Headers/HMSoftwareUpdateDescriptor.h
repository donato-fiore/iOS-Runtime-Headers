// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMSOFTWAREUPDATEDESCRIPTOR_H
#define HMSOFTWAREUPDATEDESCRIPTOR_H

@class HMFObject, NSNumber, NSError, NSString, HMFSoftwareVersion;


#import "HMSoftwareUpdateDocumentationMetadata.h"

@interface HMSoftwareUpdateDescriptor : HMFObject

@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // ivar: _documentationMetadata
@property (retain) NSNumber *downloadSize; // ivar: _downloadSize
@property (readonly) NSError *error; // ivar: _error
@property (readonly, copy) NSString *humanReadableUpdateName; // ivar: _humanReadableUpdateName
@property (retain) NSNumber *rampFeatureEnabledOnServer; // ivar: _rampFeatureEnabledOnServer
@property NSInteger status; // ivar: _status
@property (readonly) HMFSoftwareVersion *version; // ivar: _version


+(id)descriptorFromEvent:(id)arg0 ;
+(id)shortDescription;
-(id)attributeDescriptions;
-(id)description;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 downloadSize:(id)arg1 humanReadableUpdateName:(id)arg2 rampEnabled:(id)arg3 errorCode:(id)arg4 serverAssetURL:(id)arg5 serverAssetAlgorithm:(id)arg6 serverAssetMeasurement:(id)arg7 majorVersion:(id)arg8 minorVersion:(id)arg9 updateVersion:(id)arg10 buildVersion:(id)arg11 ;
-(id)initWithStatus:(NSInteger)arg0 error:(id)arg1 documentationMetadata:(id)arg2 version:(id)arg3 downloadSize:(id)arg4 humanReadableUpdateName:(id)arg5 rampFeatureEnabledOnServer:(id)arg6 ;
-(id)privateDescription;
-(id)protoPayload;
-(id)shortDescription;


@end


#endif