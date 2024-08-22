// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2IKESACONFIGURATION_H
#define NEIKEV2IKESACONFIGURATION_H

@class NSArray, NSSet, NWEndpoint, NSString, NWAddressEndpoint;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2IKESAConfiguration : NSObject <NSCopying>

 {
    NSArray *_proposals;
}


@property BOOL allowRedirect; // ivar: _allowRedirect
@property BOOL allowTCPEncapsulation; // ivar: _allowTCPEncapsulation
@property (retain) NSArray *customIKESAInitPayloads; // ivar: _customIKESAInitPayloads
@property (retain) NSArray *customIKESAInitVendorPayloads; // ivar: _customIKESAInitVendorPayloads
@property BOOL disableSwitchToNATTPorts; // ivar: _disableSwitchToNATTPorts
@property (retain) NSSet *extraSupportedSignatureHashes; // ivar: _extraSupportedSignatureHashes
@property BOOL forceUDPEncapsulation; // ivar: _forceUDPEncapsulation
@property (retain) NWEndpoint *localEndpoint; // ivar: _localEndpoint
@property unsigned int nonceSize; // ivar: _nonceSize
@property (retain) NSString *outgoingInterfaceName; // ivar: _outgoingInterfaceName
@property BOOL preferInitiatorProposalOrder; // ivar: _preferInitiatorProposalOrder
@property (copy, nonatomic) NSArray *proposals;
@property BOOL randomizeLocalPort; // ivar: _randomizeLocalPort
@property (retain) NWAddressEndpoint *redirectedFromServer; // ivar: _redirectedFromServer
@property (retain) NWEndpoint *remoteEndpoint; // ivar: _remoteEndpoint
@property BOOL serverMode; // ivar: _serverMode
@property unsigned short tcpEncapsulationPort; // ivar: _tcpEncapsulationPort
@property BOOL useTLSForTCPEncapsulation; // ivar: _useTLSForTCPEncapsulation


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;


@end


#endif