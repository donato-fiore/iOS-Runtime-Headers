// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SMTPACCOUNT_H
#define SMTPACCOUNT_H

@class NSTimer;


#import "DeliveryAccount.h"
#import "MFSMTPConnection.h"

@interface SMTPAccount : DeliveryAccount {
    Class _deliveryClass;
    MFSMTPConnection *_connection;
    NSTimer *_timer;
    NSInteger _lastTimerSetTime;
    BOOL _supportsPipelining;
    BOOL _supportsOutboxCopy;
    BOOL _useCellDataOnly;
}




+(*void)legacyKeychainProtocol;
+(BOOL)isCommonPortNumber:(unsigned int)arg0 ;
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(id)displayedShortAccountTypeString;
+(id)newDefaultInstance;
+(id)saslProfileName;
+(unsigned int)defaultPortNumber;
+(void)registerAppleServiceDeliveryHostname:(id)arg0 ;
-(BOOL)_isAppleServiceDeliveryHostname:(id)arg0 ;
-(BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg0 ;
-(BOOL)canBeFallbackAccount;
-(BOOL)supportsOutboxCopy;
-(BOOL)supportsPipelining;
-(Class)connectionClass;
-(Class)deliveryClass;
-(id)_defaultSettingsWithPort:(unsigned int)arg0 useSSL:(BOOL)arg1 directSSL:(BOOL)arg2 ;
-(id)alternateConnectionSettings;
-(id)authenticatedConnection:(BOOL)arg0 ;
-(id)certUIService;
-(id)connectionSettingsForAuthentication:(BOOL)arg0 secure:(id)arg1 insecure:(id)arg2 ;
-(id)customAuthenticationErrorStringForError:(id)arg0 authScheme:(id)arg1 ;
-(id)errorForResponse:(id)arg0 ;
-(id)insecureConnectionSettings;
-(id)preferredAuthScheme;
-(id)secureConnectionSettings;
-(id)serviceName;
-(struct __CFString *)connectionServiceType;
-(void)checkInConnection:(id)arg0 ;
-(void)connectionExpired:(id)arg0 ;
-(void)dealloc;
-(void)disconnect:(id)arg0 ;
-(void)releaseAllConnections;
-(void)releaseAllForcedConnections;
-(void)setDeliveryClass:(Class)arg0 ;
-(void)setPreferredAuthScheme:(id)arg0 ;
-(void)setSupportsOutboxCopy:(BOOL)arg0 ;
-(void)setSupportsPipelining:(BOOL)arg0 ;
-(void)setTimer;


@end


#endif