// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKISSUERBINDINGVIEWCONTROLLER_H
#define PKISSUERBINDINGVIEWCONTROLLER_H

@class NSString, PKPassLibrary, NSData;
@protocol PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKIssuerBindingViewControllerDelegate;


#import "PKExplanationViewController.h"

@interface PKIssuerBindingViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate>

 {
    NSString *_issuerName;
    NSString *_accountName;
    PKPassLibrary *_passLibrary;
    NSData *_issuerData;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKIssuerBindingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_alertViewControllerForError:(id)arg0 ;
-(id)initWithIssuerData:(id)arg0 signature:(id)arg1 ;
-(void)_cancel;
-(void)_confirmSecurityCapabilitiesWithCompletion:(id)arg0 ;
-(void)_enableControls;
-(void)_presentFailureWithError:(id)arg0 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif