// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLEACCOUNTMANAGER_H
#define PKAPPLEACCOUNTMANAGER_H

@class ACAccountStore;

#import <Foundation/Foundation.h>

#import "PKAppleAccountInformation.h"

@interface PKAppleAccountManager : NSObject {
    ACAccountStore *_accountStore;
}


@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;


+(id)sharedInstance;
-(id)_aidaAccount;
-(id)_primaryAppleAccount;
-(void)renewAppleAccountWithCompletionHandler:(id)arg0 ;


@end


#endif