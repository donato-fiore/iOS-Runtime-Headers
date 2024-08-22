// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSBARBUTTONSPINNERVIEW_H
#define PSBARBUTTONSPINNERVIEW_H

@class UIBarButtonItem, UIActivityIndicatorView;



@interface PSBarButtonSpinnerView : UIBarButtonItem {
    UIActivityIndicatorView *_spinner;
}




-(id)init;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif