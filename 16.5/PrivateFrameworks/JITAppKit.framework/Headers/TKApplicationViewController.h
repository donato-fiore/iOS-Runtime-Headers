// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKAPPLICATIONVIEWCONTROLLER_H
#define TKAPPLICATIONVIEWCONTROLLER_H

@class UIViewController, NSURL, NSString;
@protocol TKApplicationViewControllerDelegate;



@interface TKApplicationViewController : UIViewController

@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (retain, nonatomic) UIViewController *childViewController; // ivar: _childViewController
@property (weak, nonatomic) NSObject<TKApplicationViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIViewController *loadingViewController; // ivar: _loadingViewController
@property (readonly, nonatomic) NSString *viewName; // ivar: _viewName


+(id)applicationViewController:(id)arg0 ;
-(BOOL)handleApplicationControllerError;
-(id)initWithBundleURL:(id)arg0 loadPage:(id)arg1 ;
-(id)initWithBundleURL:(id)arg0 loadPage:(id)arg1 withData:(id)arg2 ;
-(id)initWithBundleURL:(id)arg0 loadPage:(id)arg1 withDataRequest:(id)arg2 ;
-(id)initWithBundleURL:(id)arg0 viewName:(id)arg1 delegate:(id)arg2 ;
-(void)didLoadViewController:(id)arg0 ;
-(void)dismissApplicationControllerAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif