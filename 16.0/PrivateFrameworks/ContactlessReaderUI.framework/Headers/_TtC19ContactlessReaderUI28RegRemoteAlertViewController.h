// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19CONTACTLESSREADERUI28REGREMOTEALERTVIEWCONTROLLER_H
#define _TTC19CONTACTLESSREADERUI28REGREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController;



@interface _TtC19ContactlessReaderUI28RegRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    ? viewModel;
    ? regViewController;
    ? subscriptions;
    ? suppressible;
}


@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif