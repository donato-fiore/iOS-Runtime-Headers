// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASFEATUREMANAGER_H
#define ASFEATUREMANAGER_H

@class ACMonitoredAccountStore, OTClique, NSString;
@protocol ACMonitoredAccountStoreDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASFeatureManager : NSObject <ACMonitoredAccountStoreDelegateProtocol>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACMonitoredAccountStore *_accountStore;
    OTClique *_keychainClique;
    NSString *_primaryAppleAccountAltDSID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled;
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)init;
-(void)_updateAccountOnInternalQueue:(id)arg0 ;
-(void)_updateKeychainSyncingStatusOnInternalQueue;
-(void)accountCredentialChanged:(id)arg0 ;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasModified:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;


@end


#endif