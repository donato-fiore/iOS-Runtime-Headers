// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PNPPENCILVIEW_H
#define PNPPENCILVIEW_H

@class UIView, UIImageView, NSString;
@protocol PNPPencilInteractionEventDestination, PNPDeviceStateConfigurable, PNPPencilViewDelegate;


#import "_PNPPencilMovieView.h"
#import "PNPDeviceState.h"

@interface PNPPencilView : UIView <PNPPencilInteractionEventDestination, PNPDeviceStateConfigurable>

 {
    UIImageView *_pencilImageView;
    _PNPPencilMovieView *_pencilMovieView;
    UIView *_touchIndicatorView;
    BOOL _touchIndicatorShown;
    CGFloat _touchIndicatorPosition;
    NSUInteger _variant;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PNPPencilViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) PNPDeviceState *deviceState; // ivar: _deviceState
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL spinning; // ivar: _spinning
@property (readonly) Class superclass;


+(id)_hardwareImageForVariant:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVariant:(NSUInteger)arg0 ;
-(struct CGAffineTransform )transformForDeviceState:(id)arg0 ;
-(struct CGSize )_edgeAccurateSizeForLength:(CGFloat)arg0 depth:(CGFloat)arg1 deviceState:(id)arg2 ;
-(struct CGSize )comfortableContainingSizeForDeviceState:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )intrinsicSizeForDeviceState:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animateIndicatorToShown:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(void)_prepareMovieView;
-(void)_resetTouchIndicatorPosition;
-(void)cleanupSpinningResources;
-(void)completeRevolutionWithCompletionBlock:(id)arg0 ;
-(void)eventSource:(id)arg0 hadPencilDoubleTapped:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareMovieForSpinningPencil;


@end


#endif