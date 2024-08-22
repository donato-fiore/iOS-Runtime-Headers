// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXALERTCONTROLLER_H
#define PXALERTCONTROLLER_H

@class UIAlertController, UIActivityIndicatorView, UIProgressView, UIView;


#import "_PXAlertContentViewController.h"

@interface PXAlertController : UIAlertController {
    _PXAlertContentViewController *_contentViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    UIProgressView *_progressView;
}


@property (retain, nonatomic) UIView *contentView; // ivar: _contentView


+(id)activityAlertControllerWithTitle:(id)arg0 cancelHandler:(id)arg1 ;
+(id)progressAlertControllerWithMessage:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)setProgress:(float)arg0 animated:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif