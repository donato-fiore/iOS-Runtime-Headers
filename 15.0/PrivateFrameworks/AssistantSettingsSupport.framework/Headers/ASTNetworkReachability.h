// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTNETWORKREACHABILITY_H
#define ASTNETWORKREACHABILITY_H


#import <Foundation/Foundation.h>


@interface ASTNetworkReachability : NSObject



+(BOOL)hasCellOnlyNetworkConnection;
+(BOOL)hasNetworkConnection;
+(BOOL)reachabilityHasCellOnlyNetworkConnection:(struct __SCNetworkReachability *)arg0 ;
+(BOOL)reachabilityHasNetworkConnection:(struct __SCNetworkReachability *)arg0 ;
+(struct __SCNetworkReachability *)createReachabilityForVoiceDownload;


@end


#endif