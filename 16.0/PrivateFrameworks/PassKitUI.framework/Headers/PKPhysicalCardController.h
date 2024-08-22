// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPHYSICALCARDCONTROLLER_H
#define PKPHYSICALCARDCONTROLLER_H

@class PKAccountService, PKAccount, PKAccountUser, NSString, PKPaymentPass, NSSet, PKPhysicalCard;
@protocol PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPhysicalCardController : NSObject <PKSetupFlowControllerProtocol>

 {
    PKAccountService *_accountService;
    BOOL _updatingOrderController;
}


@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, nonatomic) PKAccountUser *accountUser; // ivar: _accountUser
@property (readonly, nonatomic) BOOL canActivatePhysicalCard;
@property (readonly, nonatomic) BOOL canReplacePhysicalCard;
@property (readonly, nonatomic) BOOL canRequestPhysicalCard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPrimaryPhysicalCard;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PKSetupFlowControllerProtocol> *parentFlowController; // ivar: _parentFlowController
@property (readonly, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass
@property (readonly, nonatomic) BOOL physicalCardBlocked;
@property (readonly, nonatomic) NSSet *physicalCards; // ivar: _physicalCards
@property (readonly, nonatomic) PKPhysicalCard *primaryPhysicalCard; // ivar: _primaryPhysicalCard
@property (readonly, nonatomic) BOOL primaryPhysicalCardEnabled;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPhysicalCard *unactivatedPhysicalCard; // ivar: _unactivatedPhysicalCard


+(BOOL)deviceSupportsContactlessActivation;
-(BOOL)_userSupportsActivatingPhysicalCard;
-(BOOL)_userSupportsRequestingPhysicalCard;
-(id)initWithAccountService:(id)arg0 paymentPass:(id)arg1 account:(id)arg2 accountUser:(id)arg3 physicalCards:(id)arg4 ;
-(void)_updatePhysicalCards;
-(void)dealloc;
-(void)nextViewControllerWithCompletion:(id)arg0 ;
-(void)orderFlowViewControllerForReason:(NSUInteger)arg0 content:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateWithAccount:(id)arg0 ;
-(void)updateWithPhysicalCards:(id)arg0 ;


@end


#endif