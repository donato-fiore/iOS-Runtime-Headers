// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDPAIREDDEVICEACCOUNTCACHE_H
#define ACDPAIREDDEVICEACCOUNTCACHE_H

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACDPairedDeviceAccountCache : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    BOOL _accountsIsValid;
    NSArray *_accounts;
    NSMutableArray *_completions;
}




+(id)sharedInstance;
-(id)init;
-(void)_didFetchAccounts:(id)arg0 error:(id)arg1 ;
-(void)accountsFromRemoteDeviceProxy:(id)arg0 ignoreCache:(BOOL)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)invalidate;


@end


#endif