// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAFAMILYSETUPPROMPTER_H
#define FAFAMILYSETUPPROMPTER_H

@class ACAccountStore, ACAccount, UIViewController, NSOperationQueue, NSString;
@protocol FASetupDelegate, FAFamilySetupPrompterDelegate;

#import <Foundation/Foundation.h>


@interface FAFamilySetupPrompter : NSObject <FASetupDelegate>

 {
    ACAccountStore *_accountStore;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    ACAccount *_iTunesAccount;
    UIViewController *_presentingViewController;
    NSOperationQueue *_networkingQueue;
    BOOL _isRequestInFlight;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAFamilySetupPrompterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithiTunesAccount:(id)arg0 ;
-(void)_goToFamilySetup;
-(void)_goToInvitations;
-(void)_handleFamilyEligibilityResponse:(id)arg0 isFirstRun:(BOOL)arg1 ;
-(void)_showConfirmationForStartingFamilySetup;
-(void)_showConfirmationForStartingFamilySetupWithPendingInvite;
-(void)_showPendingInvitesDialog;
-(void)_showUnderageAlertWithEligibilityResponse:(id)arg0 ;
-(void)_startFamilySetupFlowWithEligibilityResponse:(id)arg0 ;
-(void)dealloc;
-(void)familySetupViewController:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 ;
-(void)promptIfEligibleWithPresentingViewController:(id)arg0 isFirstRun:(BOOL)arg1 ;


@end


#endif