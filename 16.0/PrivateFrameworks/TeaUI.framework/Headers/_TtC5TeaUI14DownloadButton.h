// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5TEAUI14DOWNLOADBUTTON_H
#define _TTC5TEAUI14DOWNLOADBUTTON_H

@class TtC5TeaUI17TouchInsetsButton;



@interface _TtC5TeaUI14DownloadButton : TtC5TeaUI17TouchInsetsButton {
    ? handler;
    ? delegate;
    ? dataProvider;
    ? imageTintColor;
    ? progressTintColor;
    ? trackTintColor;
    ? downloadingImage;
    ? notDownloadingImage;
    ? progressBackgroundLayer;
    ? progressLayer;
    ? buttonState;
    ? downloadProgressDisposable;
    ? downloadStateDisposable;
}




-(BOOL)accessibilityActivate;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)startingButtonTappedWithSender:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif