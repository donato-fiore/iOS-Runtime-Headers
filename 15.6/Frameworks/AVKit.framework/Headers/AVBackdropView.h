// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVBACKDROPVIEW_H
#define AVBACKDROPVIEW_H



#import "AVView.h"

@interface AVBackdropView : AVView



+(id)secondaryGlyphTintColor;
+(id)secondaryMaterialOverlayView;
+(void)applyBaseTrackTintToView:(id)arg0 ;
+(void)applyCompletedTrackTintToView:(id)arg0 ;
+(void)applyGlyphTintColor:(id)arg0 toView:(id)arg1 ;
+(void)applyLoadedTrackTintToView:(id)arg0 ;
+(void)applyPrimaryGlyphTintToView:(id)arg0 ;
+(void)applySecondaryGlyphTintToView:(id)arg0 ;
+(void)configureSlider:(id)arg0 thumbView:(id)arg1 loadedTrackView:(id)arg2 ;
+(void)configureView:(id)arg0 forTintEffectWithColor:(id)arg1 filterType:(id)arg2 ;
+(void)configureView:(id)arg0 withBackgroundFillOfColor:(id)arg1 opacity:(CGFloat)arg2 filter:(id)arg3 ;
+(void)removeAllFiltersFromView:(id)arg0 ;


@end


#endif