// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTACKVIEW_H
#define UISTACKVIEW_H

@class NSMutableArray, NSArray;


#import "UIView.h"
#import "_UIOrderedLayoutArrangement.h"
#import "_UIAlignedLayoutArrangement.h"

@interface UIStackView : UIView {
    NSMutableArray *_mutableLayoutArrangements;
    _UIOrderedLayoutArrangement *_distributionArrangement;
    _UIAlignedLayoutArrangement *_alignmentArrangement;
    BOOL _didRequestTallestBaselineViewForFirst;
    BOOL _didRequestTallestBaselineViewForLast;
    BOOL _viewForFirstBaselineLayoutDidChange;
    BOOL _viewForLastBaselineLayoutDidChange;
}


@property (nonatomic) NSInteger alignment;
@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic) NSInteger axis;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (nonatomic) NSInteger distribution;
@property (nonatomic, getter=isLayoutMarginsRelativeArrangement) BOOL layoutMarginsRelativeArrangement; // ivar: _layoutMarginsRelativeArrangement
@property (nonatomic) CGFloat spacing;


+(Class)layerClass;
-(BOOL)_hasLayoutArrangements;
-(BOOL)_ola_isCandidateForMultilineTextWidthDisambiguationWhenArranged;
-(BOOL)_recordBaselineLoweringInfo;
-(BOOL)_shouldRequestTallestBaselineViewForFirst:(BOOL)arg0 ;
-(CGFloat)_calculatedIntrinsicHeight;
-(CGFloat)_proportionalFillLengthForOrderedArrangement:(id)arg0 relevantParentAxis:(NSInteger)arg1 ;
-(CGFloat)customSpacingAfterView:(id)arg0 ;
-(id)_baselineViewForFirst:(BOOL)arg0 ;
-(id)_mutableLayoutArrangements;
-(id)initWithArrangedSubviews:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )_systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 hasIntentionallyCollapsedHeight:(*BOOL)arg3 ;
-(void)_commonStackViewInitializationWithArrangedSubviews:(id)arg0 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)_vendedBaselineViewDidMoveForFirst:(BOOL)arg0 ;
-(void)_vendedBaselineViewParametersDidChange;
-(void)addArrangedSubview:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertArrangedSubview:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeArrangedSubview:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setCustomSpacing:(CGFloat)arg0 afterView:(id)arg1 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;
-(void)updateConstraints;


@end


#endif