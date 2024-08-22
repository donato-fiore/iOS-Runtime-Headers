// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCPRESENTMENTREQUEST_H
#define DCPRESENTMENTREQUEST_H

@class NSData, NSXPCListenerEndpoint;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCPresentmentRequest : NSObject <NSSecureCoding>



@property (retain) NSData *requiredPublicKeyIdentifier; // ivar: _requiredPublicKeyIdentifier
@property (retain) NSXPCListenerEndpoint *seAccessEndpoint; // ivar: _seAccessEndpoint
@property (retain) NSData *sessionEncryptionIntermediateKeyMaterial; // ivar: _sessionEncryptionIntermediateKeyMaterial
@property (retain) NSData *sessionEstablishment; // ivar: _sessionEstablishment
@property (retain) NSData *sessionTranscript; // ivar: _sessionTranscript


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionEstablishment:(id)arg0 sessionTranscript:(id)arg1 ;
-(id)initWithSessionEstablishment:(id)arg0 sessionTranscript:(id)arg1 seAccessEndpoint:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif