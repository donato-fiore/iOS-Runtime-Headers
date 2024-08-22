// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVROUNDBUTTON_H
#define _TVROUNDBUTTON_H

@class CALayer;


#import "TVButton.h"

@interface _TVRoundButton : TVButton {
    CALayer *_imageMask;
    id *_updateFloatingViewFocusStateBlock;
}


@property (nonatomic) BOOL shouldPunchThroughImage; // ivar: _shouldPunchThroughImage


+(id)_buttonContentWithFrame:(struct CGRect )arg0 blurEffectStyle:(NSInteger)arg1 blurEnabled:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 blurEffectStyle:(NSInteger)arg1 blurEnabled:(BOOL)arg2 ;
-(void)_imageViewDidLoadImage:(id)arg0 ;
-(void)_updateBackgroundColorForState:(NSUInteger)arg0 ;
-(void)_updateFloaingViewFocusState:(BOOL)arg0 coordinator:(id)arg1 ;
-(void)_updateFloatingViewFocusStateIfNeeded;
-(void)_updateFocusStateWithCoordinator:(id)arg0 ;
-(void)_updateImageMask;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setAccessoryView:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)setImageView:(id)arg0 ;
-(void)setTextContentView:(id)arg0 ;


@end


#endif