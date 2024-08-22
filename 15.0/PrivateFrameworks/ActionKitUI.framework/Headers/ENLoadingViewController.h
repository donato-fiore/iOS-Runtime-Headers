// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENLOADINGVIEWCONTROLLER_H
#define ENLOADINGVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView;
@protocol ENLoadingViewControllerDelegate;



@interface ENLoadingViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (weak, nonatomic) NSObject<ENLoadingViewControllerDelegate> *delegate; // ivar: _delegate


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancel:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif