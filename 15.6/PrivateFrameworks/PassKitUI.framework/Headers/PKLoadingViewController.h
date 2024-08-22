// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKLOADINGVIEWCONTROLLER_H
#define PKLOADINGVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UILabel;
@protocol PKLoadingViewControllerDelegate;



@interface PKLoadingViewController : UIViewController {
    id<PKLoadingViewControllerDelegate> *_delegate;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
}




-(id)initWithDelegate:(id)arg0 ;
-(void)_cancelButtonTapped:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif