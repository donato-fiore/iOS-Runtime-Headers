// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UNMEDIAPLAYPAUSEBUTTON_H
#define _UNMEDIAPLAYPAUSEBUTTON_H

@class UIControl, MTMaterialView, UIButton;


#import "_UNMaterialButton.h"

@interface _UNMediaPlayPauseButton : UIControl

@property (retain, nonatomic) MTMaterialView *backgroundCircle; // ivar: _backgroundCircle
@property (retain, nonatomic) _UNMaterialButton *button; // ivar: _button
@property (retain, nonatomic) UIButton *invisibleButton; // ivar: _invisibleButton
@property (nonatomic) NSInteger type; // ivar: _type


-(id)initWithFrame:(struct CGRect )arg0 type:(NSInteger)arg1 ;
-(void)_buttonTouchUpInside:(id)arg0 ;
-(void)_updateBackground;
-(void)_updateBackgroundForAudioStyle;
-(void)_updateBackgroundForMovieStyle;
-(void)_updateSelected;
-(void)_updateSelectedForAudioStyle;
-(void)_updateSelectedForMovieStyle;
-(void)_updateSize;
-(void)_updateSizeForAudioStyle;
-(void)_updateSizeForMovieStyle;
-(void)_updateStyle;
-(void)_updateStyleForAudioStyle;
-(void)_updateStyleForMovieStyle;
-(void)_updateType;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;
-(void)tintColorDidChange;


@end


#endif