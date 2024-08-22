// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAFOLLOWUPCONTROLLER_H
#define AAFOLLOWUPCONTROLLER_H

@protocol AAFollowUpProtocol;

#import <Foundation/Foundation.h>


@interface AAFollowUpController : NSObject <AAFollowUpProtocol>





-(BOOL)_shouldPostRenewFollowup:(id)arg0 ;
-(BOOL)dismissFollowUpWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)isRenewCredentialsCFUPosted;
-(BOOL)postFollowUpWithIdentifier:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
-(CGFloat)ageOfOldestCustodianCFU;
-(id)_followUpController;
-(id)_followUpItemForBeneficiaryIneligible:(id)arg0 ;
-(id)_followUpItemForBeneficiaryRemoved:(id)arg0 ;
-(id)_followUpItemForCustodianEmbargo:(id)arg0 ;
-(id)_followUpItemForCustodianInvitationReminder:(id)arg0 ;
-(id)_followUpItemForCustodianRemoved:(id)arg0 ;
-(id)_followUpItemForRenewCredentials:(id)arg0 ;
-(id)_followUpItemForStartUsing:(id)arg0 ;
-(id)_followUpItemForVerifyTerms:(id)arg0 ;
-(id)_followupActionUserInfo:(id)arg0 ;
-(id)_recoveryNotificationWithInfo:(id)arg0 type:(id)arg1 ;
-(id)creationDateOfOldestFollowUpWithIdentifiers:(id)arg0 ;
-(id)followUpItemForIdentifier:(id)arg0 ;
-(id)followUpItemForIdentifier:(id)arg0 userInfo:(id)arg1 ;
-(void)_dismissFollowUpWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)dismissFollowUpWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)dismissFollowUpWithIdentifier:(id)arg0 forAccount:(id)arg1 completion:(id)arg2 ;
-(void)dismissFollowUpsForAccount:(id)arg0 identifiers:(id)arg1 completion:(id)arg2 ;
-(void)pendingFollowUpWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)pendingFollowUpsForAccount:(id)arg0 completion:(id)arg1 ;
-(void)postFollowUpWithIdentifier:(id)arg0 forAccount:(id)arg1 userInfo:(id)arg2 completion:(id)arg3 ;
-(void)postFollowUpWithIdentifier:(id)arg0 userInfo:(id)arg1 completion:(id)arg2 ;


@end


#endif