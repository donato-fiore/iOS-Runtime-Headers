// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLSRPSERVER_H
#define WLSRPSERVER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface WLSRPServer : NSObject {
    *srp_st _session;
}


@property (readonly, nonatomic) NSData *hashOfProofOfMatch_HAMK; // ivar: _hashOfProofOfMatch_HAMK
@property (readonly, nonatomic) NSData *salt_s; // ivar: _salt_s
@property (readonly, nonatomic) NSData *serverPublicKey_B; // ivar: _serverPublicKey_B
@property (readonly, nonatomic) NSData *sharedKey_K; // ivar: _sharedKey_K


-(BOOL)didReceiveClientPublicKey_A:(id)arg0 proofOfMatch_M:(id)arg1 ;
-(BOOL)isHmacData:(id)arg0 validForData:(id)arg1 ;
-(id)hmacDataForData:(id)arg0 ;
-(id)initWithUsername:(id)arg0 password:(id)arg1 ;
-(void)dealloc;


@end


#endif