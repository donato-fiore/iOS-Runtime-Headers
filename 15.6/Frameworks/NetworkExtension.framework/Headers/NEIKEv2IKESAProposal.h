// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2IKESAPROPOSAL_H
#define NEIKEV2IKESAPROPOSAL_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NEIKEv2AuthenticationProtocol.h"
#import "NEIKEv2DHProtocol.h"
#import "NEIKEv2EncryptionProtocol.h"
#import "NEIKEv2IntegrityProtocol.h"
#import "NEIKEv2PRFProtocol.h"

@interface NEIKEv2IKESAProposal : NSObject <NSCopying>



@property (retain, nonatomic) NEIKEv2AuthenticationProtocol *authenticationProtocol; // ivar: _authenticationProtocol
@property (retain) NEIKEv2DHProtocol *chosenDHProtocol; // ivar: _chosenDHProtocol
@property (retain) NEIKEv2EncryptionProtocol *chosenEncryptionProtocol; // ivar: _chosenEncryptionProtocol
@property (retain) NEIKEv2IntegrityProtocol *chosenIntegrityProtocol; // ivar: _chosenIntegrityProtocol
@property (retain) NEIKEv2PRFProtocol *chosenPRFProtocol; // ivar: _chosenPRFProtocol
@property (readonly) NEIKEv2DHProtocol *dhProtocol;
@property (retain) NSArray *dhProtocols; // ivar: _dhProtocols
@property (retain) NSArray *eapProtocols; // ivar: _eapProtocols
@property (readonly) NEIKEv2EncryptionProtocol *encryptionProtocol;
@property (retain) NSArray *encryptionProtocols; // ivar: _encryptionProtocols
@property (readonly) BOOL hasEAPMethods;
@property (readonly) NEIKEv2IntegrityProtocol *integrityProtocol;
@property (retain) NSArray *integrityProtocols; // ivar: _integrityProtocols
@property NSUInteger lifetimeSeconds; // ivar: _lifetimeSeconds
@property (readonly) NEIKEv2PRFProtocol *prfProtocol;
@property (retain) NSArray *prfProtocols; // ivar: _prfProtocols
@property unsigned char proposalNumber; // ivar: _proposalNumber


+(id)chooseSAProposalFromLocalProposals:(id)arg0 remoteProposals:(id)arg1 preferRemoteProposals:(BOOL)arg2 ;
-(BOOL)isAValidResponse;
-(BOOL)matchesProposal:(id)arg0 ;
-(NSUInteger)lifetimeSecondsBeyondSoftLifetimeForInitiator:(BOOL)arg0 ;
-(NSUInteger)softLifetimeSecondsForInitiator:(BOOL)arg0 ;
-(id)copyFromRemote:(id)arg0 preferRemoteProposal:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif