// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTEEDITORTOOLBARPLUSVIEW_H
#define ICNOTEEDITORTOOLBARPLUSVIEW_H

@class UIView, CAGradientLayer, UIColor;



@interface ICNoteEditorToolbarPlusView : UIView

@property (nonatomic) BOOL closeState; // ivar: _closeState
@property (retain, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (retain, nonatomic) UIView *gradientView; // ivar: _gradientView
@property (readonly, nonatomic) UIColor *itemColor;
@property (retain, nonatomic) UIView *plainView; // ivar: _plainView
@property (retain, nonatomic) UIView *plusView; // ivar: _plusView


+(id)newCircleMaskWithBounds:(struct CGRect )arg0 ;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)updateGradientLayerColors;


@end


#endif