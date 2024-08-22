// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI19DEBUGVIEWCONTROLLER_H
#define _TTC5TEAUI19DEBUGVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC5TeaUI19DebugViewController : UIViewController {
    ? settingsPresenter;
    ? debugApp;
    ? tableView;
    ? tableViewSource;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)doDone;
-(void)doSettings;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif