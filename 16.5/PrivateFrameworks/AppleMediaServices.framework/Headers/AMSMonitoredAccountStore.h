// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMONITOREDACCOUNTSTORE_H
#define AMSMONITOREDACCOUNTSTORE_H

@class ACMonitoredAccountStore;



@interface AMSMonitoredAccountStore : ACMonitoredAccountStore {
    ? typeStore;
    ? error;
    ? fallback;
}




+(id)shared;
-(id)accountTypeWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)accountWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)accountsWithAccountType:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithAccountTypes:(id)arg0 delegate:(id)arg1 ;
-(id)initWithAccountTypes:(id)arg0 propertiesToPrefetch:(id)arg1 delegate:(id)arg2 ;
-(id)initWithEffectiveBundleID:(id)arg0 ;
-(id)initWithRemoteEndpoint:(id)arg0 ;
-(id)initWithRemoteEndpoint:(id)arg0 effectiveBundleID:(id)arg1 ;
-(id)initWithWithRemoteEndpoint:(id)arg0 effectiveBundleID:(id)arg1 accountTypes:(id)arg2 propertiesToPrefetch:(id)arg3 delegate:(id)arg4 ;
-(id)monitoredAccountWithIdentifier:(id)arg0 ;
-(void)accountTypeWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)accountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)accountsWithAccountType:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif