// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPQUICPROXYPATH_H
#define NSPQUICPROXYPATH_H

@protocol NSPQUICProxyPathDelegate;


#import "NSPProxyPath.h"

@interface NSPQuicProxyPath : NSPProxyPath

@property (weak) NSObject<NSPQUICProxyPathDelegate> *quicProxyPathDelegate; // ivar: _quicProxyPathDelegate


-(BOOL)proxyPathIsValid:(id)arg0 proxyPathList:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ingressProxy:(id)arg1 egressProxy:(id)arg2 proxyPathWeight:(NSUInteger)arg3 allowFallback:(BOOL)arg4 allowFailOpen:(BOOL)arg5 geohashSharingEnabled:(BOOL)arg6 networkCharacteristics:(id)arg7 ;
-(void)enableFallback:(BOOL)arg0 ;
-(void)resetMultiHopProxyAgent;
-(void)resetSingleHopProxyAgent;
-(void)setupMultiHopProxyRegistrations;
-(void)setupSingleHopProxyRegistrations;


@end


#endif