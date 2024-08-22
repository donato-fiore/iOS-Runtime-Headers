// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9COREIDVUI32IDSCANCONFIRMATIONVIEWCONTROLLER_H
#define _TTC9COREIDVUI32IDSCANCONFIRMATIONVIEWCONTROLLER_H

@class TtC9CoreIDVUI30IdentityProofingViewController;



@interface _TtC9CoreIDVUI32IDScanConfirmationViewController : TtC9CoreIDVUI30IdentityProofingViewController {
    ? scanSide;
    ? proofingFlowManager;
    ? idScanResult;
    ? interactor;
    ? docScanConfig;
    ? configuration;
    ? eligibilityHelper;
    ? analyticsReporter;
}




-(id)initWithCoder:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif