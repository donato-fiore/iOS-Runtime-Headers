// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BFFBARBUTTONSPINNERVIEW_H
#define BFFBARBUTTONSPINNERVIEW_H

@class UIBarButtonItem, UIActivityIndicatorView;



@interface BFFBarButtonSpinnerView : UIBarButtonItem {
    UIActivityIndicatorView *_spinner;
}




-(id)init;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif