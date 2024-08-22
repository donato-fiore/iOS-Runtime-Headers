// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLASTDOORAPSUSERPAYLOAD_H
#define BLASTDOORAPSUSERPAYLOAD_H

@class NSString, NSArray, NSData;

#import <Foundation/Foundation.h>

#import "BlastDoorAPSUserPayloadDeliveryContext.h"
#import "BlastDoorAPSUserPayloadHttpHeaders.h"

@interface BlastDoorAPSUserPayload : NSObject {
    ? aPSUserPayload;
}


@property (nonatomic, readonly) NSString *MMCSAuthId;
@property (nonatomic, readonly) NSString *MMCSAuthToken;
@property (nonatomic, readonly) NSString *MMCSAuthUrl;
@property (nonatomic, readonly) NSArray *MMCSDownloadAuthList;
@property (nonatomic, readonly) NSString *MMCSDownloadUrl;
@property (nonatomic, readonly) NSArray *MMCSDownloadUrlList;
@property (nonatomic, readonly) NSInteger MMCSExpiryNanos;
@property (nonatomic, readonly) NSInteger MMCSFileLength;
@property (nonatomic, readonly) NSData *MMCSFileSignature;
@property (nonatomic, readonly) NSString *MMCSOwnerId;
@property (nonatomic, readonly) NSString *MMCSUploadUrl;
@property (nonatomic, readonly) NSData *activeAccessToken;
@property (nonatomic, readonly) NSData *activeRelayIp;
@property (nonatomic, readonly) NSData *additionalPayload;
@property (nonatomic, readonly) NSString *adhocServiceOverride;
@property (nonatomic, readonly) NSInteger allocateInfoAttribute;
@property (nonatomic, readonly) NSInteger allocationEpochTimeMillis;
@property (nonatomic, readonly) NSInteger allocationStatus;
@property (nonatomic, readonly) NSArray *allocationStatuses;
@property (nonatomic, readonly) NSInteger allowGDR;
@property (nonatomic, readonly) NSString *applicationId;
@property (nonatomic, readonly) NSString *asHttpHeader;
@property (nonatomic, readonly) NSInteger attachmentSize;
@property (nonatomic, readonly) NSData *bulkedPayload;
@property (nonatomic, readonly) NSData *certifiedDeliveryRts;
@property (nonatomic, readonly) NSInteger certifiedDeliveryVersion;
@property (nonatomic, readonly) NSInteger command;
@property (nonatomic, readonly) NSInteger commandContext;
@property (nonatomic, readonly) NSString *conferenceURI;
@property (nonatomic, readonly) NSData *contentBody;
@property (nonatomic, readonly) NSString *contentHeaders;
@property (nonatomic, readonly) NSData *contentReferenceSignature;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSInteger contentVersion;
@property (nonatomic, readonly) NSInteger conversationId;
@property (nonatomic, readonly) NSInteger dateExpirationSeconds;
@property (nonatomic, readonly) BlastDoorAPSUserPayloadDeliveryContext *deliveryContext;
@property (nonatomic, readonly) BOOL deliveryStatus;
@property (nonatomic, readonly) NSInteger deliveryStatusFlags;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *destinationId;
@property (nonatomic, readonly) NSArray *dstIdTokenList;
@property (nonatomic, readonly) NSString *encryptionType;
@property (nonatomic, readonly) NSInteger epochTimeNanos;
@property (nonatomic, readonly) NSInteger errorCode;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) BOOL expectsPeerResponse;
@property (nonatomic, readonly) NSInteger expiryEpochTimeMillis;
@property (nonatomic, readonly) NSInteger faceTimeRetryCount;
@property (nonatomic, readonly) NSInteger failDownloadAttachmentSize;
@property (nonatomic, readonly) NSData *failMessageId;
@property (nonatomic, readonly) NSString *failMessageIdString;
@property (nonatomic, readonly) NSInteger failReason;
@property (nonatomic, readonly) NSString *failReasonMessage;
@property (nonatomic, readonly) NSInteger failTimeElapsed;
@property (nonatomic, readonly) NSInteger failUploadAttachmentSize;
@property (nonatomic, readonly) NSInteger fanoutChunkNumber;
@property (nonatomic, readonly) BOOL fanoutLastChunk;
@property (nonatomic, readonly) NSData *fanoutPayload;
@property (nonatomic, readonly) BOOL generateDeliveryReceipt;
@property (nonatomic, readonly) NSString *groupId;
@property (nonatomic, readonly) NSInteger groupMemberCount;
@property (nonatomic, readonly) BOOL groupMessage;
@property (nonatomic, readonly) BOOL has_MMCSExpiryNanos;
@property (nonatomic, readonly) BOOL has_MMCSFileLength;
@property (nonatomic, readonly) BOOL has_allocateInfoAttribute;
@property (nonatomic, readonly) BOOL has_allocationEpochTimeMillis;
@property (nonatomic, readonly) BOOL has_allocationStatus;
@property (nonatomic, readonly) BOOL has_allowGDR;
@property (nonatomic, readonly) BOOL has_attachmentSize;
@property (nonatomic, readonly) BOOL has_certifiedDeliveryVersion;
@property (nonatomic, readonly) BOOL has_commandContext;
@property (nonatomic, readonly) BOOL has_contentVersion;
@property (nonatomic, readonly) BOOL has_conversationId;
@property (nonatomic, readonly) BOOL has_dateExpirationSeconds;
@property (nonatomic, readonly) BOOL has_deliveryStatus;
@property (nonatomic, readonly) BOOL has_deliveryStatusFlags;
@property (nonatomic, readonly) BOOL has_epochTimeNanos;
@property (nonatomic, readonly) BOOL has_errorCode;
@property (nonatomic, readonly) BOOL has_expectsPeerResponse;
@property (nonatomic, readonly) BOOL has_expiryEpochTimeMillis;
@property (nonatomic, readonly) BOOL has_faceTimeRetryCount;
@property (nonatomic, readonly) BOOL has_failDownloadAttachmentSize;
@property (nonatomic, readonly) BOOL has_failReason;
@property (nonatomic, readonly) BOOL has_failTimeElapsed;
@property (nonatomic, readonly) BOOL has_failUploadAttachmentSize;
@property (nonatomic, readonly) BOOL has_fanoutChunkNumber;
@property (nonatomic, readonly) BOOL has_fanoutLastChunk;
@property (nonatomic, readonly) BOOL has_generateDeliveryReceipt;
@property (nonatomic, readonly) BOOL has_groupMemberCount;
@property (nonatomic, readonly) BOOL has_groupMessage;
@property (nonatomic, readonly) BOOL has_homekitDeliveryStatus;
@property (nonatomic, readonly) BOOL has_httpResponseStatus;
@property (nonatomic, readonly) BOOL has_internalBuild;
@property (nonatomic, readonly) BOOL has_isBulkedPayload;
@property (nonatomic, readonly) BOOL has_isInitiatorKey;
@property (nonatomic, readonly) BOOL has_loggingProfile;
@property (nonatomic, readonly) BOOL has_madridProtocol;
@property (nonatomic, readonly) BOOL has_messageCheckpoint;
@property (nonatomic, readonly) BOOL has_noResponseNeeded;
@property (nonatomic, readonly) BOOL has_originalCommand;
@property (nonatomic, readonly) BOOL has_originalEpochTimeNanos;
@property (nonatomic, readonly) BOOL has_participantId;
@property (nonatomic, readonly) BOOL has_pessimisticCheck;
@property (nonatomic, readonly) BOOL has_pluginDevMode;
@property (nonatomic, readonly) BOOL has_pluginStream;
@property (nonatomic, readonly) BOOL has_prevErrorCode;
@property (nonatomic, readonly) BOOL has_prevTimestamp;
@property (nonatomic, readonly) BOOL has_priority;
@property (nonatomic, readonly) BOOL has_protocolVersion;
@property (nonatomic, readonly) BOOL has_qrErrorCode;
@property (nonatomic, readonly) BOOL has_qrNewSession;
@property (nonatomic, readonly) BOOL has_reason;
@property (nonatomic, readonly) BOOL has_relayPort;
@property (nonatomic, readonly) BOOL has_relayProvider;
@property (nonatomic, readonly) BOOL has_relayServerType;
@property (nonatomic, readonly) BOOL has_requestType;
@property (nonatomic, readonly) BOOL has_responseStatus;
@property (nonatomic, readonly) BOOL has_retryCount;
@property (nonatomic, readonly) BOOL has_selfAllocTokenCount;
@property (nonatomic, readonly) BOOL has_selfAllocTokenCountOld;
@property (nonatomic, readonly) BOOL has_senderExpectsAck;
@property (nonatomic, readonly) BOOL has_sharedSession;
@property (nonatomic, readonly) BOOL has_storageCheckVersion;
@property (nonatomic, readonly) BOOL has_storageFlags;
@property (nonatomic, readonly) BOOL has_testDropPoint;
@property (nonatomic, readonly) BOOL has_traceProfile;
@property (nonatomic, readonly) BOOL has_unfilteredHeaders;
@property (nonatomic, readonly) BOOL has_userPlusOne;
@property (nonatomic, readonly) BOOL has_version;
@property (nonatomic, readonly) BOOL has_wantsAppAck;
@property (nonatomic, readonly) BOOL has_webtunnelVersion;
@property (nonatomic, readonly) BOOL has_writeToCloudkit;
@property (nonatomic, readonly) NSInteger homekitDeliveryStatus;
@property (nonatomic, readonly) NSString *homekitReportId;
@property (nonatomic, readonly) NSData *homekitSessionToken;
@property (nonatomic, readonly) NSData *httpBody;
@property (nonatomic, readonly) NSData *httpBodyKey;
@property (nonatomic, readonly) NSString *httpBodyUrl;
@property (nonatomic, readonly) NSString *httpErrorMsg;
@property (nonatomic, readonly) BlastDoorAPSUserPayloadHttpHeaders *httpHeaders;
@property (nonatomic, readonly) NSInteger httpResponseStatus;
@property (nonatomic, readonly) NSString *httpUrl;
@property (nonatomic, readonly) NSData *idsSessionId;
@property (nonatomic, readonly) NSData *initiatorIp;
@property (nonatomic, readonly) BOOL internalBuild;
@property (nonatomic, readonly) BOOL isBulkedPayload;
@property (nonatomic, readonly) BOOL isInitiatorKey;
@property (nonatomic, readonly) BOOL loggingProfile;
@property (nonatomic, readonly) NSArray *madridMessageList;
@property (nonatomic, readonly) NSInteger madridProtocol;
@property (nonatomic, readonly) BOOL messageCheckpoint;
@property (nonatomic, readonly) NSString *messageId;
@property (nonatomic, readonly) NSData *messageUUID;
@property (nonatomic, readonly) NSString *mspId;
@property (nonatomic, readonly) BOOL noResponseNeeded;
@property (nonatomic, readonly) NSInteger originalCommand;
@property (nonatomic, readonly) NSInteger originalEpochTimeNanos;
@property (nonatomic, readonly) NSInteger participantId;
@property (nonatomic, readonly) NSData *payload;
@property (nonatomic, readonly) NSData *payloadMetadata;
@property (nonatomic, readonly) BOOL pessimisticCheck;
@property (nonatomic, readonly) NSArray *pluginAllocations;
@property (nonatomic, readonly) NSString *pluginConfig;
@property (nonatomic, readonly) BOOL pluginDevMode;
@property (nonatomic, readonly) NSString *pluginName;
@property (nonatomic, readonly) NSArray *pluginRequests;
@property (nonatomic, readonly) NSInteger pluginStream;
@property (nonatomic, readonly) NSData *prevAccessToken;
@property (nonatomic, readonly) NSInteger prevErrorCode;
@property (nonatomic, readonly) NSData *prevRelayIp;
@property (nonatomic, readonly) NSInteger prevTimestamp;
@property (nonatomic, readonly) NSInteger priority;
@property (nonatomic, readonly) NSInteger protocolVersion;
@property (nonatomic, readonly) NSInteger qrErrorCode;
@property (nonatomic, readonly) BOOL qrNewSession;
@property (nonatomic, readonly) NSData *queryHash;
@property (nonatomic, readonly) NSString *queueId;
@property (nonatomic, readonly) NSInteger reason;
@property (nonatomic, readonly) NSData *relayAccessToken;
@property (nonatomic, readonly) NSString *relayBuildVersion;
@property (nonatomic, readonly) NSData *relayIp;
@property (nonatomic, readonly) NSData *relayIpv6;
@property (nonatomic, readonly) NSInteger relayPort;
@property (nonatomic, readonly) NSInteger relayProvider;
@property (nonatomic, readonly) NSData *relayReportingBlob;
@property (nonatomic, readonly) NSInteger relayServerType;
@property (nonatomic, readonly) NSData *relaySessionId;
@property (nonatomic, readonly) NSData *relaySessionKey;
@property (nonatomic, readonly) NSInteger requestType;
@property (nonatomic, readonly) NSData *responseIdentifier;
@property (nonatomic, readonly) NSString *responseIdentifierString;
@property (nonatomic, readonly) NSInteger responseStatus;
@property (nonatomic, readonly) NSInteger retryCount;
@property (nonatomic, readonly) NSInteger selfAllocTokenCount;
@property (nonatomic, readonly) NSInteger selfAllocTokenCountOld;
@property (nonatomic, readonly) NSArray *selfAllocTokenList;
@property (nonatomic, readonly) NSData *selfSessionToken;
@property (nonatomic, readonly) NSInteger senderExpectsAck;
@property (nonatomic, readonly) NSString *senderId;
@property (nonatomic, readonly) NSString *senderOpaqueId;
@property (nonatomic, readonly) NSData *sessionToken;
@property (nonatomic, readonly) BOOL sharedSession;
@property (nonatomic, readonly) NSData *softwareVersion;
@property (nonatomic, readonly) NSString *splunkHint;
@property (nonatomic, readonly) NSInteger storageCheckVersion;
@property (nonatomic, readonly) NSInteger storageFlags;
@property (nonatomic, readonly) NSString *strictTransportSecurity;
@property (nonatomic, readonly) NSInteger testDropPoint;
@property (nonatomic, readonly) NSString *testOptions;
@property (nonatomic, readonly) NSData *token;
@property (nonatomic, readonly) NSString *traceId;
@property (nonatomic, readonly) BOOL traceProfile;
@property (nonatomic, readonly) BOOL unfilteredHeaders;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *userAgent;
@property (nonatomic, readonly) BOOL userPlusOne;
@property (nonatomic, readonly) NSInteger version;
@property (nonatomic, readonly) BOOL wantsAppAck;
@property (nonatomic, readonly) NSInteger webtunnelVersion;
@property (nonatomic, readonly) BOOL writeToCloudkit;


-(id)init;


@end


#endif