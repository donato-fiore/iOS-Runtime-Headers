// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPQUICPROXYPATH_H
#define NSPQUICPROXYPATH_H

@protocol NSPQUICProxyPathDelegate;


#import "NSPProxyPath.h"

@interface NSPQuicProxyPath : NSPProxyPath

@property (weak) NSObject<NSPQUICProxyPathDelegate> *quicProxyPathDelegate; // ivar: _quicProxyPathDelegate


-(BOOL)proxyPathIsValid:(id)arg0 proxyPathList:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ingressProxy:(id)arg1 egressProxy:(id)arg2 proxyPathWeight:(NSUInteger)arg3 allowFallback:(BOOL)arg4 fallbackToQUIC:(BOOL)arg5 forceFallback:(BOOL)arg6 allowFailOpen:(BOOL)arg7 geohashSharingEnabled:(BOOL)arg8 networkCharacteristics:(id)arg9 ;
-(void)enableFallback:(BOOL)arg0 ;
-(void)resetMultiHopProxyAgent;
-(void)resetSingleHopProxyAgent;
-(void)setupMultiHopProxyRegistrations;
-(void)setupSingleHopProxyRegistrations;


@end


#endif