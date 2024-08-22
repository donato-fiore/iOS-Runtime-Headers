// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCPRESENTMENTSELECTION_H
#define DCPRESENTMENTSELECTION_H

@class NSData, NSString, NSDictionary, NSArray, NSXPCListenerEndpoint;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCPresentmentSelection : NSObject <NSSecureCoding>



@property (retain) NSData *authData; // ivar: _authData
@property (retain) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain) NSDictionary *deviceNamespaces; // ivar: _deviceNamespaces
@property (retain) NSDictionary *elementsToPresent; // ivar: _elementsToPresent
@property (retain) NSArray *responseEncryptionCertificateChain; // ivar: _responseEncryptionCertificateChain
@property (retain) NSXPCListenerEndpoint *seAccessEndpoint; // ivar: _seAccessEndpoint
@property (retain) NSData *sessionTranscript; // ivar: _sessionTranscript


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialIdentifier:(id)arg0 elementsToPresent:(id)arg1 authData:(id)arg2 seAccessEndpoint:(id)arg3 ;
-(id)initWithCredentialIdentifier:(id)arg0 elementsToPresent:(id)arg1 authData:(id)arg2 seAccessEndpoint:(id)arg3 deviceNamespaces:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif