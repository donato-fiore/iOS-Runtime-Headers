// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPHYSICALCARDREADERMODEACTIVATIONVIEWCONTROLLER_H
#define PKPHYSICALCARDREADERMODEACTIVATIONVIEWCONTROLLER_H

@class PKAccountService, PKAccount, PKAccountUser, PKPhysicalCard, PKPaymentPass, PKPaymentSessionHandle, PKNFCTagReaderSession, NSString;
@protocol PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate;


#import "PKExplanationViewController.h"
#import "PKPhysicalCardActivationAnimationView.h"
#import "PKBusinessChatController.h"

@interface PKPhysicalCardReaderModeActivationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate>

 {
    PKAccountService *_accountService;
    PKAccount *_account;
    PKAccountUser *_accountUser;
    PKPhysicalCard *_physicalCard;
    PKPaymentPass *_paymentPass;
    NSUInteger _feature;
    PKPhysicalCardActivationAnimationView *_animationView;
    BOOL _invalidated;
    BOOL _deviceSupportsReaderMode;
    PKPaymentSessionHandle *_sessionHandle;
    PKNFCTagReaderSession *_readerSession;
    PKBusinessChatController *_businessChatController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccountService:(id)arg0 account:(id)arg1 accountUser:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 ;
-(void)_dismiss;
-(void)_invalidate;
-(void)_presentActivationWithActivationCode:(id)arg0 ;
-(void)_startTagReaderSession;
-(void)_stopTagReaderSession;
-(void)dealloc;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)nfcTagReaderSession:(id)arg0 didDetectTags:(id)arg1 ;
-(void)nfcTagReaderSessionDidEndUnexpectedly:(id)arg0 ;
-(void)nfcTagReaderSessionDidTimeout:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif