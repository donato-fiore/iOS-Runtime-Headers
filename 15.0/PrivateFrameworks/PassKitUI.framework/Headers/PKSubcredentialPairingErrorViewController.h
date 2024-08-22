// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPAIRINGERRORVIEWCONTROLLER_H
#define PKSUBCREDENTIALPAIRINGERRORVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation, PKSubcredentialPairingFlowControllerProtocol;


#import "PKExplanationView.h"
#import "PKSubcredentialPairingFlowControllerContext.h"

@interface PKSubcredentialPairingErrorViewController : UIViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation>

 {
    PKExplanationView *_explainationView;
    BOOL _isAdvancing;
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
-(void)cancelButtonPressed;
-(void)configureExplanationViewWithError:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif