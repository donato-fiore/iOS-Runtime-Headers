// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPTCPCONVERTERPROXYCLIENT_H
#define MPTCPCONVERTERPROXYCLIENT_H


#import <Foundation/Foundation.h>


@interface MPTCPConverterProxyClient : NSObject



+(id)getServerConnection;
+(void)startProxyToMPTCPConverterProxyWithCompletionHandler:(id)arg0 completionHandler:(id)arg1 ;
+(void)stopProxyToMPTCPConverterProxyWithCompletionHandler:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif