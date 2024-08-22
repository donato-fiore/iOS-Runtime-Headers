// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSUBCREDENTIALHEROVIEWCONTROLLER_H
#define PKSUBCREDENTIALHEROVIEWCONTROLLER_H

@class NSString;
@protocol PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKSubcredentialPairingFlowControllerOperation, PKSubcredentialPairingFlowControllerProtocol;


#import "PKExplanationViewController.h"
#import "PKSubcredentialPairingFlowControllerContext.h"

@interface PKSubcredentialHeroViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKSubcredentialPairingFlowControllerOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKSubcredentialPairingFlowControllerProtocol> *flowController; // ivar: _flowController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger operation;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext; // ivar: _provisioningContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressFieldDetect;


-(id)initWithFlowController:(id)arg0 context:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif