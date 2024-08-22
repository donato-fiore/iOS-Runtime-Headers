// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRECENTLYBREACHEDPASSWORDPROVIDER_H
#define WBSRECENTLYBREACHEDPASSWORDPROVIDER_H

@class WBSPasswordBreachHelperProxy, NSArray;

#import <Foundation/Foundation.h>


@interface WBSRecentlyBreachedPasswordProvider : NSObject {
    os_unfair_lock_s _lock;
    WBSPasswordBreachHelperProxy *_helperProxy;
    BOOL _recentlyBreachedSavedAccountsLookupStarted;
    NSArray *_recentlyBreachedSavedAccounts;
}


@property (readonly, copy, nonatomic) NSArray *recentlyBreachedSavedAccountsIfAvailable;


+(id)sharedProvider;
-(id)init;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_getRecentlyBreachedSavedAccountsWithCompletionHandler:(id)arg0 ;
-(void)clearRecentlyBreachedSavedAccounts;
-(void)dealloc;


@end


#endif