// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSCROLLABLESTACKVIEW_H
#define MUSCROLLABLESTACKVIEW_H

@class UIScrollView, NSLayoutConstraint, NSArray;


#import "MUStackView.h"

@interface MUScrollableStackView : UIScrollView {
    MUStackView *_stackView;
    NSLayoutConstraint *_axisConstraint;
    CGSize _cachedContentSize;
}


@property (nonatomic) NSInteger alignment;
@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic) NSInteger axis;
@property (nonatomic) UIEdgeInsets contentEdgeInsets;
@property (nonatomic) NSInteger distribution;
@property (nonatomic) CGFloat spacing;


-(id)addArrangedCardShadowViewForView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_setupViews;
-(void)_updateForHorizontalAxisIfNeeded;
-(void)_updateOrientationWithNewAxis:(NSInteger)arg0 ;
-(void)addArrangedSubview:(id)arg0 ;
-(void)addArrangedSubview:(id)arg0 withCustomSpacing:(CGFloat)arg1 ;
-(void)addArrangedSubview:(id)arg0 withOrthogonalPadding:(CGFloat)arg1 ;
-(void)insertArrangedSubview:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)layoutSubviews;
-(void)removeArrangedSubview:(id)arg0 ;
-(void)setContentSize:(struct CGSize )arg0 ;
-(void)setCustomSpacing:(CGFloat)arg0 afterView:(id)arg1 ;


@end


#endif