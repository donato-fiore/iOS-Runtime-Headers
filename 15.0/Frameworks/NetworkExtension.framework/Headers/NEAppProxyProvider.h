// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEAPPPROXYPROVIDER_H
#define NEAPPPROXYPROVIDER_H



#import "NETunnelProvider.h"

@interface NEAppProxyProvider : NETunnelProvider



-(BOOL)handleNewFlow:(id)arg0 ;
-(BOOL)handleNewUDPFlow:(id)arg0 initialRemoteEndpoint:(id)arg1 ;
-(void)cancelProxyWithError:(id)arg0 ;
-(void)startProxyWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopProxyWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif