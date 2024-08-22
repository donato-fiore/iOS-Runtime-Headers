// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BYSILENTLOGINUPGRADEGUARANTOR_H
#define BYSILENTLOGINUPGRADEGUARANTOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BYSilentLoginUpgradeGuarantor : NSObject

@property (nonatomic) BOOL didEnsureQueuesAndStartSilentLoginUpgrade; // ivar: _didEnsureQueuesAndStartSilentLoginUpgrade
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *shortLivedTokenUpgradeCompletionQueue; // ivar: _shortLivedTokenUpgradeCompletionQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *silentLoginUpgradeCompletionQueue; // ivar: _silentLoginUpgradeCompletionQueue


+(id)sharedInstance;
-(id)init;
-(void)_ensureQueuesAndStartSilentLoginUpgrade;
-(void)blockUntilShortLivedTokenUpgradeCompletes;
-(void)blockUntilSilentLoginUpgradeCompletes;
-(void)blockUntilSilentLoginUpgradeCompletesForNonLoginUser;
-(void)didShortCircuitShortLivedTokenUpgrade;
-(void)didShortCircuitSilentLoginUpgrade;


@end


#endif