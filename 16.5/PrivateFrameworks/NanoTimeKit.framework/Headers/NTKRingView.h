// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKRINGVIEW_H
#define NTKRINGVIEW_H

@class CLKUIColoringView;
@protocol CLKMonochromeFilterProvider;



@interface NTKRingView : CLKUIColoringView

@property (nonatomic) CGFloat fillFraction; // ivar: _fillFraction
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (nonatomic) BOOL hidesOverlapShadow; // ivar: _hidesOverlapShadow
@property (readonly, nonatomic) CGFloat overlapWidth; // ivar: _overlapWidth
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) CGFloat ringWidth; // ivar: _ringWidth
@property (nonatomic) BOOL shouldUseMonochromeAccentColor; // ivar: _shouldUseMonochromeAccentColor


-(NSInteger)filterStyle;
-(id)initWithFrame:(struct CGRect )arg0 radius:(CGFloat)arg1 ringWidth:(CGFloat)arg2 overlapWidth:(CGFloat)arg3 ;
-(void)_drawBackgroundRings;
-(void)_drawRingWithRadius:(CGFloat)arg0 fillFraction:(CGFloat)arg1 alpha:(CGFloat)arg2 hidesOverlapShadow:(BOOL)arg3 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif