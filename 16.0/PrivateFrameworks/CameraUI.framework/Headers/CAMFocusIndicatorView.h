// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMFOCUSINDICATORVIEW_H
#define CAMFOCUSINDICATORVIEW_H

@class UIView;
@protocol CAMFocusIndicatorViewDelegate;


#import "CAMExposureBiasSlider.h"
#import "CAMFocusIndicatorRectView.h"

@interface CAMFocusIndicatorView : UIView

@property (nonatomic) int _exposureBiasSide; // ivar: __exposureBiasSide
@property (readonly, nonatomic) CAMExposureBiasSlider *_exposureBiasSlider; // ivar: __exposureBiasSlider
@property (readonly, nonatomic) CAMFocusIndicatorRectView *_rectView; // ivar: __rectView
@property (weak, nonatomic) NSObject<CAMFocusIndicatorViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) float exposureBiasMaximum; // ivar: _exposureBiasMaximum
@property (nonatomic) float exposureBiasMinimum; // ivar: _exposureBiasMinimum
@property (nonatomic) float exposureBiasValue; // ivar: _exposureBiasValue
@property (nonatomic, getter=isInactive) BOOL inactive; // ivar: _inactive
@property (nonatomic, getter=isPulsing) BOOL pulsing;
@property (nonatomic) BOOL showExposureBias; // ivar: _showExposureBias
@property (nonatomic) NSInteger style; // ivar: _style


-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGRect )boundsIncludingExposureBiasSlider;
-(struct CGSize )intrinsicContentSize;
-(void)_commonCAMFocusIndicatorViewInitialization;
-(void)_createExposureBiasSlider;
-(void)_createRectViewAndUpdateBounds;
-(void)_layoutExposureBiasSlider;
-(void)_layoutRectView:(id)arg0 ;
-(void)_updateTintColor;
-(void)layoutSubviews;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setExposureBiasSide:(int)arg0 animated:(BOOL)arg1 ;
-(void)startScalingWithExpansionWidth:(CGFloat)arg0 duration:(CGFloat)arg1 repeatCount:(NSUInteger)arg2 ;


@end


#endif