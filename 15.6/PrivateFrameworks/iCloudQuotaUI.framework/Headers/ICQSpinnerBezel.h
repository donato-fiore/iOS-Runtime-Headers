// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQSPINNERBEZEL_H
#define ICQSPINNERBEZEL_H

@class UIView, UIActivityIndicatorView, NSString;



@interface ICQSpinnerBezel : UIView {
    UIActivityIndicatorView *_spinner;
}


@property (retain, nonatomic) NSString *bezelText; // ivar: _bezelText


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif