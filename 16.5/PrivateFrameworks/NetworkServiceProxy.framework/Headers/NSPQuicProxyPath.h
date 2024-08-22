// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPQUICPROXYPATH_H
#define NSPQUICPROXYPATH_H

@protocol NSPQUICProxyPathDelegate;


#import "NSPProxyPath.h"

@interface NSPQuicProxyPath : NSPProxyPath

@property (weak) NSObject<NSPQUICProxyPathDelegate> *quicProxyPathDelegate; // ivar: _quicProxyPathDelegate


-(BOOL)proxyPathIsValid:(id)arg0 proxyPathList:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ingressProxy:(id)arg1 egressProxy:(id)arg2 proxyPathWeight:(NSUInteger)arg3 obliviousConfigs:(id)arg4 allowFallback:(BOOL)arg5 fallbackToQUIC:(BOOL)arg6 forceFallback:(BOOL)arg7 allowFailOpen:(BOOL)arg8 geohashSharingEnabled:(BOOL)arg9 configEpoch:(id)arg10 networkCharacteristics:(id)arg11 ;
-(void)enableFallback:(BOOL)arg0 ;
-(void)resetMultiHopProxyAgent;
-(void)resetObliviousHopProxyAgents;
-(void)resetSingleHopProxyAgent;
-(void)setupMultiHopProxyRegistrations;
-(void)setupSingleHopProxyRegistrations;


@end


#endif