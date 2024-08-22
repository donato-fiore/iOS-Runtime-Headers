// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTETOOLPICKERVIEW_H
#define PKPALETTETOOLPICKERVIEW_H

@class UIView, NSMutableArray, NSLayoutConstraint, NSString, NSHashTable, UIScrollView, UIStackView, NSArray;
@protocol UIPopoverPresentationControllerDelegate, UIScrollViewDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPalettePopoverUpdating, PKPaletteViewSizeScaling, PKPaletteToolPickerViewDelegate, PKDrawingPaletteStatistics;


#import "PKPaletteToolPickerClippingView.h"
#import "PKPaletteToolView.h"
#import "PKScrollViewDelegateEventsHandler.h"
#import "PKPaletteAttributeViewController.h"
#import "PKPaletteTooltipPresentationHandle.h"

@interface PKPaletteToolPickerView : UIView <UIPopoverPresentationControllerDelegate, UIScrollViewDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPalettePopoverUpdating, PKPaletteViewSizeScaling>

 {
    NSMutableArray *_mutableToolViews;
}


@property (readonly, nonatomic) NSUInteger _selectedToolsCount;
@property (retain, nonatomic) PKPaletteToolPickerClippingView *clippingView; // ivar: _clippingView
@property (retain, nonatomic) NSLayoutConstraint *clippingViewBottomConstraint; // ivar: _clippingViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *clippingViewLeadingConstraint; // ivar: _clippingViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *clippingViewTopConstraint; // ivar: _clippingViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *clippingViewTrailingConstraint; // ivar: _clippingViewTrailingConstraint
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteToolPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<PKDrawingPaletteStatistics> *drawingPaletteStatistics; // ivar: _drawingPaletteStatistics
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger indexOfSelectedTool;
@property (nonatomic) CGFloat interItemToolsSpacing; // ivar: _interItemToolsSpacing
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *lastScrollViewDelegateBeforeScrollingToolToVisible; // ivar: _lastScrollViewDelegateBeforeScrollingToolToVisible
@property (retain, nonatomic) PKPaletteToolView *lastSelectedToolView; // ivar: _lastSelectedToolView
@property (retain, nonatomic) NSHashTable *presentedViewControllers; // ivar: _presentedViewControllers
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint; // ivar: _scrollViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *scrollViewCenterXConstraint; // ivar: _scrollViewCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *scrollViewCenterYConstraint; // ivar: _scrollViewCenterYConstraint
@property (retain, nonatomic) PKScrollViewDelegateEventsHandler *scrollViewDelegateEventsHandler; // ivar: _scrollViewDelegateEventsHandler
@property (retain, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint; // ivar: _scrollViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *scrollViewLeadingConstraint; // ivar: _scrollViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *scrollViewTopConstraint; // ivar: _scrollViewTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *scrollViewTrailingConstraint; // ivar: _scrollViewTrailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *scrollViewWidthConstraint; // ivar: _scrollViewWidthConstraint
@property (nonatomic, getter=isScrollingEnabled) BOOL scrollingEnabled; // ivar: _scrollingEnabled
@property (readonly, nonatomic) PKPaletteToolView *selectedToolView; // ivar: _selectedToolView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSLayoutConstraint *stackViewCompactHeightConstraint; // ivar: _stackViewCompactHeightConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaletteAttributeViewController *toolAttributesPopover; // ivar: _toolAttributesPopover
@property (readonly, nonatomic) NSArray *toolViews;
@property (retain, nonatomic) NSMutableArray *toolsHeightConstraints; // ivar: _toolsHeightConstraints
@property (retain, nonatomic) NSMutableArray *toolsWidthCompactConstraints; // ivar: _toolsWidthCompactConstraints
@property (retain, nonatomic) NSMutableArray *toolsWidthConstraints; // ivar: _toolsWidthConstraints
@property (retain, nonatomic) PKPaletteTooltipPresentationHandle *tooltipPresentationHandle; // ivar: _tooltipPresentationHandle
@property (nonatomic) BOOL unselectedToolsVisible; // ivar: _unselectedToolsVisible


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
-(void)_addToolView:(id)arg0 updateUI:(BOOL)arg1 ;
-(void)_insertToolView:(id)arg0 atIndex:(NSUInteger)arg1 updateUI:(BOOL)arg2 ;
-(void)_installScrollViewInView:(id)arg0 ;
-(void)_installStackViewInScrollView:(id)arg0 ;
-(void)_showToolAttributesPopoverFromRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)_toolTapGestureRecognizer:(id)arg0 ;
-(void)_updateUI;
-(void)addToolView:(id)arg0 ;
-(void)dealloc;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)insertToolView:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reloadToolViewsWithDataSource:(id)arg0 ;
-(void)removeToolView:(id)arg0 ;
-(void)removeToolViewsWithIdentifier:(id)arg0 ;
-(void)scrollSelectedToolViewToVisibleAnimated:(BOOL)arg0 ;
-(void)selectToolViewAtIndex:(NSUInteger)arg0 ;
-(void)toggleSelectedToolAndEraserAnimated:(BOOL)arg0 ;
-(void)toggleSelectedToolAndLastSelectedToolAnimated:(BOOL)arg0 ;
-(void)toggleSelectedToolAttributesPopoverFromRect:(struct CGRect )arg0 inView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateClippingViewEdgesVisibility;
-(void)updatePopoverUI;


@end


#endif