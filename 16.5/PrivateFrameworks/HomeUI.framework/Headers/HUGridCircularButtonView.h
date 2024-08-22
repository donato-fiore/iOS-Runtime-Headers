// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUGRIDCIRCULARBUTTONVIEW_H
#define HUGRIDCIRCULARBUTTONVIEW_H

@class UIView, UIButton, UIImage, UIListContentView, NSString;
@protocol HUGridCircularButtonViewDelegate;



@interface HUGridCircularButtonView : UIView

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (readonly, nonatomic) UIImage *buttonImage; // ivar: _buttonImage
@property (nonatomic) NSObject<HUGridCircularButtonViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIListContentView *label; // ivar: _label
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 title:(id)arg1 ;


@end


#endif