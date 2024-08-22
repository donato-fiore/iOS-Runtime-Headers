// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPHYSICALCARDMANUALACTIVATIONVIEWCONTROLLER_H
#define PKPHYSICALCARDMANUALACTIVATIONVIEWCONTROLLER_H

@class PKPhysicalCard, PKPaymentPass, NSString, CLInUseAssertion, CLLocationManager, SFClient;
@protocol PKPhysicalCardActionControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKPhysicalCardActionController.h"
#import "PKOrderPhysicalCardHeroView.h"
#import "PKBusinessChatController.h"

@interface PKPhysicalCardManualActivationViewController : PKExplanationViewController <PKPhysicalCardActionControllerDelegate>

 {
    PKPhysicalCard *_physicalCard;
    PKPhysicalCardActionController *_actionController;
    PKPaymentPass *_paymentPass;
    NSUInteger _feature;
    NSString *_activationCode;
    PKOrderPhysicalCardHeroView *_hero;
    NSInteger _state;
    CLInUseAssertion *_inUseAssertion;
    CLLocationManager *_locationManager;
    PKBusinessChatController *_businessChatController;
    SFClient *_sharingClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccountService:(id)arg0 account:(id)arg1 accountUser:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 activationCode:(id)arg5 ;
-(id)presentationSceneIdentifierForPhysicalCardActionController:(id)arg0 ;
-(void)_presentDisplayableError:(id)arg0 ;
-(void)_setupForCurrentState;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)dealloc;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)physicalCardActionController:(id)arg0 didChangeToState:(NSInteger)arg1 withError:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif