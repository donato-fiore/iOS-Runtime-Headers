// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC27APPLEMEDIASERVICESUIDYNAMIC21LOADINGVIEWCONTROLLER_H
#define _TTC27APPLEMEDIASERVICESUIDYNAMIC21LOADINGVIEWCONTROLLER_H

@class AMSUICommonViewController, UINavigationItem;



@interface _TtC27AppleMediaServicesUIDynamic21LoadingViewController : AMSUICommonViewController {
    ? activityIndicator;
    ? dimmingView;
    ? style;
}


@property (nonatomic, readonly) UINavigationItem *navigationItem;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif