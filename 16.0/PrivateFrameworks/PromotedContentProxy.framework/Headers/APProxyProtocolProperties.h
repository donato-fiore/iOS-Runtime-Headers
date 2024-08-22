// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPROXYPROTOCOLPROPERTIES_H
#define APPROXYPROTOCOLPROPERTIES_H


#import <Foundation/Foundation.h>

#import "APProxySessionConfigurationProvider.h"
#import "APProxyURLCredentialService.h"
#import "APNSURLSessionDemultiplexerManager.h"

@interface APProxyProtocolProperties : NSObject

@property (retain, nonatomic) APProxySessionConfigurationProvider *proxySessionConfigurationProvider; // ivar: _proxySessionConfigurationProvider
@property (retain, nonatomic) APProxyURLCredentialService *proxyURLCredentialService; // ivar: _proxyURLCredentialService
@property (retain, nonatomic) APNSURLSessionDemultiplexerManager *sessionDemultiplexerManager; // ivar: _sessionDemultiplexerManager




@end


#endif