// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITINGCOLORPICKERCOMPONENTVIEWCONTROLLER_H
#define PREDITINGCOLORPICKERCOMPONENTVIEWCONTROLLER_H

@class UIViewController, UIScrollView, UIColor, UIStackView;
@protocol PREditingColorItemsViewControllerDelegate, PREditingColorPickerComponentViewControllerDelegate;


#import "PREditorColorPickerConfiguration.h"
#import "PREditingColorItemsViewController.h"
#import "PREditingColorSlider.h"
#import "PREditingColorVariationStore.h"

@interface PREditingColorPickerComponentViewController : UIViewController <PREditingColorItemsViewControllerDelegate>



@property (retain, nonatomic) UIScrollView *colorsScrollView; // ivar: _colorsScrollView
@property (retain, nonatomic) PREditorColorPickerConfiguration *configuration; // ivar: _configuration
@property (nonatomic) CGFloat contentsLuminance; // ivar: _contentsLuminance
@property (weak, nonatomic) NSObject<PREditingColorPickerComponentViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL forFontPicker; // ivar: _forFontPicker
@property (retain, nonatomic) PREditingColorItemsViewController *itemsViewController; // ivar: _itemsViewController
@property (retain, nonatomic) UIColor *selectedColor; // ivar: _selectedColor
@property (nonatomic) BOOL showsHeader; // ivar: _showsHeader
@property (retain, nonatomic) PREditingColorSlider *sliderView; // ivar: _sliderView
@property (retain, nonatomic) PREditingColorVariationStore *variationStore; // ivar: _variationStore
@property (retain, nonatomic) UIStackView *verticalStack; // ivar: _verticalStack


-(CGFloat)estimatedHeight;
-(id)init;
-(id)initWithConfiguration:(id)arg0 variationStore:(id)arg1 ;
-(void)colorItemsViewController:(id)arg0 didSelectColorItem:(id)arg1 ;
-(void)colorItemsViewControllerDidUpdateEstimatedSize:(id)arg0 ;
-(void)colorSliderDidUpdateColor:(id)arg0 ;
-(void)didSelectColorItem:(id)arg0 ;
-(void)loadItemsViewControllerIfNeeded;
-(void)loadView;
-(void)updateForColorWellSelectedItem:(id)arg0 ;
-(void)updateSliderVisibility:(BOOL)arg0 ;


@end


#endif