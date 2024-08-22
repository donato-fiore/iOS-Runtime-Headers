// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2DHKEYS_H
#define NEIKEV2DHKEYS_H

@class NSData, NSMutableData;

#import <Foundation/Foundation.h>


@interface NEIKEv2DHKeys : NSObject

@property *OpaqueSecDHContext context; // ivar: _context
@property (retain) NSData *curveA; // ivar: _curveA
@property (retain) NSData *curveB; // ivar: _curveB
@property int desc; // ivar: _desc
@property int gen1; // ivar: _gen1
@property int gen2; // ivar: _gen2
@property (retain) NSData *order; // ivar: _order
@property (retain) NSData *prime; // ivar: _prime
@property (retain) NSMutableData *publicKey; // ivar: _publicKey
@property NSUInteger publicKeySize; // ivar: _publicKeySize
@property int type; // ivar: _type


-(?)getECCP;
-(BOOL)checkDHPublic;
-(BOOL)generatePublicKeyWithECPKey:(struct ccec_full_ctx *)arg0 curveKey:(*unsigned char)arg1 ;
-(id)createSharedSecretForECPKey:(struct ccec_full_ctx *)arg0 curveKey:(*unsigned char)arg1 remotePublicKey:(id)arg2 publicKeySize:(NSUInteger)arg3 dhContext:(struct OpaqueSecDHContext *)arg4 ;
-(void)dealloc;


@end


#endif