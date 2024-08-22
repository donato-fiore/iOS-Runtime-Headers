// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPFALLBACKPROXYPATH_H
#define NSPFALLBACKPROXYPATH_H



#import "NSPProxyPath.h"

@interface NSPFallbackProxyPath : NSPProxyPath



-(BOOL)proxyPathIsValid:(id)arg0 proxyPathList:(id)arg1 ;
-(void)resetMultiHopProxyAgent;
-(void)resetSingleHopProxyAgent;
-(void)setupMultiHopProxyRegistrations;
-(void)setupSingleHopProxyRegistrations;


@end


#endif