// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCOMPOSESTYLESELECTORVIEWCONTROLLER_H
#define MFCOMPOSESTYLESELECTORVIEWCONTROLLER_H

@class UIViewController, UIStackView, NSString;
@protocol MFComposeColorPickerControllerDelegate, UIFontPickerViewControllerDelegate, MFPreferredHeightProviding, MFComposeStyleSelectorViewControllerDelegate;


#import "MFComposeStyleSelectorButton.h"
#import "MFComposeColorPickerController.h"
#import "MFComposeFontSelectorButton.h"
#import "MFRoundedCornersStackView.h"
#import "MFComposeTextColorButton.h"

@interface MFComposeStyleSelectorViewController : UIViewController <MFComposeColorPickerControllerDelegate, UIFontPickerViewControllerDelegate, MFPreferredHeightProviding>



@property (retain, nonatomic) MFComposeStyleSelectorButton *boldButton; // ivar: _boldButton
@property (retain, nonatomic) MFComposeStyleSelectorButton *bulletListButton; // ivar: _bulletListButton
@property (retain, nonatomic) MFComposeColorPickerController *colorPicker; // ivar: _colorPicker
@property (retain, nonatomic) UIStackView *containerStackView; // ivar: _containerStackView
@property (nonatomic) NSInteger currentFontSize; // ivar: _currentFontSize
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MFComposeStyleSelectorButton *decreaseFontSizeButton; // ivar: _decreaseFontSizeButton
@property (retain, nonatomic) MFComposeStyleSelectorButton *decreaseQuoteButton; // ivar: _decreaseQuoteButton
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIStackView *fontAttributeStackView; // ivar: _fontAttributeStackView
@property (retain, nonatomic) MFComposeFontSelectorButton *fontSelectorButton; // ivar: _fontSelectorButton
@property (retain, nonatomic) UIStackView *fontTextAttributeStackView; // ivar: _fontTextAttributeStackView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MFComposeStyleSelectorButton *increaseFontSizeButton; // ivar: _increaseFontSizeButton
@property (retain, nonatomic) MFComposeStyleSelectorButton *increaseQuoteButton; // ivar: _increaseQuoteButton
@property (retain, nonatomic) MFComposeStyleSelectorButton *indentLeftButton; // ivar: _indentLeftButton
@property (retain, nonatomic) MFComposeStyleSelectorButton *indentRightButton; // ivar: _indentRightButton
@property (retain, nonatomic) MFRoundedCornersStackView *indentStackView; // ivar: _indentStackView
@property (retain, nonatomic) MFComposeStyleSelectorButton *italicsButton; // ivar: _italicsButton
@property (retain, nonatomic) MFComposeStyleSelectorButton *justifyCenterButton; // ivar: _justifyCenterButton
@property (retain, nonatomic) MFComposeStyleSelectorButton *justifyLeftButton; // ivar: _justifyLeftButton
@property (retain, nonatomic) MFComposeStyleSelectorButton *justifyRightButton; // ivar: _justifyRightButton
@property (retain, nonatomic) MFRoundedCornersStackView *justifyStackView; // ivar: _justifyStackView
@property (retain, nonatomic) UIStackView *listJustifyStackView; // ivar: _listJustifyStackView
@property (retain, nonatomic) MFRoundedCornersStackView *listStackView; // ivar: _listStackView
@property (retain, nonatomic) MFComposeStyleSelectorButton *numberedListButton; // ivar: _numberedListButton
@property (retain, nonatomic) UIStackView *quoteIndentListJustifyStackView; // ivar: _quoteIndentListJustifyStackView
@property (retain, nonatomic) UIStackView *quoteIndentStackView; // ivar: _quoteIndentStackView
@property (retain, nonatomic) MFRoundedCornersStackView *quoteLevelStackView; // ivar: _quoteLevelStackView
@property (retain, nonatomic) MFComposeStyleSelectorButton *strikethroughButton; // ivar: _strikethroughButton
@property (weak, nonatomic) NSObject<MFComposeStyleSelectorViewControllerDelegate> *styleDelegate; // ivar: _styleDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) MFRoundedCornersStackView *textAttributeStackView; // ivar: _textAttributeStackView
@property (retain, nonatomic) MFComposeTextColorButton *textColorButton; // ivar: _textColorButton
@property (retain, nonatomic) MFComposeStyleSelectorButton *underlineButton; // ivar: _underlineButton


-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;
-(id)_composeStyleSelectorButtonForAttributeType:(NSInteger)arg0 ;
-(id)_roundedEquallyFilledHorizontalStackView;
-(struct CGSize )preferredContentSize;
-(void)_setupButtons;
-(void)_setupContainer;
-(void)_updateFontsButton:(id)arg0 ;
-(void)changeFontSizeAction:(id)arg0 ;
-(void)closeStyleSelector:(id)arg0 ;
-(void)colorPicker:(id)arg0 didChangeSelectedColor:(id)arg1 ;
-(void)colorPickerDidCancel:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)fontPickerViewControllerDidCancel:(id)arg0 ;
-(void)fontPickerViewControllerDidPickFont:(id)arg0 ;
-(void)loadView;
-(void)pickFontAction:(id)arg0 ;
-(void)pickTextColor:(id)arg0 ;
-(void)styleSelectorAction:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateStateUsingFontAttributes:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif