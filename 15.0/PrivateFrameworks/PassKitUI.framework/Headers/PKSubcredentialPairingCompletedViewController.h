// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPAIRINGCOMPLETEDVIEWCONTROLLER_H
#define PKSUBCREDENTIALPAIRINGCOMPLETEDVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation, PKViewControllerPreflightable, PKSubcredentialPairingFlowControllerProtocol;


#import "PKExplanationViewController.h"
#import "PKHeroCardExplainationHeaderView.h"
#import "PKSubcredentialPairingFlowControllerContext.h"

@interface PKSubcredentialPairingCompletedViewController : PKExplanationViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation, PKViewControllerPreflightable>

 {
    BOOL _isLastOperation;
    BOOL _isPassExpress;
    PKHeroCardExplainationHeaderView *_heroCardView;
    UIViewController *_nextVC;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKSubcredentialPairingFlowControllerProtocol> *flowController; // ivar: _flowController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger operation;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext; // ivar: _provisioningContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressFieldDetect;


-(id)initWithFlowController:(id)arg0 context:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif