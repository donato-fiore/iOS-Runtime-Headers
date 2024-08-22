// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2CHILDSAPROPOSAL_H
#define NEIKEV2CHILDSAPROPOSAL_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NEIKEv2DHProtocol.h"
#import "NEIKEv2EncryptionProtocol.h"
#import "NEIKEv2IntegrityProtocol.h"
#import "NEIKEv2ESPSPI.h"

@interface NEIKEv2ChildSAProposal : NSObject <NSCopying>



@property (retain) NEIKEv2DHProtocol *chosenDHProtocol; // ivar: _chosenDHProtocol
@property (retain) NEIKEv2EncryptionProtocol *chosenEncryptionProtocol; // ivar: _chosenEncryptionProtocol
@property (retain) NEIKEv2IntegrityProtocol *chosenIntegrityProtocol; // ivar: _chosenIntegrityProtocol
@property (readonly) NEIKEv2DHProtocol *dhProtocol;
@property (retain) NSArray *dhProtocols; // ivar: _dhProtocols
@property (readonly) NEIKEv2EncryptionProtocol *encryptionProtocol;
@property (retain) NSArray *encryptionProtocols; // ivar: _encryptionProtocols
@property (readonly) NEIKEv2IntegrityProtocol *integrityProtocol;
@property (retain) NSArray *integrityProtocols; // ivar: _integrityProtocols
@property NSUInteger lifetimeSeconds; // ivar: _lifetimeSeconds
@property BOOL opportunisticPFS; // ivar: _opportunisticPFS
@property unsigned char proposalNumber; // ivar: _proposalNumber
@property NSUInteger protocol; // ivar: _protocol
@property (retain) NEIKEv2ESPSPI *remoteSPI; // ivar: _remoteSPI
@property (retain) NEIKEv2ESPSPI *spi; // ivar: _spi


+(id)chooseChildSAProposalFromLocalProposals:(id)arg0 remoteProposals:(id)arg1 preferRemoteProposals:(BOOL)arg2 checkDHGroup:(BOOL)arg3 ;
-(BOOL)isAValidResponse;
-(BOOL)matchesProposal:(id)arg0 checkDHGroup:(BOOL)arg1 ;
-(id)copyForRekey;
-(id)copyFromRemote:(id)arg0 checkDHGroup:(BOOL)arg1 preferRemoteProposal:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif