// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMEXPOSUREBIASSTATUSINDICATOR_H
#define CAMEXPOSUREBIASSTATUSINDICATOR_H

@class UILabel, UIView;


#import "CAMControlStatusIndicator.h"
#import "CAMExposureBiasStatusIndicatorTickMarksView.h"

@interface CAMExposureBiasStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) UILabel *_exposureLabel; // ivar: __exposureLabel
@property (readonly, nonatomic) UIView *_highlightClippingTick; // ivar: __highlightClippingTick
@property (readonly, nonatomic) UIView *_shadowClippingTick; // ivar: __shadowClippingTick
@property (readonly, nonatomic) CAMExposureBiasStatusIndicatorTickMarksView *_ticksView; // ivar: __ticksView
@property (nonatomic) CGFloat exposureBiasValue; // ivar: _exposureBiasValue
@property (nonatomic, getter=isExposureValueVisible) BOOL exposureValueVisible; // ivar: _exposureValueVisible
@property (nonatomic) CGFloat highlightClipping; // ivar: _highlightClipping
@property (nonatomic) CGFloat shadowClipping; // ivar: _shadowClipping


-(BOOL)shouldUseOutline;
-(BOOL)supportsOrientations;
-(CGFloat)_clippingTickAlphaForClipping:(CGFloat)arg0 ;
-(CGFloat)_horizontalExposureLabelOffset;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;
-(id)init;
-(struct CGRect )_clippingTickFrameForClipping:(CGFloat)arg0 leftAligned:(BOOL)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_layoutHighlightClippingTick;
-(void)_layoutShadowClippingTick;
-(void)_updateExposureLabel;
-(void)_updateHighlightClippingTickAlpha;
-(void)_updateShadowClippingTickAlpha;
-(void)_updateTicks;
-(void)layoutSubviews;


@end


#endif