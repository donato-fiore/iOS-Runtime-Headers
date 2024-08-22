// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAGACTIVEACCOUNTPROVIDER_H
#define AMSBAGACTIVEACCOUNTPROVIDER_H

@class NSString, ACAccount;
@protocol AMSBagAccountProvider;

#import <Foundation/Foundation.h>


@interface AMSBagActiveAccountProvider : NSObject <AMSBagAccountProvider>



@property (nonatomic) os_unfair_lock_s accountLock; // ivar: _accountLock
@property (readonly, nonatomic) BOOL bagLoadShouldUpdateAccountProperties;
@property (readonly, nonatomic) NSString *identity;
@property (retain, nonatomic) ACAccount *previouslyAccessedAccount; // ivar: _previouslyAccessedAccount


-(BOOL)associatedAccountIsEqualToAccount:(id)arg0 forMediaType:(id)arg1 ;
-(id)_bagAccountForAccountMediaType:(id)arg0 mustContainStorefront:(BOOL)arg1 ;
-(id)bagAccountForAccountMediaType:(id)arg0 ;
-(id)bagStorefrontForAccountMediaType:(id)arg0 ;
-(id)init;


@end


#endif