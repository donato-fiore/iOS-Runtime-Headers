// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCOREACCOUNTSMONITOR_H
#define IMCOREACCOUNTSMONITOR_H

@class ACAccount;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMCoreAccountsMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_cachedPrimaryAppleAccount;
}


@property (readonly, nonatomic) BOOL isSignedIntoiCloud;


+(id)sharedInstance;
-(id)_cachedPrimaryAppleAccount;
-(id)init;
-(void)accountStoreDidChange:(id)arg0 ;


@end


#endif