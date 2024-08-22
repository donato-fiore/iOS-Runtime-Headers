// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COREIDVUI24RGBCAPTUREVIEWCONTROLLER_H
#define _TTC9COREIDVUI24RGBCAPTUREVIEWCONTROLLER_H

@class TtC9CoreIDVUI30IdentityProofingViewController;
@protocol UINavigationControllerDelegate;



@interface _TtC9CoreIDVUI24RGBCaptureViewController : TtC9CoreIDVUI30IdentityProofingViewController <UINavigationControllerDelegate>

 {
    ? interactor;
    ? captureConfig;
    ? inWatchModeOnly;
    ? analyticsReporter;
    ? proofingFlowManager;
    ? eligibilityHelper;
    ? configuration;
    ? timeoutRestarts;
    ? stitchDetectedRestarts;
    ? faceOutOfBoundsRestarts;
    ? faceTooSmallRestarts;
    ? sentToBackgroundRestarts;
    ? activityIndicator;
}




-(id)initWithCoder:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif