// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETRANSPARENTPROXYMANAGER_H
#define NETRANSPARENTPROXYMANAGER_H



#import "NEVPNManager.h"

@interface NETransparentProxyManager : NEVPNManager



+(void)loadAllFromPreferencesWithCompletionHandler:(id)arg0 ;
+(void)loadEverythingFromPreferencesWithCompletionHandler:(id)arg0 ;
-(BOOL)isProtocolTypeValid:(NSInteger)arg0 ;
-(id)init;
-(void)additionalSetup;
-(void)loadFromPreferencesWithCompletionHandler:(id)arg0 ;


@end


#endif