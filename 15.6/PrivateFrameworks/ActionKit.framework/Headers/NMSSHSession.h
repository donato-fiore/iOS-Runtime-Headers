// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSSHSESSION_H
#define NMSSHSESSION_H

@class NSString, NSError, NSNumber;
@protocol NMSSHSessionDelegate;

#import <Foundation/Foundation.h>

#import "NMSSHChannel.h"
#import "NMSSHHostConfig.h"
#import "NMSFTP.h"

@interface NMSSHSession : NSObject

@property (nonatomic) *_LIBSSH2_AGENT agent; // ivar: _agent
@property (readonly, nonatomic, getter=isAuthorized) BOOL authorized;
@property (retain, nonatomic) NSString *banner; // ivar: _banner
@property (retain, nonatomic) NMSSHChannel *channel; // ivar: _channel
@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (weak, nonatomic) NSObject<NMSSHSessionDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger fingerprintHash; // ivar: _fingerprintHash
@property (retain, nonatomic) NSString *host; // ivar: _host
@property (retain, nonatomic) NMSSHHostConfig *hostConfig; // ivar: _hostConfig
@property (copy, nonatomic) id *kbAuthenticationBlock; // ivar: _kbAuthenticationBlock
@property (readonly, nonatomic) NSError *lastError;
@property (retain, nonatomic) NSNumber *port; // ivar: _port
@property (readonly, nonatomic) NSString *remoteBanner;
@property (nonatomic, getter=rawSession) *_LIBSSH2_SESSION session; // ivar: _session
@property (retain, nonatomic) NMSFTP *sftp; // ivar: _sftp
@property (readonly, nonatomic) *__CFSocket socket; // ivar: _socket
@property (retain, nonatomic) NSNumber *timeout;
@property (retain, nonatomic) NSString *username; // ivar: _username


+(id)URLForHost:(id)arg0 ;
+(id)connectToHost:(id)arg0 port:(NSInteger)arg1 withUsername:(id)arg2 ;
+(id)connectToHost:(id)arg0 withUsername:(id)arg1 ;
-(BOOL)addKnownHostName:(id)arg0 port:(NSInteger)arg1 toFile:(id)arg2 withSalt:(id)arg3 ;
-(BOOL)authenticateByInMemoryPublicKey:(id)arg0 privateKey:(id)arg1 andPassword:(id)arg2 ;
-(BOOL)authenticateByKeyboardInteractive;
-(BOOL)authenticateByKeyboardInteractiveUsingBlock:(id)arg0 ;
-(BOOL)authenticateByPassword:(id)arg0 ;
-(BOOL)authenticateByPublicKey:(id)arg0 privateKey:(id)arg1 andPassword:(id)arg2 ;
-(BOOL)connect;
-(BOOL)connectToAgent;
-(BOOL)connectWithTimeout:(id)arg0 ;
-(BOOL)supportsAuthenticationMethod:(id)arg0 ;
-(NSInteger)knownHostStatusInFiles:(id)arg0 ;
-(NSInteger)knownHostStatusWithFile:(id)arg0 ;
-(id)fingerprint:(NSInteger)arg0 ;
-(id)initWithHost:(id)arg0 andUsername:(id)arg1 ;
-(id)initWithHost:(id)arg0 configs:(id)arg1 withDefaultPort:(NSInteger)arg2 defaultUsername:(id)arg3 ;
-(id)initWithHost:(id)arg0 port:(NSInteger)arg1 andUsername:(id)arg2 ;
-(id)keyboardInteractiveRequest:(id)arg0 ;
-(id)userKnownHostsFileName;
-(void)disconnect;


@end


#endif