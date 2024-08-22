// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALINVITATIONACCEPTEDVIEWCONTROLLER_H
#define PKSUBCREDENTIALINVITATIONACCEPTEDVIEWCONTROLLER_H

@class NSString;
@protocol PKSubcredentialInvitationFlowControllerOperation, PKViewControllerPreflightable, PKSubcredentialInvitationFlowControllerProtocol;


#import "PKExplanationViewController.h"
#import "PKHeroCardExplainationHeaderView.h"
#import "PKSubcredentialInvitationFlowControllerContext.h"

@interface PKSubcredentialInvitationAcceptedViewController : PKExplanationViewController <PKSubcredentialInvitationFlowControllerOperation, PKViewControllerPreflightable>

 {
    PKHeroCardExplainationHeaderView *_heroCardView;
    BOOL _isPassExpress;
    NSUInteger _radioTechnologyType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKSubcredentialInvitationFlowControllerProtocol> *flowController; // ivar: _flowController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger operation;
@property (retain, nonatomic) PKSubcredentialInvitationFlowControllerContext *provisioningContext; // ivar: _provisioningContext
@property (readonly) Class superclass;


-(id)initWithFlowController:(id)arg0 context:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif