// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMHIDEMYEMAIL_H
#define EMHIDEMYEMAIL_H

@class AKPrivateEmailController, NSString, NSNumber, ACAccount;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EMHideMyEmail : NSObject <EFLoggable>

 {
    os_unfair_lock_s _isAvailableLock;
}


@property (retain, nonatomic) AKPrivateEmailController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *forwardingEmailForPrimaryAccount;
@property (readonly, nonatomic) BOOL hasCheckedIfFeatureIsAvailable; // ivar: _hasCheckedIfFeatureIsAvailable
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *isAvailable; // ivar: _isAvailable
@property (readonly, nonatomic) ACAccount *primaryAccount;
@property (readonly, nonatomic) NSString *primaryAccountAltDSID;
@property (readonly) Class superclass;


+(id)log;
+(id)sharedInstance;
-(BOOL)isConfigured:(*id)arg0 ;
-(BOOL)isConfiguredForAccountWithAltDSID:(id)arg0 error:(*id)arg1 ;
-(id)addLocalizedDisplayNameForAddress:(id)arg0 ;
-(id)forwardingEmailForAccount:(id)arg0 ;
-(id)init;
-(void)generateHideMyEmailAddressForEmailAddress:(id)arg0 altDSID:(id)arg1 completion:(id)arg2 ;
-(void)generateHideMyEmailAddressForEmailAddress:(id)arg0 completion:(id)arg1 ;
-(void)generateReplyToEmailForRecipient:(id)arg0 hmeAddress:(id)arg1 account:(id)arg2 completion:(id)arg3 ;
-(void)hideMyEmailAddressForRecipientAddress:(id)arg0 altDSID:(id)arg1 completion:(id)arg2 ;
-(void)hideMyEmailAddressForRecipientAddress:(id)arg0 completion:(id)arg1 ;
-(void)hideMyEmailAddresses:(id)arg0 ;
-(void)hideMyEmailAddressesInAccountWithAltDSID:(id)arg0 completion:(id)arg1 ;
-(void)isAvailable:(id)arg0 ;
-(void)isHideMyEmailAddressValid:(id)arg0 senderAddress:(id)arg1 completion:(id)arg2 ;


@end


#endif