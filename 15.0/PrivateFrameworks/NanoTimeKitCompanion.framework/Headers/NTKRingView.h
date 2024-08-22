// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRINGVIEW_H
#define NTKRINGVIEW_H

@protocol CLKMonochromeFilterProvider;


#import "NTKColoringView.h"

@interface NTKRingView : NTKColoringView

@property (nonatomic) CGFloat fillFraction; // ivar: _fillFraction
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) CGFloat ringWidth; // ivar: _ringWidth


-(id)initWithFrame:(struct CGRect )arg0 radius:(CGFloat)arg1 ringWidth:(CGFloat)arg2 ;
-(void)_drawBackgroundRings;
-(void)_drawRingWithRadius:(CGFloat)arg0 fillFraction:(CGFloat)arg1 alpha:(CGFloat)arg2 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif