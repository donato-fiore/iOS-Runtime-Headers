// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUITABLEVIEWCELL_H
#define SEARCHUITABLEVIEWCELL_H

@class UITableViewCell, NSString, UIView, NSArray;
@protocol SearchUIKeyboardableNavigationProtocol, SearchUIFeedbackDelegateInternal;


#import "SearchUIDragSource.h"
#import "SearchUIRowModel.h"

@interface SearchUITableViewCell : UITableViewCell <SearchUIKeyboardableNavigationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegateInternal> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SearchUIDragSource *dragSource; // ivar: _dragSource
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isExpanded; // ivar: _isExpanded
@property (readonly, nonatomic) UIView *leadingTextView; // ivar: _leadingTextView
@property (readonly, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (retain, nonatomic) SearchUIRowModel *rowModel; // ivar: _rowModel
@property (nonatomic) int sfSeparatorStyle; // ivar: _sfSeparatorStyle
@property (readonly) BOOL shouldDrawBackgroundColor;
@property (retain, nonatomic) UIView *sizingContainer; // ivar: _sizingContainer
@property (readonly) Class superclass;
@property (readonly) NSArray *visibleResults;


+(BOOL)canCellExpandWithResults:(id)arg0 ;
+(CGFloat)distanceToTopOfAppIconsForMultiResultCell;
+(id)cellViewForRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
+(id)reuseIdentifierForResult:(id)arg0 ;
-(BOOL)canSetupKeyboardHandler;
-(BOOL)isExpandable;
-(BOOL)navigateKeyboardDown;
-(BOOL)navigateKeyboardLeft;
-(BOOL)navigateKeyboardRight;
-(BOOL)navigateKeyboardUp;
-(BOOL)supportsRecycling;
-(id)init;
-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)keyboardCardSectionForFocus;
-(id)keyboardResultForFocus;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setAnimating:(BOOL)arg0 clippingAdjacentCells:(BOOL)arg1 ;
-(void)_setSeparatorBackdropOverlayBlendMode:(NSInteger)arg0 ;
-(void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg0 ;
-(void)_updateHighlightColorsForView:(id)arg0 highlighted:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)removeKeyboardHandler;
-(void)returnKeyPressed;
-(void)setupKeyboardHandler;
-(void)tabKeyPressed;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateExpanded:(BOOL)arg0 ;
-(void)updateWithResult:(id)arg0 ;
-(void)updateWithResults:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif