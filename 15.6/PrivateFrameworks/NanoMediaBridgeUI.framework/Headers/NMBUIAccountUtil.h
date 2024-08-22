// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMBUIACCOUNTUTIL_H
#define NMBUIACCOUNTUTIL_H

@class ACAccountStore, ACAccount, NSSManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMBUIAccountUtil : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) ACAccount *idmsAccount; // ivar: _idmsAccount
@property (retain, nonatomic) ACAccount *itunesAccount; // ivar: _itunesAccount
@property (retain, nonatomic) NSSManager *nssManager; // ivar: _nssManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(BOOL)_doesAccount:(id)arg0 matchAccount:(id)arg1 ;
-(BOOL)_doesAccount:(id)arg0 matchAccountDict:(id)arg1 ;
-(BOOL)_doesAccountWithAltDSID:(id)arg0 DSID:(id)arg1 username:(id)arg2 matchAccountWithAltDSID:(id)arg3 DSID:(id)arg4 username:(id)arg5 ;
-(BOOL)hasITunesAccount;
-(id)_signInOptions;
-(id)init;
-(void)_attemptSignIn;
-(void)_handleAccountStoreDidChangeNotification:(id)arg0 ;
-(void)_sendITunesAccountToGizmoIfNecessary;
-(void)_signGizmoIntoITunesAccount;
-(void)dealloc;
-(void)sendITunesAccountToGizmoIfNecessary;


@end


#endif