// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCALERTCONTROLLER_H
#define MCALERTCONTROLLER_H

@class UIAlertController, UIWindow;



@interface MCAlertController : UIAlertController

@property (retain, nonatomic) UIWindow *alertWindow; // ivar: _alertWindow
@property (copy, nonatomic) id *viewDidDisappearHandler; // ivar: _viewDidDisappearHandler
@property (copy, nonatomic) id *viewWillAppearHandler; // ivar: _viewWillAppearHandler


-(void)dealloc;
-(void)dismiss;
-(void)show;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif