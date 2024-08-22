// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDIGITALTIMELABEL_H
#define NTKDIGITALTIMELABEL_H

@class CLKUITimeLabel, UIColor, NSString;
@protocol NTKColoringView, NTKTimeView;


#import "NTKDigitalTimeLabelStyle.h"

@interface NTKDigitalTimeLabel : CLKUITimeLabel <NTKColoringView, NTKTimeView>

 {
    UIColor *_shadowColor;
}


@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (copy, nonatomic) NTKDigitalTimeLabelStyle *style;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility; // ivar: _usesLegibility


-(id)_labelColorFromFaceColorPalette:(id)arg0 device:(id)arg1 ;
-(id)_newUnderlyingLabel:(BOOL)arg0 ;
-(id)initWithTimeLabelOptions:(NSUInteger)arg0 forDevice:(id)arg1 ;
// -(void)animateToStyle:(id)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 additionalAnimation:(id)arg3 completion:(unk)arg4  ;
-(void)applyFaceColor:(NSUInteger)arg0 device:(id)arg1 ;
-(void)applyFaceColorPalette:(id)arg0 device:(id)arg1 ;
-(void)applyFaceFromColor:(NSUInteger)arg0 toColor:(NSUInteger)arg1 fraction:(float)arg2 device:(id)arg3 ;
-(void)applyFaceFromColorPalette:(id)arg0 toColorPalette:(id)arg1 fraction:(float)arg2 device:(id)arg3 ;
-(void)layoutSubviews;
-(void)setFrameUsingCurrentStyle;
-(void)setOverrideDate:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setShadowColor:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;
-(void)setTimeOffset:(CGFloat)arg0 ;


@end


#endif