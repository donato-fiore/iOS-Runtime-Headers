// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPKEYCHAINSYNC_H
#define CDPKEYCHAINSYNC_H


#import <Foundation/Foundation.h>


@interface CDPKeychainSync : NSObject



+(BOOL)isUserVisibleKeychainSyncEnabled;
+(void)removeNonViewAwarePeersFromCircleWithContext:(id)arg0 completion:(id)arg1 ;
+(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg0 withCompletion:(id)arg1 ;


@end


#endif