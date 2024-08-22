// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKADDCREDENTIALTOWATCHCOMPLETEDVIEWCONTROLLER_H
#define PKADDCREDENTIALTOWATCHCOMPLETEDVIEWCONTROLLER_H

@class NSString;
@protocol PKSubcredentialPairingFlowControllerOperation, PKViewControllerPreflightable, PKSubcredentialPairingFlowControllerProtocol;


#import "PKExplanationViewController.h"
#import "PKHeroCardWatchExplainationHeaderView.h"
#import "PKSubcredentialPairingFlowControllerContext.h"

@interface PKAddCredentialToWatchCompletedViewController : PKExplanationViewController <PKSubcredentialPairingFlowControllerOperation, PKViewControllerPreflightable>

 {
    PKHeroCardWatchExplainationHeaderView *_heroCardView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKSubcredentialPairingFlowControllerProtocol> *flowController; // ivar: _flowController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger operation;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext; // ivar: _provisioningContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressFieldDetect;


-(id)bodyText;
-(id)initWithFlowController:(id)arg0 context:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)preflightWithCompletion:(id)arg0 ;


@end


#endif