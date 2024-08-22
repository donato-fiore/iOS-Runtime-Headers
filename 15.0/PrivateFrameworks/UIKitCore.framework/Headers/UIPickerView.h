// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPICKERVIEW_H
#define UIPICKERVIEW_H

@class NSMutableArray, CALayer, NSString;
@protocol UIPickerViewScrollTesting, UIPickerTableViewContainerDelegate, UITableViewDelegate, UITableViewDataSource, NSCoding, UIPickerViewDataSource, UIPickerViewDelegate;


#import "UIView.h"
#import "UIColor.h"
#import "_UIPickerViewTestParameters.h"
#import "UISelectionFeedbackGenerator.h"

@interface UIPickerView : UIView <UIPickerViewScrollTesting, UIPickerTableViewContainerDelegate, UITableViewDelegate, UITableViewDataSource, NSCoding>

 {
    NSMutableArray *_tables;
    UIView *_foregroundView;
    CALayer *_maskGradientLayer;
    UIView *_topLineOrFillView;
    UIView *_bottomLineView;
    ? _pickerViewFlags;
    UIColor *_textColor;
    UIColor *_textShadowColor;
    _UIPickerViewTestParameters *_currentTestParameters;
}


@property (nonatomic, setter=_setMagnifierEnabled:) BOOL _magnifierEnabled; // ivar: _magnifierEnabled
@property (nonatomic, setter=_setSelectionBarIgnoresInset:) BOOL _selectionBarIgnoresInset;
@property (weak, nonatomic) NSObject<UIPickerViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_enabled, setter=_setEnabled:) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property (retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor; // ivar: _magnifierLineColor
@property (nonatomic, getter=_magnifierStyle, setter=_setMagnifierStyle:) NSInteger magnifierStyle; // ivar: _magnifierStyle
@property (readonly, nonatomic) NSInteger numberOfComponents; // ivar: _numberOfComponents
@property (retain, nonatomic, getter=_selectionFeedbackGenerator, setter=_setSelectionFeedbackGenerator:) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator
@property (nonatomic) BOOL showsSelectionIndicator;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property (retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property (getter=_usesDynamicRowHeight, setter=_setUsesDynamicRowHeight:) BOOL usesDynamicRowHeight;


+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(struct CGSize )defaultSizeForCurrentOrientation;
+(struct CGSize )defaultSizeForMainScreenTraits;
+(struct CGSize )defaultSizeForTraits:(id)arg0 ;
+(struct CGSize )sizeForMainScreenTraitsThatFits:(struct CGSize )arg0 ;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 forTraits:(id)arg1 ;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg0 ;
+(void)initialize;
-(BOOL)_canHostViewControllerContentScrollView;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_drawsBackground;
-(BOOL)_forceTextAlignmentCentered;
-(BOOL)_isLandscapeOrientation;
-(BOOL)_needsLayout;
-(BOOL)_soundsEnabled;
-(BOOL)_usesCheckSelection;
-(BOOL)_usesCheckedSelection;
-(BOOL)allowsMultipleSelection;
-(BOOL)isAccessibilityElementByDefault;
-(CGFloat)_delegateRowHeightForComponent:(NSInteger)arg0 ;
-(CGFloat)_delegateWidthForComponent:(NSInteger)arg0 ofCount:(int)arg1 withSizeLeft:(CGFloat)arg2 ;
-(CGFloat)_rowHeightForDefaultFont;
-(CGFloat)_selectionBarSideInset;
-(CGFloat)_tableRowHeight;
-(CGFloat)_wheelShift;
-(CGFloat)scrollAnimationDuration;
-(NSInteger)_delegateNumberOfRowsInComponent:(NSInteger)arg0 ;
-(NSInteger)columnForTableView:(id)arg0 ;
-(NSInteger)numberOfColumns;
-(NSInteger)numberOfRowsInColumn:(NSInteger)arg0 ;
-(NSInteger)numberOfRowsInComponent:(NSInteger)arg0 ;
-(NSInteger)selectedRowInComponent:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_contentView;
-(id)_createColumnWithTableFrame:(struct CGRect )arg0 rowHeight:(CGFloat)arg1 ;
-(id)_createTableWithFrame:(struct CGRect )arg0 forComponent:(NSInteger)arg1 ;
-(id)_delegateAttributedTitleForRow:(NSInteger)arg0 forComponent:(NSInteger)arg1 ;
-(id)_delegateTitleForRow:(NSInteger)arg0 forComponent:(NSInteger)arg1 ;
-(id)_orientationImageSuffix;
-(id)_popoverSuffix;
-(id)_scalarStatisticsForUserValueChangedEvent;
-(id)_selectionBarSuffix;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)imageForPickerPiece:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pickerImageNamePrefix;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableViewForColumn:(NSInteger)arg0 ;
-(id)viewForRow:(NSInteger)arg0 forComponent:(NSInteger)arg1 ;
-(int)selectedRowForColumn:(int)arg0 ;
-(struct CATransform3D )_perspectiveTransform;
-(struct CGRect )_effectiveTableViewFrameForColumn:(NSInteger)arg0 ;
-(struct CGRect )_selectionBarRectForHeight:(CGFloat)arg0 ;
-(struct CGSize )_contentSizeForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )defaultSize;
-(struct CGSize )rowSizeForComponent:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct _NSRange )visibleRowsForColumn:(int)arg0 ;
-(void)_addHighlightRectForRowHeight:(CGFloat)arg0 ;
-(void)_addMagnifierLinesForRowHeight:(CGFloat)arg0 ;
-(void)_completeCurrentTest;
-(void)_iterateOnCurrentTest;
-(void)_noteScrollingFinishedForComponent:(NSInteger)arg0 ;
-(void)_performScrollTest:(id)arg0 withIterations:(NSInteger)arg1 rowsToScroll:(NSInteger)arg2 inComponent:(NSInteger)arg3 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_resetSelectionOfTables;
-(void)_selectRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)_sendCheckedRow:(NSInteger)arg0 inTableView:(id)arg1 checked:(BOOL)arg2 ;
-(void)_sendSelectionChangedForComponent:(NSInteger)arg0 notify:(BOOL)arg1 ;
-(void)_sendSelectionChangedFromTable:(id)arg0 notify:(BOOL)arg1 ;
-(void)_setColumnView:(id)arg0 enabled:(BOOL)arg1 ;
-(void)_setDrawsBackground:(BOOL)arg0 ;
-(void)_setUsesCheckedSelection:(BOOL)arg0 ;
-(void)_updateSelectedRows;
-(void)_updateWithOldSize:(struct CGSize )arg0 newSize:(struct CGSize )arg1 ;
-(void)_willPlayClickSound;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)reload;
-(void)reloadAllComponents;
-(void)reloadAllPickerPieces;
-(void)reloadComponent:(NSInteger)arg0 ;
-(void)reloadData;
-(void)reloadDataForColumn:(int)arg0 ;
-(void)selectRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)selectRow:(int)arg0 inColumn:(int)arg1 animated:(BOOL)arg2 ;
-(void)setAllowsMultipleSelection:(BOOL)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsLayout;
-(void)setSoundsEnabled:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif