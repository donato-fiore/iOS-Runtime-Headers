// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKTOGGLEBUTTON_H
#define AKTOGGLEBUTTON_H

@class UIButton, UIColor, UIImage;



@interface AKToggleButton : UIButton

@property (retain, nonatomic) UIColor *selectedColor; // ivar: _selectedColor
@property (nonatomic) BOOL shouldTintNormalImage; // ivar: _shouldTintNormalImage
@property (nonatomic) BOOL showsBackgroundColor; // ivar: _showsBackgroundColor
@property (retain, nonatomic) UIImage *templateImage; // ivar: _templateImage


+(id)colorImage:(id)arg0 withColor:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 templateImage:(id)arg1 autoUpdatesColor:(BOOL)arg2 ;
-(void)_setDeselectedStateColorImage;
-(void)_setSelectedStateColorImage;
-(void)_touchCommitted:(id)arg0 ;
-(void)_updateSelectionColorsAnimated:(BOOL)arg0 ;
-(void)_updateStateColors;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif