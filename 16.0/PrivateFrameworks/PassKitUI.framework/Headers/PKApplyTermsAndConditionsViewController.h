// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYTERMSANDCONDITIONSVIEWCONTROLLER_H
#define PKAPPLYTERMSANDCONDITIONSVIEWCONTROLLER_H

@class NSString, CLInUseAssertion;
@protocol PKViewControllerPreflightable;


#import "PKFeatureTermsAndConditionsViewController.h"
#import "PKApplyController.h"

@interface PKApplyTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController <PKViewControllerPreflightable>

 {
    PKApplyController *_applyController;
    NSString *_termsIdentifier;
    CLInUseAssertion *_inUseAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL preflightPDFTerms; // ivar: _preflightPDFTerms
@property (readonly) Class superclass;


-(id)displayTitle;
-(id)initWithController:(id)arg0 setupDelegate:(id)arg1 context:(NSInteger)arg2 termsIdentifier:(id)arg3 ;
-(void)_terminateSetupFlow;
-(void)dealloc;
-(void)htmlTermsDataWithCompletion:(id)arg0 ;
-(void)initalTermsDataWithCompletion:(id)arg0 ;
-(void)pdfTermsDataWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)presentErrorAlert;
-(void)reportAnalyticsForTermsLink:(id)arg0 ;
-(void)termsAccepted:(BOOL)arg0 completion:(id)arg1 ;
-(void)termsShown;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif