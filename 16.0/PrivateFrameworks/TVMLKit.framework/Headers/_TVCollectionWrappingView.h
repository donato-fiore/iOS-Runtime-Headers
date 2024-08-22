// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVCOLLECTIONWRAPPINGVIEW_H
#define _TVCOLLECTIONWRAPPINGVIEW_H

@class UIView, CAGradientLayer, NSString, IKColor;
@protocol TVRowHosting;


#import "_TVCollectionView.h"

@interface _TVCollectionWrappingView : UIView <TVRowHosting>

 {
    CGRect _headerFrame;
    UIView *_selectingView;
    CGFloat _showcaseFactor;
    CGRect _footerFrame;
    CAGradientLayer *_gradientLayer;
    ? _collectionViewFlags;
}


@property (nonatomic, getter=isCentered) BOOL centered; // ivar: _centered
@property (nonatomic) NSInteger collectionGradientMask; // ivar: _collectionGradientMask
@property (retain, nonatomic) _TVCollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHeaderAuxiliarySelecting) BOOL headerAuxiliarySelecting; // ivar: _headerAuxiliarySelecting
@property (nonatomic) BOOL headerCanBecomeFocused; // ivar: _headerCanBecomeFocused
@property (nonatomic, getter=isHeaderFloating) BOOL headerFloating; // ivar: _headerFloating
@property (nonatomic, getter=isHeaderFocused) BOOL headerFocused; // ivar: _headerFocused
@property (nonatomic, getter=isHeaderHidden) BOOL headerHidden; // ivar: _headerHidden
@property (nonatomic) CGFloat headerSelectionMargin; // ivar: _headerSelectionMargin
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) IKColor *ikBackgroundColor; // ivar: _ikBackgroundColor
@property (readonly, nonatomic) BOOL shouldBindRowsTogether;
@property (nonatomic) TVShowcaseConfig showcaseConfig; // ivar: _showcaseConfig
@property (readonly) Class superclass;


+(void)gradientConfigForCollection:(id)arg0 gradientMask:(NSInteger)arg1 gradientLengths:(struct UIEdgeInsets *)arg2 gradientInset:(struct UIEdgeInsets *)arg3 gradientBoundsInset:(struct UIEdgeInsets *)arg4 ;
-(CGFloat)_adjustedShowcaseFactor;
-(CGFloat)_showcaseContentScaleForExpectedWidth:(CGFloat)arg0 ;
-(id)_collectionRowMetricsForExpectedWidth:(CGFloat)arg0 firstItemRowIndex:(*NSInteger)arg1 forShowcase:(BOOL)arg2 ;
-(id)_currentFooterView;
-(id)_currentHeaderView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(id)rowMetricsForExpectedWidth:(CGFloat)arg0 firstItemRowIndex:(*NSInteger)arg1 ;
-(id)showcaseRowMetricsForExpectedWidth:(CGFloat)arg0 ;
-(struct CGRect )_adjustedHeaderFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_adjustedPadding;
-(void)_updateGradientLayer;
-(void)_updateSubviews;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)reevaluateFooterFrame;
-(void)reevaluateHeaderFrame;
-(void)setValue:(id)arg0 forTVViewStyle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)tv_setShowcaseFactor:(CGFloat)arg0 ;


@end


#endif