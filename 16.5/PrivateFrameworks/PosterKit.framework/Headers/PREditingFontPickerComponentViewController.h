// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITINGFONTPICKERCOMPONENTVIEWCONTROLLER_H
#define PREDITINGFONTPICKERCOMPONENTVIEWCONTROLLER_H

@class UIViewController, NSArray, NSLocale, UIFont, NSLayoutConstraint;
@protocol PREditingFontPickerComponentViewControllerDelegate;


#import "PREditingPickerCellView.h"

@interface PREditingFontPickerComponentViewController : UIViewController

@property (copy, nonatomic) NSArray *cellViews; // ivar: _cellViews
@property (nonatomic) CGFloat configuredViewWidth; // ivar: _configuredViewWidth
@property (weak, nonatomic) NSObject<PREditingFontPickerComponentViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly, copy, nonatomic) NSArray *fonts; // ivar: _fonts
@property (copy, nonatomic) NSArray *heightCellConstraints; // ivar: _heightCellConstraints
@property (nonatomic) CGFloat largestItemHeight; // ivar: _largestItemHeight
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) PREditingPickerCellView *selectedCellView; // ivar: _selectedCellView
@property (retain, nonatomic) UIFont *selectedFont; // ivar: _selectedFont
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint; // ivar: _stackViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint; // ivar: _stackViewTrailingConstraint
@property (nonatomic, getter=isUsingSmallerSizing) BOOL usingSmallerSizing; // ivar: _usingSmallerSizing
@property (copy, nonatomic) NSArray *widthCellConstraints; // ivar: _widthCellConstraints


+(id)defaultFonts;
-(CGFloat)estimatedHeight;
-(id)baseContentString;
-(id)contentStringForFont:(id)arg0 ;
-(id)init;
-(id)initWithFonts:(id)arg0 selectedFont:(id)arg1 ;
-(void)didSelectFont:(id)arg0 ;
-(void)loadView;
-(void)updateLayoutForCurrentSize;
-(void)viewDidLayoutSubviews;


@end


#endif