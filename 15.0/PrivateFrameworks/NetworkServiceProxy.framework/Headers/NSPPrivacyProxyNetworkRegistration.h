// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYPROXYNETWORKREGISTRATION_H
#define NSPPRIVACYPROXYNETWORKREGISTRATION_H

@class NSData, NSString, NWNetworkAgentRegistration;
@protocol NSPPrivacyProxyConfigAgentDelegate, NSPPrivacyProxyNetworkRegistrationDelegate, OS_nw_proxy_config;

#import <Foundation/Foundation.h>

#import "NSPPrivacyProxyConfigAgent.h"

@interface NSPPrivacyProxyNetworkRegistration : NSObject <NSPPrivacyProxyConfigAgentDelegate>



@property (retain, nonatomic) NSData *configurationHash; // ivar: _configurationHash
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NSPPrivacyProxyNetworkRegistrationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSPPrivacyProxyConfigAgent *proxyConfigAgent; // ivar: _proxyConfigAgent
@property (retain, nonatomic) NWNetworkAgentRegistration *proxyConfigAgentRegistration; // ivar: _proxyConfigAgentRegistration
@property (retain, nonatomic) NSObject<OS_nw_proxy_config> *proxyConfiguration; // ivar: _proxyConfiguration
@property (readonly) Class superclass;


-(BOOL)isRegistered;
-(id)initWithAgentUUID:(id)arg0 agentDescription:(id)arg1 delegate:(id)arg2 ;
-(id)networkRegistrationDescription;
-(void)reportErrorForAgent:(id)arg0 error:(int)arg1 withOptions:(id)arg2 ;
-(void)resetError;
-(void)resetProxyAgent;
-(void)teardownProxyAgent;


@end


#endif