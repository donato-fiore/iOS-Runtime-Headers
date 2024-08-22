// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTERSETUPPINSCROLLVIEW_H
#define UIPRINTERSETUPPINSCROLLVIEW_H

@class UIScrollView, UIView;



@interface UIPrinterSetupPINScrollView : UIScrollView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat visibleHeight; // ivar: _visibleHeight


-(BOOL)_scrollsToMakeFirstResponderVisible;
-(id)initWithContentView:(id)arg0 ;
-(void)dealloc;
-(void)keyboardDidChangeFrame:(id)arg0 ;
-(void)layoutSubviews;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;


@end


#endif