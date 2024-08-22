// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKWELLNESSCIRCULARSMALLCOMPLICATIONVIEW_H
#define NTKWELLNESSCIRCULARSMALLCOMPLICATIONVIEW_H

@class NSMutableArray;


#import "NTKCircularComplicationView.h"
#import "NTKRingsAndDotsView.h"

@interface NTKWellnessCircularSmallComplicationView : NTKCircularComplicationView {
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(CGFloat)_overlapStrokeWidth;
-(CGFloat)_ringDiameter;
-(CGFloat)_ringGapWidth;
-(CGFloat)_ringStrokeWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_setLayoutEmptyRings;
-(void)_updateColors;
-(void)_updateForTemplateChange;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg0 ;
-(void)setSecondaryForegroundColor:(id)arg0 ;
-(void)setUsesMultiColor:(BOOL)arg0 ;


@end


#endif