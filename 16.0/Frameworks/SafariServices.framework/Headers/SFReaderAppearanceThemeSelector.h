// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFREADERAPPEARANCETHEMESELECTOR_H
#define SFREADERAPPEARANCETHEMESELECTOR_H

@class UIView, UIStackView, UIButton;



@interface SFReaderAppearanceThemeSelector : UIView {
    UIStackView *_stackView;
    UIButton *_whiteButton;
    UIButton *_sepiaButton;
    UIButton *_grayButton;
    UIButton *_nightButton;
}


@property (nonatomic) NSInteger selectedTheme; // ivar: _selectedTheme
@property (copy, nonatomic) id *selectedThemeChangedBlock; // ivar: _selectedThemeChangedBlock


+(CGFloat)requiredHeight;
+(id)themeSelectorWithBlock:(id)arg0 ;
-(NSInteger)_themeForButton:(id)arg0 ;
-(id)_buttonForTheme:(NSInteger)arg0 ;
-(id)_imageForTheme:(NSInteger)arg0 selected:(BOOL)arg1 ;
-(id)_themeButtonImageWithFillColor:(id)arg0 strokeColor:(id)arg1 selected:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_changeSelectionForTheme:(NSInteger)arg0 selected:(BOOL)arg1 ;
-(void)_createThemeButtons;
-(void)_themeButtonAction:(id)arg0 ;
-(void)_updateSelectedTheme;


@end


#endif