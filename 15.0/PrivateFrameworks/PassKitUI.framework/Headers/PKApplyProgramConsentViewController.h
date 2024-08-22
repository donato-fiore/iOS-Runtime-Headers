// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLYPROGRAMCONSENTVIEWCONTROLLER_H
#define PKAPPLYPROGRAMCONSENTVIEWCONTROLLER_H

@class CLInUseAssertion, NSString;


#import "PKApplyExplanationViewController.h"

@interface PKApplyProgramConsentViewController : PKApplyExplanationViewController {
    CLInUseAssertion *_inUseAssertion;
    NSString *_pathTermsIdentifier;
    NSString *_pathIdentifier;
}




-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 applyPage:(id)arg3 ;
-(void)_termsAccepted:(BOOL)arg0 ;
-(void)dealloc;
-(void)explanationViewDidSelectBodyButton:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif