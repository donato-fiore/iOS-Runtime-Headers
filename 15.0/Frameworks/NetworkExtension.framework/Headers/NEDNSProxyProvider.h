// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEDNSPROXYPROVIDER_H
#define NEDNSPROXYPROVIDER_H

@class NSArray;


#import "NEProvider.h"

@interface NEDNSProxyProvider : NEProvider

@property (retain) NSArray *systemDNSSettings; // ivar: _systemDNSSettings


-(BOOL)handleNewFlow:(id)arg0 ;
-(BOOL)handleNewUDPFlow:(id)arg0 initialRemoteEndpoint:(id)arg1 ;
-(void)cancelProxyWithError:(id)arg0 ;
-(void)startProxyWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopProxyWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif