// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUIBARBUTTONSPINNERVIEW_H
#define RUIBARBUTTONSPINNERVIEW_H

@class UIBarButtonItem, UIActivityIndicatorView;



@interface RUIBarButtonSpinnerView : UIBarButtonItem {
    UIActivityIndicatorView *_spinner;
}




-(id)initWithActivityIndicatorStyle:(NSInteger)arg0 ;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif