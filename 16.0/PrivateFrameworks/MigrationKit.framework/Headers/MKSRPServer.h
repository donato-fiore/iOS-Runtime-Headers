// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKSRPSERVER_H
#define MKSRPSERVER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface MKSRPServer : NSObject {
    *srp_st _session;
}


@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSData *proofOfMatch; // ivar: _proofOfMatch
@property (retain, nonatomic) NSData *pubkey; // ivar: _pubkey
@property (retain, nonatomic) NSData *salt; // ivar: _salt
@property (retain, nonatomic) NSData *sharedKey; // ivar: _sharedKey
@property (copy, nonatomic) NSString *username; // ivar: _username


-(id)_generateSharedKey:(id)arg0 proofOfMatch:(id)arg1 ;
-(id)generateRandomPassword;
-(id)generateSharedKey:(id)arg0 proofOfMatch:(id)arg1 ;
-(id)init;
-(void)_generateSalt:(*id)arg0 pubkey:(*id)arg1 ;
-(void)cleanup;
-(void)cleanupSRP;
-(void)dealloc;
-(void)generateSalt:(*id)arg0 pubkey:(*id)arg1 ;


@end


#endif