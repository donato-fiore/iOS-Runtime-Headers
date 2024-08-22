// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSBASEMESSAGE_H
#define IDSBASEMESSAGE_H

@class NSDictionary, NSString, NSData, NSURL, NSMutableArray, NSDate, NSNumber, NSArray;
@protocol NSCopying, IDSBaseMessageSigningSession;

#import <Foundation/Foundation.h>


@interface IDSBaseMessage : NSObject <NSCopying>

 {
    NSDictionary *_responseAlert;
    NSString *_dataUsageBundleIdentifier;
}


@property (readonly, copy, nonatomic) NSData *IDCertificate;
@property (copy) NSURL *URLOverride; // ivar: _URLOverride
@property (retain, setter=_setCachedBody:) NSDictionary *_cachedBody; // ivar: _cachedBody
@property (setter=_setUsingOutgoingPush:) BOOL _usingOutgoingPush; // ivar: _usingOutgoingPush
@property (readonly) NSDictionary *additionalInternalHeaders;
@property (readonly) NSDictionary *additionalMessageHeaders;
@property (readonly) NSDictionary *additionalMessageHeadersForOutgoingPush;
@property (readonly) NSDictionary *additionalQueryStringParameters;
@property (readonly) BOOL allowDualDelivery;
@property (readonly) BOOL allowsServerProvidedLenientAnisetteTimeout;
@property (readonly) CGFloat anisetteHeadersTimeout;
@property (readonly) NSString *bagKey;
@property (copy, nonatomic) NSMutableArray *certDataArray;
@property (copy) NSDictionary *clientInfo; // ivar: _clientInfo
@property (readonly) NSInteger command;
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (retain) id *context; // ivar: _context
@property (retain) NSDate *creationDate; // ivar: _creationDate
@property (readonly) CGFloat customRetryInterval;
@property (readonly) NSString *dataUsageBundleIdentifier;
@property (copy) id *deliveryAcknowledgementBlock; // ivar: _deliveryAcknowledgementBlock
@property NSInteger deliveryMechanism; // ivar: _deliveryMechanism
@property (copy, nonatomic, setter=setDSAuthID:) NSString *dsAuthID; // ivar: _dsAuthID
@property BOOL forceCellular; // ivar: _forceCellular
@property BOOL hasAttemptedAPSDelivery; // ivar: _hasAttemptedAPSDelivery
@property BOOL hasReceivedPushAck; // ivar: _hasReceivedPushAck
@property BOOL highPriority; // ivar: _highPriority
@property BOOL httpDoNotDecodeData; // ivar: _httpDoNotDecodeData
@property (readonly, nonatomic) *__SecKey identityPrivateKey;
@property (readonly, nonatomic) *__SecKey identityPublicKey;
@property BOOL ignoreMaxRetryCount; // ivar: _ignoreMaxRetryCount
@property (readonly, nonatomic) BOOL ignorePushSigHeaders;
@property (readonly) BOOL ignoresNetworkConnectivity;
@property NSInteger importanceLevel; // ivar: _importanceLevel
@property (nonatomic) BOOL isMultipleAuthCertCapable; // ivar: _isMultipleAuthCertCapable
@property (readonly) BOOL isValidMessage;
@property (readonly) BOOL isWebTunnelMessage;
@property (readonly) int maxTimeoutRetries;
@property (readonly) NSDictionary *messageBody;
@property (readonly) NSDictionary *messageBodyUsingCache;
@property (readonly) NSDictionary *nonStandardMessageHeadersForOutgoingPush;
@property (copy, nonatomic) NSNumber *originalTimestamp; // ivar: _originalTimestamp
@property (readonly) BOOL payloadCanBeLogged;
@property (copy, nonatomic) NSMutableArray *privateKeyArray;
@property (copy, nonatomic) NSMutableArray *publicKeyArray;
@property (retain) NSNumber *pushAckTimestamp; // ivar: _pushAckTimestamp
@property (copy, nonatomic) NSData *pushCertificate;
@property (nonatomic) *__SecKey pushPrivateKey;
@property (nonatomic) *__SecKey pushPublicKey;
@property (copy, nonatomic) NSData *pushToken;
@property (nonatomic) NSUInteger receivedByteCount; // ivar: _receivedByteCount
@property (retain, nonatomic) NSDate *requestEnd; // ivar: _requestEnd
@property (retain, nonatomic) NSDate *requestStart; // ivar: _requestStart
@property (readonly) NSArray *requiredKeys;
@property (readonly) BOOL requiresPushTokenKeys;
@property (copy) NSDictionary *responseAlertInfo; // ivar: _responseAlertInfo
@property (readonly) NSInteger responseCommand;
@property (retain, nonatomic) NSDate *responseReceived; // ivar: _responseReceived
@property (copy, nonatomic) NSNumber *retryCount; // ivar: _retryCount
@property (readonly) NSString *retryCountKey;
@property (nonatomic) NSUInteger sentByteCount; // ivar: _sentByteCount
@property (copy, nonatomic) NSNumber *serverTimestamp;
@property (copy, nonatomic) NSNumber *serverTimestampReceivedDate;
@property (copy) NSString *service; // ivar: _service
@property (copy) NSData *serviceData; // ivar: _serviceData
@property (retain, nonatomic) NSObject<IDSBaseMessageSigningSession> *signingSession; // ivar: _signingSession
@property (copy) NSString *subService; // ivar: _subService
@property CGFloat timeSent; // ivar: _timeSent
@property CGFloat timeout; // ivar: _timeout
@property int timeoutRetries; // ivar: _timeoutRetries
@property (retain) NSString *topic; // ivar: _topic
@property (copy) NSString *underlyingService; // ivar: _underlyingService
@property NSUInteger uniqueID; // ivar: _uniqueID
@property (readonly) NSString *uniqueIDString;
@property (readonly) NSString *userAgentHeaderString;
@property (copy, nonatomic) NSMutableArray *userIDArray;
@property (copy) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly) BOOL wantsAPSRetries;
@property (readonly) BOOL wantsBagKey;
@property BOOL wantsBinaryPush; // ivar: _wantsBinaryPush
@property (readonly) BOOL wantsBodySignature;
@property (readonly, nonatomic) BOOL wantsBodySigningOnly;
@property (readonly) BOOL wantsCFNetworkTimeout;
@property (readonly) BOOL wantsCompressedBody;
@property (readonly) BOOL wantsCustomRetryInterval;
@property (readonly) BOOL wantsExtraTimeoutRetry;
@property (readonly) BOOL wantsHTTPGet;
@property (readonly) BOOL wantsHTTPHeaders;
@property (readonly) BOOL wantsIDSServer;
@property (readonly) BOOL wantsIDSSignatures;
@property BOOL wantsIntegerUniqueIDs; // ivar: _wantsIntegerUniqueIDs
@property (readonly) BOOL wantsJSONBody;
@property (readonly) BOOL wantsManagedRetries;
@property BOOL wantsMultipleResponses; // ivar: _wantsMultipleResponses
@property BOOL wantsResponse; // ivar: _wantsResponse
@property (readonly) BOOL wantsSignature;
@property (readonly) BOOL wantsStatusCodeBasedRetries;
@property (readonly) BOOL wantsUserAgentInHeaders;


-(BOOL)hasRequiredKeys:(*id)arg0 ;
-(BOOL)isIDSMessage;
-(BOOL)isMMLMessage;
-(BOOL)wantsClientInfo;
-(BOOL)wantsGZip;
-(BOOL)wantsUDID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)overrideContentType;
-(id)parsedIDSMessageResult;
-(void)_cacheBody;
-(void)_clearCache;
-(void)handleResponseBody:(id)arg0 ;
-(void)handleResponseDictionary:(id)arg0 ;
-(void)handleResponseHeaders:(id)arg0 ;
-(void)handleResponseStatus:(NSUInteger)arg0 ;
-(void)logFailureInfo;


@end


#endif