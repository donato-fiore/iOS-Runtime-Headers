// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SONETWORKIDENTITY_H
#define SONETWORKIDENTITY_H

@class NSData, NSString;
@protocol OS_nw_path;

#import <Foundation/Foundation.h>


@interface SONetworkIdentity : NSObject

@property (retain, nonatomic) NSData *auditToken; // ivar: _auditToken
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSObject<OS_nw_path> *lastpath; // ivar: _lastpath
@property (retain, nonatomic) NSString *networkFingerprint; // ivar: _networkFingerprint
@property (nonatomic, getter=isPerAppVPN) BOOL perAppVPN; // ivar: _perAppVPN
@property (retain, nonatomic) NSString *realm; // ivar: _realm


-(id)getInterfaceFingerprintForDynamicInterface:(char *)arg0 ;
-(id)getInterfaceSignature:(id)arg0 ;
-(id)getVPNServerSignature:(id)arg0 ;
-(id)initForRealm:(id)arg0 bundleIdentifier:(id)arg1 auditToken:(id)arg2 ;
-(void)determineNetworkFingerprint;
-(void)evaluateVPNPath;
-(void)evaluateVPNPath:(id)arg0 ;
-(void)evaluateVPNPathForHost:(id)arg0 port:(id)arg1 ;


@end


#endif