// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8STOCKSUI18TEXTANDIMAGEBUTTON_H
#define _TTC8STOCKSUI18TEXTANDIMAGEBUTTON_H

@class UIControl;



@interface _TtC8StocksUI18TextAndImageButton : UIControl {
    ? label;
    ? imageView;
    ? onTap;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif