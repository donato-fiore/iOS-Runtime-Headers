// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIGENERATETRANSFERQRCODESPECIFIER_H
#define PSUIGENERATETRANSFERQRCODESPECIFIER_H

@class PSSpecifier, NSString, TSSIMSetupFlow, PSListController, UIActivityIndicatorView;



@interface PSUIGenerateTransferQRCodeSpecifier : PSSpecifier

@property (readonly, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (retain) TSSIMSetupFlow *flow; // ivar: _flow
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (readonly, nonatomic) NSString *iccid; // ivar: _iccid
@property (nonatomic) BOOL popViewControllerOnPlanDeletion; // ivar: _popViewControllerOnPlanDeletion
@property (retain) UIActivityIndicatorView *spinner; // ivar: _spinner


-(id)getLogger;
-(id)initWithHostController:(id)arg0 iccid:(id)arg1 carrierName:(id)arg2 ;
-(void)generateTransferQRCodeCellPressed:(id)arg0 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)showSpinner:(BOOL)arg0 ;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;


@end


#endif