// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUISPINNERVIEWCONTROLLER_H
#define AAUISPINNERVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UILabel;



@interface AAUISpinnerViewController : UIViewController {
    UIActivityIndicatorView *_spinnerView;
}


@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic, getter=isSpinning) BOOL spinning;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_commonInit;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif