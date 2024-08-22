// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLETSUBCREDENTIAL_H
#define PKAPPLETSUBCREDENTIAL_H

@class NSString, NSSet, NSData, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAppletSubcredentialEntitlement.h"
#import "PKAppletSubcredentialSharingConfirguration.h"
#import "PKAppletSubcredentialEncryptedRequest.h"

@interface PKAppletSubcredential : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *appletIdentifier; // ivar: _appletIdentifier
@property (readonly, nonatomic) BOOL canShare;
@property (nonatomic) NSUInteger credentialState; // ivar: _credentialState
@property (nonatomic) NSInteger credentialType; // ivar: _credentialType
@property (copy, nonatomic) NSString *endpointIdentifier; // ivar: _endpointIdentifier
@property (retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // ivar: _entitlement
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *invitationIdentifier; // ivar: _invitationIdentifier
@property (copy, nonatomic) NSSet *invitationReceipts; // ivar: _invitationReceipts
@property (nonatomic) BOOL isOnlineImmobilizerToken; // ivar: _isOnlineImmobilizerToken
@property (copy, nonatomic) NSString *isoFormat; // ivar: _isoFormat
@property (copy, nonatomic) NSString *originatorIDSHandle; // ivar: _originatorIDSHandle
@property (copy, nonatomic) NSString *pairedReaderIdentifier; // ivar: _pairedReaderIdentifier
@property (copy, nonatomic) NSString *partnerIdentifier; // ivar: _partnerIdentifier
@property (retain, nonatomic) NSData *readerIdentifier; // ivar: _readerIdentifier
@property (readonly, nonatomic, getter=isShareable) BOOL shareable;
@property (readonly, nonatomic, getter=isSharedCredential) BOOL sharedCredential;
@property (copy, nonatomic) NSSet *sharedCredentials; // ivar: _sharedCredentials
@property (retain, nonatomic) PKAppletSubcredentialSharingConfirguration *sharingConfiguration; // ivar: _sharingConfiguration
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier; // ivar: _sharingSessionIdentifier
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSUInteger supportedRadioTechnologies; // ivar: _supportedRadioTechnologies
@property (retain, nonatomic) PKAppletSubcredentialEncryptedRequest *trackingRequest; // ivar: _trackingRequest
@property (retain, nonatomic) NSData *transactionKey; // ivar: _transactionKey


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asDictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithKeyInformation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif