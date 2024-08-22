// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUTILITYSMALLRINGCOMPLICATIONVIEW_H
#define NTKUTILITYSMALLRINGCOMPLICATIONVIEW_H

@class CLKUIColoringImageView;


#import "NTKUtilityCircularComplicationView.h"

@interface NTKUtilitySmallRingComplicationView : NTKUtilityCircularComplicationView {
    BOOL _didDrawOnce;
}


@property (nonatomic) float fillFraction; // ivar: _fillFraction
@property (retain, nonatomic) CLKUIColoringImageView *fillFractionRing; // ivar: _fillFractionRing


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)ringColor;
-(void)_applyForegroundAlpha;
-(void)_enumerateColoringViewsWithBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateRingWithRingDescription:(id)arg0 ;
-(void)updateRingWithRingDescription:(id)arg0 backgroundRingAlpha:(CGFloat)arg1 ;


@end


#endif