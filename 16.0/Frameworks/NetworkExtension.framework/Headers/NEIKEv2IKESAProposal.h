// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2IKESAPROPOSAL_H
#define NEIKEV2IKESAPROPOSAL_H

@class NSArray;
@protocol NEPrettyDescription, NSCopying;

#import <Foundation/Foundation.h>

#import "NEIKEv2EncryptionProtocol.h"
#import "NEIKEv2IntegrityProtocol.h"
#import "NEIKEv2PRFProtocol.h"
#import "NEIKEv2DHProtocol.h"
#import "NEIKEv2AuthenticationProtocol.h"

@interface NEIKEv2IKESAProposal : NSObject <NEPrettyDescription, NSCopying>

 {
    unsigned char _proposalNumber;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2PRFProtocol *_chosenPRFProtocol;
    NEIKEv2DHProtocol *_chosenDHProtocol;
    NEIKEv2AuthenticationProtocol *_authenticationProtocol;
}


@property (retain) NSArray *dhProtocols; // ivar: _dhProtocols
@property (retain) NSArray *eapProtocols; // ivar: _eapProtocols
@property (retain) NSArray *encryptionProtocols; // ivar: _encryptionProtocols
@property (retain) NSArray *integrityProtocols; // ivar: _integrityProtocols
@property NSUInteger lifetimeSeconds; // ivar: _lifetimeSeconds
@property (retain) NSArray *prfProtocols; // ivar: _prfProtocols


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif