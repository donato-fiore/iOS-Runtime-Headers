// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCIRCULARWELLNESSUTILITYCOMPLICATIONVIEW_H
#define NTKCIRCULARWELLNESSUTILITYCOMPLICATIONVIEW_H

@class NSMutableArray;


#import "NTKUtilityCircularComplicationView.h"
#import "NTKRingsAndDotsView.h"

@interface NTKCircularWellnessUtilityComplicationView : NTKUtilityCircularComplicationView {
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
    BOOL _animationsAllowed;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)_ringColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applyForegroundAlpha;
-(void)_layoutContentView;
-(void)_setLayoutEmptyRings;
-(void)_updateForTemplateChange;
-(void)_updateRingColors;
-(void)applyFaceColorPalette:(id)arg0 units:(NSUInteger)arg1 ;
-(void)setForegroundColor:(id)arg0 ;


@end


#endif