// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSACCOUNTENUMERATOR_H
#define PSACCOUNTENUMERATOR_H

@class NSArray, ACAccountStore;

#import <Foundation/Foundation.h>


@interface PSAccountEnumerator : NSObject {
    NSArray *_accounts;
    ACAccountStore *_accountStore;
    id *_accountStoreDidChangeObserver;
}


@property (readonly, nonatomic) NSArray *accounts;


-(id)_accountStore;
-(id)_visibleAccountTypeIDs;
-(id)accountsForcingRefresh:(BOOL)arg0 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_loadAccountsWithCompletion:(id)arg0 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)dealloc;


@end


#endif