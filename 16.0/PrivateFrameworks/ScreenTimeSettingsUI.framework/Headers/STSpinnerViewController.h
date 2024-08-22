// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSPINNERVIEWCONTROLLER_H
#define STSPINNERVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView;



@interface STSpinnerViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_commonInit;
-(void)viewDidLoad;


@end


#endif