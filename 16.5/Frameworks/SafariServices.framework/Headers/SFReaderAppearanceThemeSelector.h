// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFREADERAPPEARANCETHEMESELECTOR_H
#define SFREADERAPPEARANCETHEMESELECTOR_H

@class UIView, UIStackView, UIButton, NSArray;
@protocol _SFSettingsAlertPaletteController;



@interface SFReaderAppearanceThemeSelector : UIView <_SFSettingsAlertPaletteController>

 {
    UIStackView *_stackView;
    UIButton *_whiteButton;
    UIButton *_sepiaButton;
    UIButton *_grayButton;
    UIButton *_nightButton;
}


@property (nonatomic) NSInteger selectedTheme; // ivar: _selectedTheme
@property (copy, nonatomic) id *selectedThemeChangedBlock; // ivar: _selectedThemeChangedBlock
@property (readonly, nonatomic) NSArray *values;


+(CGFloat)requiredHeight;
+(id)themeSelectorWithBlock:(id)arg0 ;
-(BOOL)isSelectedValue:(id)arg0 ;
-(NSInteger)_themeForButton:(id)arg0 ;
-(id)_buttonForTheme:(NSInteger)arg0 ;
-(id)_imageForTheme:(NSInteger)arg0 selected:(BOOL)arg1 ;
-(id)_themeButtonImageWithFillColor:(id)arg0 strokeColor:(id)arg1 selected:(BOOL)arg2 ;
-(id)customPaletteView;
-(id)imageForValue:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)selectedValue;
-(void)_changeSelectionForTheme:(NSInteger)arg0 selected:(BOOL)arg1 ;
-(void)_createThemeButtons;
-(void)_themeButtonAction:(id)arg0 ;
-(void)_updateSelectedTheme;
-(void)selectValue:(id)arg0 ;


@end


#endif