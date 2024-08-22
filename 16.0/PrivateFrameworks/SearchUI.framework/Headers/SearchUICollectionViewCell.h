// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUICOLLECTIONVIEWCELL_H
#define SEARCHUICOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, UIView, UIViewController, CALayer, NSArray;
@protocol SearchUIFeedbackDelegateInternal;


#import "SearchUIDragSource.h"
#import "SearchUIRowModel.h"

@interface SearchUICollectionViewCell : UICollectionViewListCell

@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegateInternal> *delegate; // ivar: _delegate
@property (retain, nonatomic) SearchUIDragSource *dragSource; // ivar: _dragSource
@property (retain, nonatomic) UIView *dummyBackgroundView; // ivar: _dummyBackgroundView
@property (readonly) UIViewController *embeddedViewController; // ivar: _embeddedViewController
@property (readonly, nonatomic) UIView *leadingTextView; // ivar: _leadingTextView
@property (readonly, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (nonatomic) CALayer *linkLayer; // ivar: _linkLayer
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (retain, nonatomic) SearchUIRowModel *rowModel; // ivar: _rowModel
@property (nonatomic) NSInteger sectionBackgroundSyle; // ivar: _sectionBackgroundSyle
@property (nonatomic) int sfSeparatorStyle; // ivar: _sfSeparatorStyle
@property (readonly, nonatomic) UIView *sizingView; // ivar: _sizingView
@property (readonly) UIView *viewForForcedFocus; // ivar: _viewForForcedFocus
@property (readonly) NSArray *visibleResults;


-(BOOL)_appliesLayoutAttributesMaskingToReusableView;
-(BOOL)_disableRasterizeInAnimations;
-(BOOL)isExpandable;
-(BOOL)needsInternalFocus;
-(BOOL)setupManualFocus;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(NSInteger)_focusItemDeferralMode;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct NSDirectionalEdgeInsets )_preferredSeparatorInsetsForProposedInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)addLinkLayer:(id)arg0 ;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeManualFocus;
-(void)returnKeyPressed;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateExpanded:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif