// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9COREIDVUI20IDSCANVIEWCONTROLLER_H
#define _TTC9COREIDVUI20IDSCANVIEWCONTROLLER_H

@class TtC9CoreIDVUI30IdentityProofingViewController;



@interface _TtC9CoreIDVUI20IDScanViewController : TtC9CoreIDVUI30IdentityProofingViewController {
    ? autoCapturePath;
    ? interactor;
    ? docInfo;
    ? scanSide;
    ? cameraReader;
    ? docScanConfig;
    ? lastSpokenAlertMessage;
    ? idScanResult;
    ? eligibilityHelper;
    ? proofingFlowManager;
    ? analyticsReporter;
}




-(id)initWithCoder:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif