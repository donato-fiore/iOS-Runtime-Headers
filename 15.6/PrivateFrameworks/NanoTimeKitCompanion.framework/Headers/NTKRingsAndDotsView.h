// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRINGSANDDOTSVIEW_H
#define NTKRINGSANDDOTSVIEW_H

@class UIView, UIColor, NSString, NSArray, NSMutableArray;
@protocol NTKColoringView;



@interface NTKRingsAndDotsView : UIView <NTKColoringView>



@property (nonatomic) CGFloat appearanceAnimationProgress; // ivar: _appearanceAnimationProgress
@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat diameter; // ivar: _diameter
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesOverlapShadow; // ivar: _hidesOverlapShadow
@property (retain, nonatomic) NSArray *overlapArcArray; // ivar: _overlapArcArray
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (copy, nonatomic) NSArray *ringColors; // ivar: _ringColors
@property (nonatomic) CGFloat ringGapWidth; // ivar: _ringGapWidth
@property (retain, nonatomic) NSArray *ringViews; // ivar: _ringViews
@property (nonatomic) CGFloat ringWidth; // ivar: _ringWidth
@property (copy, nonatomic) NSMutableArray *ringsFillFractions; // ivar: _ringsFillFractions
@property (retain, nonatomic) UIColor *secondaryForegroundColor; // ivar: _secondaryForegroundColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility;


+(id)emptyFillFractions;
-(CGFloat)radiusForRingAtIndex:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 diameter:(CGFloat)arg1 ringWidth:(CGFloat)arg2 ringGapWidth:(CGFloat)arg3 overlapStrokeWidth:(CGFloat)arg4 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setFilterProvider:(id)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif