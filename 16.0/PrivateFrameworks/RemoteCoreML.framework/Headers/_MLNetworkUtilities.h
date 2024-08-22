// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLNETWORKUTILITIES_H
#define _MLNETWORKUTILITIES_H


#import <Foundation/Foundation.h>


@interface _MLNetworkUtilities : NSObject



+(id)configureTLS:(SEL)arg0 ;
// +(id)createSecureConnectionParameter:(id)arg0 useUDP:(unk)arg1  ;
+(id)doInitNetwork:(id)arg0 ;
+(id)setProtocolStack:(id)arg0 family:(NSUInteger)arg1 ;
+(void)bindEndPoints:(id)arg0 localAddr:(char *)arg1 localPort:(char *)arg2 ;
+(void)setAWDL:(id)arg0 useAWDL:(BOOL)arg1 ;
+(void)setupBonjour:(id)arg0 name:(char *)arg1 useBonjour:(BOOL)arg2 useUDP:(BOOL)arg3 ;
+(void)setupListenerStateChangeHandler:(id)arg0 useUDP:(BOOL)arg1 ;


@end


#endif