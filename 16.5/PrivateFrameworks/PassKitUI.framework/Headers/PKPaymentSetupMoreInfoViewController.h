// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPMOREINFOVIEWCONTROLLER_H
#define PKPAYMENTSETUPMOREINFOVIEWCONTROLLER_H

@class NSArray, PKSecureElementPass;
@protocol PKPaymentWebServiceTargetDeviceProtocol;


#import "PKExplanationViewController.h"

@interface PKPaymentSetupMoreInfoViewController : PKExplanationViewController {
    BOOL _didBeginReportingSubject;
    NSInteger _reportingSource;
}


@property (copy, nonatomic) id *dismissalHandler; // ivar: _dismissalHandler
@property (nonatomic) BOOL isFinalViewController; // ivar: _isFinalViewController
@property (readonly, retain, nonatomic) NSArray *moreInfoItems; // ivar: _moreInfoItems
@property (readonly, retain, nonatomic) PKSecureElementPass *pass; // ivar: _pass
@property (readonly, nonatomic) NSObject<PKPaymentWebServiceTargetDeviceProtocol> *targetDevice; // ivar: _targetDevice


-(BOOL)_isExpressEducation;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)edgesForExtendedLayout;
-(id)_currentItem;
-(id)_nextItems;
-(id)_reportingSubject;
-(id)initWithMoreInfoItems:(id)arg0 paymentPass:(id)arg1 targetDevice:(id)arg2 context:(NSInteger)arg3 dismissalHandler:(id)arg4 ;
// -(id)initWithMoreInfoItems:(id)arg0 paymentPass:(id)arg1 targetDevice:(id)arg2 context:(NSInteger)arg3 dismissalHandler:(id)arg4 reportingSource:(unk)arg5  ;
-(struct CGSize )_snapshotSize;
-(void)_alternateActionWithCompletion:(id)arg0 ;
-(void)_beginReportingIfNecessary;
-(void)_endReportingIfNecessary;
-(void)_handleDismissal;
-(void)_handlePush;
-(void)_linkTapped;
-(void)_next;
-(void)_reportDoneButtonTapped;
-(void)_reportExpressModeDisable;
-(void)_reportExpressModeEnable;
-(void)_reportTurnOffExpressButtonTapped;
-(void)_reportViewDidAppear;
-(void)_reportevent:(id)arg0 ;
-(void)explanationViewDidSelectBodyButton:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif