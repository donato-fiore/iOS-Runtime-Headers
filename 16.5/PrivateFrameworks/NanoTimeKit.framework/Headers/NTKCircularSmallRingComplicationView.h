// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCIRCULARSMALLRINGCOMPLICATIONVIEW_H
#define NTKCIRCULARSMALLRINGCOMPLICATIONVIEW_H

@class CLKUIColoringImageView, UIColor;


#import "NTKCircularComplicationView.h"

@interface NTKCircularSmallRingComplicationView : NTKCircularComplicationView {
    CLKUIColoringImageView *_fillFractionRing;
    CGFloat _fillFraction;
    BOOL _didDrawOnce;
    UIColor *_ringOverrideColor;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg0 ;
-(void)setUsesMediumLayout:(BOOL)arg0 ;
-(void)updateRingWithOverrideColor:(id)arg0 ;
-(void)updateRingWithRingDescription:(id)arg0 ;


@end


#endif