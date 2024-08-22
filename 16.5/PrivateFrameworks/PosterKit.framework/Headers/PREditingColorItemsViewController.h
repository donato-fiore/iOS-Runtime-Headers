// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITINGCOLORITEMSVIEWCONTROLLER_H
#define PREDITINGCOLORITEMSVIEWCONTROLLER_H

@class UIViewController, NSArray, UIStackView, NSLayoutConstraint;
@protocol PREditingColorItemsDataSource, PREditingColorItemsViewControllerDelegate;


#import "PREditingColorWell.h"
#import "PREditingColorWellView.h"
#import "PREditorColorPickerConfiguration.h"
#import "PREditingColorItem.h"
#import "PREditingColorItemView.h"
#import "PREditingColorVariationStore.h"

@interface PREditingColorItemsViewController : UIViewController

@property (retain, nonatomic) NSArray *allItemViews; // ivar: _allItemViews
@property (retain, nonatomic) NSArray *allViews; // ivar: _allViews
@property (retain, nonatomic) PREditingColorWell *colorWell; // ivar: _colorWell
@property (retain, nonatomic) PREditingColorWellView *colorWellView; // ivar: _colorWellView
@property (readonly, nonatomic) PREditorColorPickerConfiguration *configuration; // ivar: _configuration
@property (nonatomic) CGFloat configuredViewWidth; // ivar: _configuredViewWidth
@property (nonatomic) CGFloat contentsLuminance; // ivar: _contentsLuminance
@property (retain, nonatomic) NSObject<PREditingColorItemsDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<PREditingColorItemsViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *horizontalStackViews; // ivar: _horizontalStackViews
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (retain, nonatomic) PREditingColorItem *selectedColorItem; // ivar: _selectedColorItem
@property (retain, nonatomic) PREditingColorItemView *selectedColorItemView; // ivar: _selectedColorItemView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint; // ivar: _stackViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint; // ivar: _stackViewTrailingConstraint
@property (retain, nonatomic) PREditingColorVariationStore *variationStore; // ivar: _variationStore


-(CGFloat)estimatedHeight;
-(id)initWithDataSource:(id)arg0 configuration:(id)arg1 variationStore:(id)arg2 ;
-(id)selectedColorItemForColor:(id)arg0 fromDataSource:(id)arg1 withVariationStore:(id)arg2 contextIdentifier:(id)arg3 isDataLayerPicker:(BOOL)arg4 ;
-(id)selectedColorItemForColor:(id)arg0 fromVariationStore:(id)arg1 inDataSource:(id)arg2 contextIdentifier:(id)arg3 isDataLayerPicker:(BOOL)arg4 ;
-(void)colorWellDidUpdateColor:(id)arg0 ;
-(void)deselectSelectedColor;
-(void)didSelectColorItem:(id)arg0 ;
-(void)layoutWithItemViews:(id)arg0 ;
-(void)setupItemViews;
-(void)sliderDidChangeForColorItem:(id)arg0 ;
-(void)updateLayoutForCurrentSize;
-(void)updateVibrantMaterialItemForLuminance;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif