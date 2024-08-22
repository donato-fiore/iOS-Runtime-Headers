// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUICOMMONLOADINGVIEWCONTROLLER_H
#define AMSUICOMMONLOADINGVIEWCONTROLLER_H



#import "AMSUICommonViewController.h"
#import "AMSUILoadingView.h"

@interface AMSUICommonLoadingViewController : AMSUICommonViewController

@property (retain, nonatomic) AMSUILoadingView *loadingView; // ivar: _loadingView


-(void)_setup;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif