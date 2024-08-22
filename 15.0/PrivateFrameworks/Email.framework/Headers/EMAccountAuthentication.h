// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMACCOUNTAUTHENTICATION_H
#define EMACCOUNTAUTHENTICATION_H

@protocol EDAccountFactory;

#import <Foundation/Foundation.h>


@interface EMAccountAuthentication : NSObject

@property (readonly, nonatomic) NSObject<EDAccountFactory> *accountFactory; // ivar: _accountFactory


+(id)log;
-(BOOL)_hostnamesHaveSameTopLevelDomain:(id)arg0 deliveryAccount:(id)arg1 ;
-(BOOL)_shouldAutoUpdateDeliveryAccount:(id)arg0 forChangedReceivingAccount:(id)arg1 ;
-(BOOL)_updateDeliveryAccountCredentialIfNecessaryForAccountWithAccount:(id)arg0 ;
-(BOOL)_updateDeliveryAccountCredentialIfNecessaryForReceivingAccount:(id)arg0 ;
-(BOOL)updateDeliveryAccountCredentialIfNecessaryForAccountWithIdentifier:(id)arg0 ;
-(BOOL)updateDeliveryAccountCredentialIfNecessaryForAccountWithSystemAccount:(id)arg0 ;
-(id)initWithAccountFactory:(id)arg0 ;


@end


#endif