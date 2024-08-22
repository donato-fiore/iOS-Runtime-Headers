// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUICONTAINERSTACKVIEW_H
#define NUICONTAINERSTACKVIEW_H

@class NSString;
@protocol _NUIGridArrangementContainer;


#import "NUIContainerView.h"

@interface NUIContainerStackView : NUIContainerView <_NUIGridArrangementContainer>

 {
    _NUIGridArrangement _arrangement;
    ? _visibleCount;
    map<UIView *, double, std::less<UIView *>, std::allocator<std::pair<UIView *const, double>>> _customSpacings;
    ? _stackViewFlags;
}


@property (nonatomic) NSInteger alignment;
@property (nonatomic) NSInteger axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger distribution;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (readonly) Class superclass;


+(id)containerStackViewWithAxis:(NSInteger)arg0 arrangedSubviews:(id)arg1 ;
+(id)horizontalContainerStackViewWithArrangedSubviews:(id)arg0 ;
+(id)verticalContainerStackViewWithArrangedSubviews:(id)arg0 ;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg0 ;
-(BOOL)setNeedsInvalidation:(NSInteger)arg0 ;
-(CGFloat)customSpacingAfterView:(id)arg0 ;
-(id)arrangedDescription;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)debugDictionary;
-(id)initWithArrangedSubviews:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )calculateArrangedSizeFittingSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)didRemoveArrangedSubview:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)layoutArrangedSubviewsInBounds:(struct CGRect )arg0 ;
-(void)populateGridArrangementCells:(*void)arg0 ;
-(void)populateGridArrangementDimension:(*void)arg0 withCells:(*void)arg1 axis:(NSInteger)arg2 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg0 ;
-(void)setCustomSpacing:(CGFloat)arg0 afterView:(id)arg1 ;


@end


#endif