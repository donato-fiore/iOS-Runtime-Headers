// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC27APPLEMEDIASERVICESUIDYNAMIC19ERRORVIEWCONTROLLER_H
#define _TTC27APPLEMEDIASERVICESUIDYNAMIC19ERRORVIEWCONTROLLER_H

@class AMSUICommonViewController, UINavigationItem;



@interface _TtC27AppleMediaServicesUIDynamic19ErrorViewController : AMSUICommonViewController {
    ? automaticRetry;
    ? error;
    ? objectGraph;
    ? retryAction;
    ? airplaneModeInquiry;
    ? cellularDataInquiry;
    ? networkInquiry;
    ? networkObservation;
    ? $__lazy_storage_$_contentUnavailableView;
}


@property (nonatomic, readonly) UINavigationItem *navigationItem;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif