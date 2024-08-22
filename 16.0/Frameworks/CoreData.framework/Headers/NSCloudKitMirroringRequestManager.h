// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCLOUDKITMIRRORINGREQUESTMANAGER_H
#define NSCLOUDKITMIRRORINGREQUESTMANAGER_H


#import <Foundation/Foundation.h>

#import "NSCloudKitMirroringImportRequest.h"
#import "NSCloudKitMirroringExportRequest.h"
#import "NSCloudKitMirroringDelegateSetupRequest.h"
#import "NSCloudKitMirroringDelegateResetRequest.h"
#import "NSCloudKitMirroringResetZoneRequest.h"
#import "NSCloudKitMirroringFetchRecordsRequest.h"
#import "NSCloudKitMirroringResetMetadataRequest.h"
#import "NSCloudKitMirroringDelegateSerializationRequest.h"
#import "NSCloudKitMirroringInitializeSchemaRequest.h"
#import "NSCloudKitMirroringExportProgressRequest.h"
#import "NSCloudKitMirroringAcceptShareInvitationsRequest.h"
#import "NSCloudKitMirroringRequest.h"

@interface NSCloudKitMirroringRequestManager : NSObject {
    NSCloudKitMirroringImportRequest *_pendingImportRequest;
    NSCloudKitMirroringExportRequest *_pendingExportRequest;
    NSCloudKitMirroringDelegateSetupRequest *_pendingSetupRequest;
    NSCloudKitMirroringDelegateResetRequest *_pendingDelegateResetRequest;
    NSCloudKitMirroringResetZoneRequest *_pendingResetRequest;
    NSCloudKitMirroringFetchRecordsRequest *_pendingFetchRecordsRequest;
    NSCloudKitMirroringResetMetadataRequest *_pendingResetMetadataRequest;
    NSCloudKitMirroringDelegateSerializationRequest *_pendingSerializationRequest;
    NSCloudKitMirroringInitializeSchemaRequest *_pendingInitializeSchemaRequest;
    NSCloudKitMirroringExportProgressRequest *_pendingExportProgressRequest;
    NSCloudKitMirroringAcceptShareInvitationsRequest *_pendingAcceptShareInvitationRequest;
    NSCloudKitMirroringRequest *_activeRequest;
}




-(void)dealloc;


@end


#endif