// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSENDPARAMETERS_H
#define IDSSENDPARAMETERS_H

@class NSData, NSString, NSArray, NSNumber, NSDictionary, NSDate, NSMutableDictionary;
@protocol NSCopying, IDSPrioritizedTokenList;

#import <Foundation/Foundation.h>

#import "IDSDestination.h"

@interface IDSSendParameters : NSObject <NSCopying>



@property (retain, nonatomic) NSData *accessToken;
@property (retain, nonatomic) NSString *accountUUID;
@property (nonatomic) BOOL activityContinuation;
@property (nonatomic) BOOL allowCloudDelivery;
@property (retain, nonatomic) NSString *alternateCallbackID;
@property (nonatomic) BOOL alwaysSkipSelf;
@property (retain, nonatomic) NSArray *bulkedPayload;
@property (nonatomic) BOOL bypassDuet;
@property (nonatomic) BOOL bypassSizeCheck;
@property (nonatomic) BOOL bypassStorage;
@property (retain, nonatomic) NSNumber *command;
@property (retain, nonatomic) NSNumber *commandContext;
@property (nonatomic) BOOL compressPayload;
@property (nonatomic) BOOL compressed;
@property (nonatomic) BOOL daemonDeathResend;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *dataToEncrypt;
@property (retain, nonatomic) NSNumber *deliveryMinimumTime;
@property (retain, nonatomic) NSDictionary *deliveryStatusContext;
@property (retain, nonatomic) NSNumber *deliveryTime;
@property (retain, nonatomic) NSString *destinationCorrelationIdentifier;
@property (retain, nonatomic) IDSDestination *destinations;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL disableAliasValidation;
@property (nonatomic) BOOL disallowRefresh;
@property (retain, nonatomic) NSNumber *dropMessageIndicatorCommand;
@property (retain, nonatomic) NSArray *duetIdentifiersOverride;
@property (nonatomic) BOOL encryptPayload;
@property (retain, nonatomic) NSDictionary *encryptionAttributes;
@property (nonatomic) BOOL enforceRemoteTimeouts;
@property (nonatomic) BOOL expectsPeerResponse;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL fakeMessage;
@property (retain, nonatomic) NSArray *finalDestinations;
@property (nonatomic) BOOL fireAndForget;
@property (nonatomic) BOOL forceEncryptionOff;
@property (retain, nonatomic) NSString *fromID;
@property (retain, nonatomic) NSData *groupData;
@property (nonatomic) BOOL homeKitPayload;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL ignoreMaxRetryCount;
@property (retain, nonatomic) NSArray *interestingRegistrationProperties;
@property (retain, nonatomic) NSNumber *isInitiator;
@property (nonatomic) BOOL isProxiedOutgoingMessage;
@property (nonatomic) BOOL isUPlusOne;
@property (retain, nonatomic) NSDictionary *keyTransparencyURIVerificationMap;
@property (nonatomic) BOOL liveMessageDelivery;
@property (nonatomic) BOOL localDelivery;
@property (retain, nonatomic) NSString *localDestinationDeviceUUID;
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSString *mainAccountUUID;
@property (retain, nonatomic) NSDictionary *message;
@property (retain, nonatomic) NSNumber *messageType;
@property (retain, nonatomic) NSData *messageUUID;
@property (retain, nonatomic) NSString *metricReportIdentifier;
@property (nonatomic) BOOL nonCloudWaking;
@property (nonatomic) BOOL nonWaking;
@property (retain, nonatomic) NSNumber *originalTimestamp;
@property (retain, nonatomic) NSString *originalfromID;
@property (retain, nonatomic) NSMutableDictionary *params; // ivar: _params
@property (retain, nonatomic) NSString *peerResponseIdentifier;
@property (retain, nonatomic) NSObject<IDSPrioritizedTokenList> *prioritizedTokenList;
@property (nonatomic) NSInteger priority;
@property (retain, nonatomic) NSDictionary *protobuf;
@property (retain, nonatomic) NSNumber *pushPriority;
@property (retain, nonatomic) NSString *queueOneIdentifier;
@property (retain, nonatomic) NSArray *requireAllRegistrationProperties;
@property (nonatomic) BOOL requireBluetooth;
@property (retain, nonatomic) NSArray *requireLackOfRegistrationProperties;
@property (nonatomic) BOOL requireLocalWiFi;
@property (retain, nonatomic) NSDictionary *resourceMetadata;
@property (retain, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) NSNumber *sendMode;
@property (nonatomic) BOOL sessionForceInternetInvitation;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *subService;
@property (retain, nonatomic) NSString *subServiceAccountUUID;
@property (nonatomic) CGFloat timeout;
@property (nonatomic) BOOL useDictAsTopLevel;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL wantsCertifiedDelivery;
@property (nonatomic) BOOL wantsDeliveryStatus;
@property (nonatomic) BOOL wantsFirewallDonation;
@property (nonatomic) BOOL wantsProgress;
@property (nonatomic) BOOL wantsResponse;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif