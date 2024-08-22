// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSEMANTICSTYLEPICKER_H
#define CAMSEMANTICSTYLEPICKER_H

@class UIView, UIScrollView, NSMutableArray, NSString, UIColor, UIPageControl;
@protocol UIScrollViewDelegate, CAMSemanticStylePickerDelegate;



@interface CAMSemanticStylePicker : UIView <UIScrollViewDelegate>



@property (nonatomic, setter=_setExpandedAnimationCounter:) NSUInteger _expansionAnimationCounter; // ivar: __expansionAnimationCounter
@property (nonatomic, setter=_setNeedsUpdateContentOffset:) BOOL _needsUpdateContentOffset; // ivar: __needsUpdateContentOffset
@property (readonly, nonatomic, getter=_isScrollActive) BOOL _scrollActive;
@property (readonly, nonatomic) UIScrollView *_scrollView; // ivar: __scrollView
@property (nonatomic, setter=_setSelectedTileExpanded:) BOOL _selectedTileExpanded; // ivar: __selectedTileExpanded
@property (readonly, nonatomic) NSMutableArray *_spacerViews; // ivar: __spacerViews
@property (readonly, nonatomic) NSMutableArray *_tileViews; // ivar: __tileViews
@property (nonatomic) CGFloat contentBottomMargin; // ivar: _contentBottomMargin
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMSemanticStylePickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger material; // ivar: _material
@property (nonatomic) UIColor *materialColor; // ivar: _materialColor
@property (nonatomic) NSUInteger numberOfStyles; // ivar: _numberOfStyles
@property (readonly, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (nonatomic) NSUInteger selectedStyleIndex; // ivar: _selectedStyleIndex
@property (readonly) Class superclass;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_contentOffsetForIndex:(NSUInteger)arg0 ;
-(struct CGRect )styleRectAtIndex:(NSUInteger)arg0 ;
-(void)_updateMaterialOpacityWithDuration:(CGFloat)arg0 ;
-(void)_updateScrollViewContentOffset;
-(void)_updateTileAlphas;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif