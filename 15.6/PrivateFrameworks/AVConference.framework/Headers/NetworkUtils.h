// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETWORKUTILS_H
#define NETWORKUTILS_H


#import <Foundation/Foundation.h>


@interface NetworkUtils : NSObject



+(BOOL)createAndStartListener:(*id)arg0 withParameters:(id)arg1 ;
+(BOOL)createNWPathEvaluator:(*id)arg0 withIPAddress:(id)arg1 localPort:(*int)arg2 remotePort:(int)arg3 shouldRunInProcess:(BOOL)arg4 ;
+(id)encryptionInfoForKey:(NSUInteger)arg0 ;
+(id)newEncryptionInfoWithMediaKeyIndex:(id)arg0 ;
+(id)newNWConnectionWithIPAddress:(id)arg0 srcPort:(short)arg1 ;
+(id)newRTPSocketDictionary:(BOOL)arg0 rtpSourcePort:(short)arg1 ;
+(id)securityKeyMaterialWithMediaKeyIndex:(id)arg0 ;
+(int)connectedSocketWithIPAddress:(id)arg0 srcPort:(short)arg1 error:(*id)arg2 ;
+(int)nonConnectedSocketWithIPAddress:(id)arg0 srcPort:(short)arg1 error:(*id)arg2 ;
+(int)socketWithIPAddress:(id)arg0 srcPort:(short)arg1 error:(*id)arg2 ;
+(int)socketWithIPAddress:(id)arg0 srcPort:(short)arg1 shouldConnect:(BOOL)arg2 error:(*id)arg3 ;
+(void)setUniquePIDOnParameters:(id)arg0 shouldRunInProcess:(BOOL)arg1 ;


@end


#endif