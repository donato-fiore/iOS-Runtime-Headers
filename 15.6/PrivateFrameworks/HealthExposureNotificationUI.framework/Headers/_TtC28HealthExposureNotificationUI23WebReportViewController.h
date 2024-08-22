// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI23WEBREPORTVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI23WEBREPORTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC28HealthExposureNotificationUI23WebReportViewController : UIViewController {
    ? healthAgencyModel;
    ? $__lazy_storage_$_webView;
    ? statusView;
}


@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)initWithAgencyModel:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapCancel;
-(void)didTapDone;
-(void)viewDidLoad;


@end


#endif