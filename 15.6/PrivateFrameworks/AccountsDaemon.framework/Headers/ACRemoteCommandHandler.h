// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACREMOTECOMMANDHANDLER_H
#define ACREMOTECOMMANDHANDLER_H

@class ACAccountStore;

#import <Foundation/Foundation.h>


@interface ACRemoteCommandHandler : NSObject {
    ACAccountStore *_accountStore;
}




-(id)init;
-(void)_addAccount:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)_authenticateAccount:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)_deleteAccount:(id)arg0 withCompletion:(id)arg1 ;
// -(void)_fetchAccountsWithCompletion:(id)arg0 options:(unk)arg1  ;
-(void)_invalidateFetchedAccountsCacheWithCompletion:(id)arg0 ;
-(void)_promptUserForAccountCredential:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)_removeAllAccountsWithCompletion:(id)arg0 ;
-(void)_saveAccount:(id)arg0 completion:(id)arg1 ;
-(void)_updateAccount:(id)arg0 withCompletion:(id)arg1 ;
-(void)handleCommand:(id)arg0 forAccount:(id)arg1 options:(id)arg2 completion:(id)arg3 ;


@end


#endif