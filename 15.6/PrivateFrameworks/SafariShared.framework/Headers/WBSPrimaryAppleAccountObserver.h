// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPRIMARYAPPLEACCOUNTOBSERVER_H
#define WBSPRIMARYAPPLEACCOUNTOBSERVER_H

@class ACMonitoredAccountStore, ACAccount, NSString;
@protocol ACMonitoredAccountStoreDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSPrimaryAppleAccountObserver : NSObject <ACMonitoredAccountStoreDelegateProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
    ACMonitoredAccountStore *_accountStore;
    ACAccount *_primaryAppleAccount;
    NSString *_primaryAccountAltDSID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedObserver;
-(id)init;
-(void)_registerForUpdates;
-(void)_setAccountIfPrimary:(id)arg0 ;
-(void)_setAccountOnInternalQueue:(id)arg0 ;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasModified:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;
-(void)getPrimaryAppleAccountAltDSIDWithCompletionHandler:(id)arg0 ;
-(void)getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:(id)arg0 ;
-(void)getPrimaryAppleAccountWithCompletionHandler:(id)arg0 ;


@end


#endif