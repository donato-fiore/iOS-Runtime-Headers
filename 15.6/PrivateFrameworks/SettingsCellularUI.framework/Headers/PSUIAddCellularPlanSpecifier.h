// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIADDCELLULARPLANSPECIFIER_H
#define PSUIADDCELLULARPLANSPECIFIER_H

@class PSSpecifier, CTCellularPlanManager, Logger, UIActivityIndicatorView, NSString, TSSIMSetupFlow, PSListController;
@protocol TSSIMSetupDelegate;



@interface PSUIAddCellularPlanSpecifier : PSSpecifier <TSSIMSetupDelegate>

 {
    CTCellularPlanManager *_planManager;
    Logger *_logger;
    id *_originAccessoryView;
    UIActivityIndicatorView *_spinner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) TSSIMSetupFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (readonly) Class superclass;


-(NSInteger)userConsentResponse;
-(id)getLogger;
-(id)initWithHostController:(id)arg0 isEmbeddedInCarrierList:(BOOL)arg1 ;
-(id)initWithHostController:(id)arg0 isEmbeddedInCarrierList:(BOOL)arg1 planManager:(id)arg2 ;
-(void)addCellularPlanCellPressed:(id)arg0 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)showSpinner:(BOOL)arg0 ;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;


@end


#endif