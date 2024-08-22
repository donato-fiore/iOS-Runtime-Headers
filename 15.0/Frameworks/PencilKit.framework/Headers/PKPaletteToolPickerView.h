// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTETOOLPICKERVIEW_H
#define PKPALETTETOOLPICKERVIEW_H

@class UIView, NSMutableArray, NSString, NSHashTable, UIScrollView, UIStackView, NSArray;
@protocol UIPopoverPresentationControllerDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPalettePopoverUpdating, PKPaletteViewSizeScaling, PKPaletteToolPickerViewDelegate, PKDrawingPaletteStatistics;


#import "PKPaletteToolView.h"
#import "PKPaletteToolPickerOverlayView.h"
#import "PKPaletteAttributeViewController.h"

@interface PKPaletteToolPickerView : UIView <UIPopoverPresentationControllerDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPalettePopoverUpdating, PKPaletteViewSizeScaling>

 {
    NSMutableArray *_mutableToolViews;
}


@property (readonly, nonatomic) NSUInteger _selectedToolsCount;
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteToolPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<PKDrawingPaletteStatistics> *drawingPaletteStatistics; // ivar: _drawingPaletteStatistics
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger indexOfSelectedTool;
@property (nonatomic) CGFloat interItemToolsSpacing; // ivar: _interItemToolsSpacing
@property (retain, nonatomic) PKPaletteToolView *lastSelectedToolView; // ivar: _lastSelectedToolView
@property (retain, nonatomic) PKPaletteToolPickerOverlayView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) NSHashTable *presentedViewControllers; // ivar: _presentedViewControllers
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) PKPaletteToolView *selectedToolView; // ivar: _selectedToolView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaletteAttributeViewController *toolAttributesPopover; // ivar: _toolAttributesPopover
@property (readonly, nonatomic) NSArray *toolViews;
@property (retain, nonatomic) NSMutableArray *toolsHeightConstraints; // ivar: _toolsHeightConstraints
@property (retain, nonatomic) NSMutableArray *toolsWidthCompactConstraints; // ivar: _toolsWidthCompactConstraints
@property (retain, nonatomic) NSMutableArray *toolsWidthConstraints; // ivar: _toolsWidthConstraints


-(BOOL)_canPresentToolAttributesPopover;
-(BOOL)_canSelectToolView:(id)arg0 ;
-(BOOL)_isAllToolsColorUserInterfaceStyleEqualsTo:(NSInteger)arg0 ;
-(BOOL)_isAllToolsEdgeLocationEqualsTo:(NSUInteger)arg0 ;
-(BOOL)_useCompactSize;
-(BOOL)canToggleSelectedToolAndEraser;
-(BOOL)canToggleSelectedToolAndLastSelectedTool;
-(BOOL)hasToolViewWithIdentifier:(id)arg0 ;
-(CGFloat)_widthForToolAtIndex:(NSUInteger)arg0 isCompactSize:(BOOL)arg1 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)_eraserToolView;
-(id)_firstInkingTool;
-(id)init;
-(id)initWithToolViews:(id)arg0 ;
-(id)sourceViewForPopoverPresentationForTool:(id)arg0 ;
-(struct CGRect )sourceRectForPopoverPresentationForTool:(id)arg0 ;
-(void)_installOverlayViewInView:(id)arg0 ;
-(void)_installScrollViewInView:(id)arg0 ;
-(void)_installStackViewInScrollView:(id)arg0 ;
-(void)_showToolAttributesPopover;
-(void)_toolTapGestureRecognizer:(id)arg0 ;
-(void)_unselectAllToolsAndDo:(id)arg0 ;
-(void)_updateUI;
-(void)addToolView:(id)arg0 ;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)insertToolView:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)reloadToolViewsWithDataSource:(id)arg0 ;
-(void)removeToolView:(id)arg0 ;
-(void)removeToolViewsWithIdentifier:(id)arg0 ;
-(void)selectToolViewAtIndex:(NSUInteger)arg0 ;
-(void)toggleSelectedToolAndEraser;
-(void)toggleSelectedToolAndLastSelectedTool;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePopoverUI;


@end


#endif