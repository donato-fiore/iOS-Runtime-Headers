// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVSTACKWRAPPINGVIEW_H
#define _TVSTACKWRAPPINGVIEW_H

@class UIView, UIImageView, UIImage, NSArray, UICollectionView;


#import "_TVStackBackdropView.h"
#import "_TVStackBackdropMaskingView.h"

@interface _TVStackWrappingView : UIView {
    UIImageView *_backgroundImageView;
    _TVStackBackdropView *_backdropView;
    _TVStackBackdropMaskingView *_maskedBackdropView;
}


@property (nonatomic) NSInteger backdropBlurEffectStyle; // ivar: _backdropBlurEffectStyle
@property (retain, nonatomic) UIImage *backdropImage; // ivar: _backdropImage
@property (nonatomic) CGFloat backdropInitialPeek; // ivar: _backdropInitialPeek
@property (nonatomic) CGFloat backdropMaskFactor; // ivar: _backdropMaskFactor
@property (nonatomic) CGFloat backdropPeekGradient; // ivar: _backdropPeekGradient
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (copy, nonatomic) NSArray *headerSupplementaryViews; // ivar: _headerSupplementaryViews
@property (nonatomic) BOOL shouldAdjustForTabBarSafeAreaInsets; // ivar: _shouldAdjustForTabBarSafeAreaInsets
@property (retain, nonatomic) UICollectionView *stackView; // ivar: _stackView
@property (readonly, copy, nonatomic) NSArray *supplementaryCellLayoutAttributes; // ivar: _supplementaryCellLayoutAttributes
@property (nonatomic) BOOL usesBackdropImage; // ivar: _usesBackdropImage
@property (nonatomic) BOOL usesBackgroundImage; // ivar: _usesBackgroundImage


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(struct UIEdgeInsets )arg0 sectionIndex:(NSInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif