// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSMESSAGECONTEXT_H
#define IDSMESSAGECONTEXT_H

@class NSString, NSData, NSNumber, NSError, NSDictionary, NSDate;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>

#import "IDSCertifiedDeliveryContext.h"
#import "IDSPseudonym.h"

@interface IDSMessageContext : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_storageGuid;
    NSString *_outgoingResponseIdentifier;
    NSString *_incomingResponseIdentifier;
    NSString *_serviceIdentifier;
    NSString *_fromID;
    NSString *_toID;
    NSString *_originalDestinationDevice;
    NSData *_engramGroupID;
    NSNumber *_originalCommand;
    NSNumber *_serverTimestamp;
    NSNumber *_originalTimestamp;
    NSNumber *_publicIntentAction;
    NSError *_wpConnectionError;
    NSString *_senderCorrelationIdentifier;
    NSString *_destinationCorrelationIdentifier;
    NSString *_resourceTransferURLString;
    NSString *_resourceTransferSandboxExtension;
    NSDictionary *_resourceTransferMetadata;
    NSNumber *_broadcastTime;
    NSNumber *_priority;
    NSNumber *_bytesSent;
    NSNumber *_totalBytes;
    NSDictionary *_targettedPseudonymDict;
    NSInteger _broadcastID;
    NSInteger _connectionType;
    os_unfair_lock_s _lock;
    BOOL _expectsPeerResponse;
    BOOL _wantsManualAck;
    BOOL _fromServerStorage;
    BOOL _wantsAppAck;
    BOOL _isDirectMessage;
    BOOL _usedEngram;
}


@property (readonly, nonatomic) CGFloat averageLocalRTT; // ivar: _averageLocalRTT
@property (retain, nonatomic) id *boostContext; // ivar: _boostContext
@property (nonatomic) NSInteger broadcastID;
@property (retain, nonatomic) NSNumber *broadcastTime;
@property (readonly, copy, nonatomic) NSNumber *bytesSent;
@property (readonly, nonatomic) IDSCertifiedDeliveryContext *certifiedDeliveryContext; // ivar: _certifiedDeliveryContext
@property (nonatomic) NSInteger connectionType;
@property (copy, nonatomic) NSString *destinationCorrelationIdentifier;
@property (readonly, nonatomic) BOOL deviceBlackedOut; // ivar: _deviceBlackedOut
@property (readonly, nonatomic) NSInteger endpointState; // ivar: _endpointState
@property (copy, nonatomic) NSData *engramGroupID;
@property (nonatomic) BOOL expectsPeerResponse;
@property (copy, nonatomic) NSString *fromID;
@property (nonatomic) BOOL fromServerStorage;
@property (copy, nonatomic) NSString *incomingResponseIdentifier;
@property (nonatomic) BOOL isDirectMessage;
@property (readonly, nonatomic) NSInteger localMessageState; // ivar: _localMessageState
@property (nonatomic) BOOL messageHadEncryptedData; // ivar: _messageHadEncryptedData
@property (readonly, copy, nonatomic) NSNumber *messageSequenceNumber; // ivar: _messageSequenceNumber
@property (copy, nonatomic) NSNumber *originalCommand;
@property (copy, nonatomic) NSString *originalDestinationDevice;
@property (copy, nonatomic) NSString *originalGUID; // ivar: _originalGUID
@property (copy, nonatomic) NSNumber *originalTimestamp;
@property (copy, nonatomic) NSString *outgoingResponseIdentifier;
@property (retain, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSNumber *publicIntentAction;
@property (copy, nonatomic) NSDictionary *resourceTransferMetadata;
@property (copy, nonatomic) NSString *resourceTransferSandboxExtension;
@property (copy, nonatomic) NSString *resourceTransferURLString;
@property (copy, nonatomic) NSString *senderCorrelationIdentifier;
@property (readonly, nonatomic) NSDate *serverReceivedTime;
@property (copy, nonatomic) NSNumber *serverTimestamp;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSString *storageGuid;
@property (readonly, nonatomic) IDSPseudonym *targettedPseudonym;
@property (copy, nonatomic) NSString *toID;
@property (readonly, copy, nonatomic) NSNumber *totalBytes;
@property (nonatomic) BOOL usedEngram;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL wantsManualAck;
@property (readonly, nonatomic) NSError *wpConnectionError;


-(id)initWithDictionary:(id)arg0 boostContext:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)setOriginalGuid:(id)arg0 ;
-(void)setWPConnectionError:(id)arg0 ;


@end


#endif