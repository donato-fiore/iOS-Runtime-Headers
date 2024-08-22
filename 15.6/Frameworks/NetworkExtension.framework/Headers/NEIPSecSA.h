// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIPSECSA_H
#define NEIPSECSA_H

@class NSData, NSString, NWAddressEndpoint;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIPSecSA : NSObject <NSCopying>



@property int authenticationAlgorithm; // ivar: _authenticationAlgorithm
@property (retain) NSData *authenticationKey; // ivar: _authenticationKey
@property (retain) NSString *boundInterfaceName; // ivar: _boundInterfaceName
@property (readonly) int direction; // ivar: _direction
@property int encryptionAlgorithm; // ivar: _encryptionAlgorithm
@property (retain) NSData *encryptionKey; // ivar: _encryptionKey
@property unsigned int internalSAID; // ivar: _internalSAID
@property NSUInteger lifetimeSeconds; // ivar: _lifetimeSeconds
@property (retain) NWAddressEndpoint *localAddress; // ivar: _localAddress
@property int mode; // ivar: _mode
@property BOOL natDetectedOnPeer; // ivar: _natDetectedOnPeer
@property BOOL natKeepaliveEnabled; // ivar: _natKeepaliveEnabled
@property NSUInteger natKeepaliveIntervalSeconds; // ivar: _natKeepaliveIntervalSeconds
@property BOOL natKeepaliveOffloadEnabled; // ivar: _natKeepaliveOffloadEnabled
@property NSUInteger natKeepaliveOffloadIntervalSeconds; // ivar: _natKeepaliveOffloadIntervalSeconds
@property BOOL natTraversalEnabled; // ivar: _natTraversalEnabled
@property unsigned short natTraversalPort; // ivar: _natTraversalPort
@property unsigned short natTraversalSrcPort; // ivar: _natTraversalSrcPort
@property int protocol; // ivar: _protocol
@property (retain) NWAddressEndpoint *remoteAddress; // ivar: _remoteAddress
@property unsigned int replayWindowSize; // ivar: _replayWindowSize
@property BOOL sequencePerTrafficClass; // ivar: _sequencePerTrafficClass
@property unsigned int spi; // ivar: _spi
@property (retain) NSString *tunnelInterfaceName; // ivar: _tunnelInterfaceName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createDictionary;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initInboundSA;
-(id)initInboundSAWithSPI:(unsigned int)arg0 ;
-(id)initOutboundSAWithSPI:(unsigned int)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif