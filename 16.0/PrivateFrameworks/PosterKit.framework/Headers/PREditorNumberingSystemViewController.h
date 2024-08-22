// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITORNUMBERINGSYSTEMVIEWCONTROLLER_H
#define PREDITORNUMBERINGSYSTEMVIEWCONTROLLER_H

@class UIViewController, NSArray, NSLocale, UIFont, NSDictionary, NSString, NSLayoutConstraint;
@protocol PREditorNumberingSystemViewControllerDelegate;


#import "PREditingPickerLabeledCellView.h"

@interface PREditorNumberingSystemViewController : UIViewController

@property (nonatomic) CGSize cellSize; // ivar: _cellSize
@property (retain, nonatomic) NSArray *cellViews; // ivar: _cellViews
@property (nonatomic) CGFloat configuredViewWidth; // ivar: _configuredViewWidth
@property (weak, nonatomic) NSObject<PREditorNumberingSystemViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSLocale *displayLocale;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (copy, nonatomic) NSArray *heightCellConstraints; // ivar: _heightCellConstraints
@property (nonatomic) CGFloat largestItemHeight; // ivar: _largestItemHeight
@property (retain, nonatomic) NSDictionary *numberSystemImages; // ivar: _numberSystemImages
@property (retain, nonatomic) PREditingPickerLabeledCellView *selectedCellView; // ivar: _selectedCellView
@property (copy, nonatomic) NSString *selectedNumberingSystem; // ivar: _selectedNumberingSystem
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint; // ivar: _stackViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint; // ivar: _stackViewTrailingConstraint
@property (nonatomic, getter=isUsingSmallerSizing) BOOL usingSmallerSizing; // ivar: _usingSmallerSizing
@property (copy, nonatomic) NSArray *widthCellConstraints; // ivar: _widthCellConstraints


+(id)allNumberingSystems;
+(id)displayFontForFont:(id)arg0 ;
+(id)displayNameForNumberingSystem:(id)arg0 ;
+(id)systemNumberingSystem;
-(CGFloat)estimatedHeight;
-(id)baseContentStringForLocale:(id)arg0 ;
-(id)contentStringForFont:(id)arg0 locale:(id)arg1 ;
-(id)displayFont;
-(id)initWithSelectedNumberingSystem:(id)arg0 selectedFont:(id)arg1 ;
-(id)localeWithNumberingSystem:(id)arg0 ;
-(void)didSelectNumberingSystem:(id)arg0 ;
-(void)updateLayoutForCurrentSize;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif