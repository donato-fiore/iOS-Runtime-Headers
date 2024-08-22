// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEROUNDEDCORNERBUTTON_H
#define AEROUNDEDCORNERBUTTON_H

@class UIControl, UIImageView, UILabel;



@interface AERoundedCornerButton : UIControl

@property (readonly, nonatomic) NSInteger _buttonType; // ivar: __buttonType
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // ivar: __imageView
@property (retain, nonatomic, setter=_setLabel:) UILabel *_label; // ivar: __label
@property (nonatomic, setter=_setLayoutStyle:) NSInteger _layoutStyle; // ivar: __layoutStyle


+(id)roundedCornerButtonWithStyle:(NSInteger)arg0 buttonType:(NSInteger)arg1 ;
-(CGFloat)_interpolatedGlyphHorizontalInset;
-(CGFloat)_interpolatedGlyphTopInset;
-(void)_commonAERoundedCornerButtonInitializationWithStyle:(NSInteger)arg0 buttonType:(NSInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif