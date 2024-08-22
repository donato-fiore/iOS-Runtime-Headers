// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGOPERATIONCONTEXT_H
#define PKSUBCREDENTIALPROVISIONINGOPERATIONCONTEXT_H

@class NSData, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKAppletSubcredential.h"
#import "PKAppletSubcredentialEncryptedRequest.h"
#import "PKAppletSubcredentialSharingInvitation.h"

@interface PKSubcredentialProvisioningOperationContext : NSObject

@property (retain, nonatomic) PKAppletSubcredential *addedCredential; // ivar: _addedCredential
@property (retain, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (retain, nonatomic) NSData *ephemeralPublicKey; // ivar: _ephemeralPublicKey
@property (nonatomic) BOOL hasAcceptedInvitation; // ivar: _hasAcceptedInvitation
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) NSURL *passURL; // ivar: _passURL
@property (retain, nonatomic) PKAppletSubcredentialEncryptedRequest *registrationData; // ivar: _registrationData
@property (retain, nonatomic) PKAppletSubcredentialSharingInvitation *sentInvitation; // ivar: _sentInvitation
@property (retain, nonatomic) NSData *trackingAttestation; // ivar: _trackingAttestation


-(id)initWithQueue:(id)arg0 ;


@end


#endif