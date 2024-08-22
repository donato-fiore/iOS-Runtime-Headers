// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCPROGRESSVIEWCONTROLLER_H
#define DCPROGRESSVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UILabel, NSProgress;
@protocol DCProgressViewControllerDelegate;


#import "DCCircularProgressView.h"

@interface DCProgressViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) DCCircularProgressView *circularProgressView; // ivar: _circularProgressView
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSProgress *observedProgress; // ivar: _observedProgress
@property (weak, nonatomic) NSObject<DCProgressViewControllerDelegate> *progressDelegate; // ivar: _progressDelegate
@property (nonatomic) BOOL showsCancel; // ivar: _showsCancel


-(BOOL)_canShowWhileLocked;
-(id)initWithDelegate:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif