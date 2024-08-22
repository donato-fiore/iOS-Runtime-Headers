// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2HELPER_H
#define NEIKEV2HELPER_H


#import <Foundation/Foundation.h>


@interface NEIKEv2Helper : NSObject



+(BOOL)getDPDAttributesForMode:(NSInteger)arg0 isWakeUp:(BOOL)arg1 isNAT:(BOOL)arg2 retry:(*unsigned int)arg3 timeout:(*NSUInteger)arg4 frequency:(*unsigned int)arg5 ;
+(NSUInteger)getIdentifierType:(id)arg0 ;
+(id)createDNSSettingsFromTunnelConfig:(id)arg0 ;
+(id)createIKESAConfigFromProtocol:(id)arg0 path:(id)arg1 ifIndex:(unsigned int)arg2 options:(id)arg3 server:(id)arg4 ;
+(id)createIKESAProposalFromProtocol:(id)arg0 saParameters:(id)arg1 options:(id)arg2 nonceSize:(*unsigned int)arg3 ;
+(id)createIKEv2ChildSAConfigFromProtocol:(id)arg0 ;
+(id)createIKEv2ChildSAProposalFromProtocol:(id)arg0 saParameters:(id)arg1 ;
+(id)createIKEv2SessionConfigFromProtocol:(id)arg0 options:(id)arg1 onDemandEnabled:(BOOL)arg2 ;
+(id)createIPv4SettingsFromTunnelConfig:(id)arg0 localTS:(id)arg1 remoteTS:(id)arg2 ;
+(id)createIPv6SettingsFromTunnelConfig:(id)arg0 localTS:(id)arg1 remoteTS:(id)arg2 ;
+(id)createRouteArrayFromTunnelConfig:(id)arg0 localTS:(id)arg1 remoteTS:(id)arg2 gatewayAddress:(id)arg3 isIPv4:(BOOL)arg4 ;


@end


#endif