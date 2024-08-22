// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSFASTSCROLLINGINDEXBARVIEW_H
#define _UIFOCUSFASTSCROLLINGINDEXBARVIEW_H

@class NSMutableArray, UIFont, NSArray;


#import "UIView.h"

@interface _UIFocusFastScrollingIndexBarView : UIView {
    UIView *_indicatorView;
    CGFloat _preferredIndicatorWidth;
    CGFloat _preferredLabelFontSize;
    NSMutableArray *_backgroundLabels;
    NSMutableArray *_foregroundLabels;
    UIView *_foregroundWrapperView;
    UIView *_foregroundMaskView;
    NSInteger _deflectedIndex;
    CGFloat _deflectionAmount;
    UIFont *_backgroundFont;
    UIFont *_foregroundFont;
    UIView *_emphasisBackgroundView;
}


@property (copy, nonatomic) NSArray *entries; // ivar: _entries
@property (nonatomic) NSInteger focusProminence; // ivar: _focusProminence
@property (nonatomic) CGPoint maximumContentOffset; // ivar: _maximumContentOffset
@property (nonatomic) CGPoint minimumContentOffset; // ivar: _minimumContentOffset
@property (nonatomic) NSInteger style; // ivar: _style


-(BOOL)_shouldUseDarkAppearance;
-(BOOL)canBecomeFocused;
-(CGFloat)_indicatorVerticalPositionForContentOffset:(struct CGPoint )arg0 ;
-(id)_backgroundFont;
-(id)_backgroundLabelTextColor;
-(id)_foregroundFont;
-(id)_indicatorShadowPath;
-(id)_lowerEntryForOffset:(CGFloat)arg0 ;
-(id)_upperEntryForOffset:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createLabels;
-(void)_determinePreferredSizes;
-(void)_showNormalFocusProminence;
-(void)_showReducedFocusProminence;
-(void)_updateColors;
-(void)_updateEmphasisBackgroundColor;
-(void)createEmphasisBackgroundIfNecessary;
-(void)destroyEmphasisBackgroundIfNecessary;
-(void)layoutSubviews;
-(void)resetDeflection:(BOOL)arg0 ;
-(void)setIndexOfDeflectedEntry:(NSInteger)arg0 amount:(CGFloat)arg1 ;
-(void)toggleEmphasisBackgroundVisible:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForContentOffset:(struct CGPoint )arg0 ;


@end


#endif