// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCESSORYDEVICEVIEW_H
#define PKACCESSORYDEVICEVIEW_H

@class UIView, PKGlyphView, UILabel, PKAccessoryDevice, PKPass, UIColor;
@protocol OS_dispatch_source, PKAccessoryDeviceViewDelegate;



@interface PKAccessoryDeviceView : UIView {
    PKGlyphView *_glyph;
    UIView *_imageBackgroundView;
    UILabel *_label;
    PKAccessoryDevice *_accessory;
    PKPass *_pass;
    UIView *_parentView;
    UIColor *_strokeColor;
    UIColor *_backgroundColor;
    CGFloat _animationDelay;
    NSInteger _state;
    NSObject<OS_dispatch_source> *_timeOutBlockTimer;
}


@property (nonatomic) CGRect cutoutFrame; // ivar: _cutoutFrame
@property (weak, nonatomic) NSObject<PKAccessoryDeviceViewDelegate> *delegate; // ivar: _delegate


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithPass:(id)arg0 accessory:(id)arg1 cutoutFrame:(struct CGRect )arg2 parentView:(id)arg3 ;
-(id)initWithState:(NSInteger)arg0 accessory:(id)arg1 cutoutFrame:(struct CGRect )arg2 parentView:(id)arg3 ;
-(struct CGRect )_springBoardCutoutRect;
-(void)_layoutFailureState;
-(void)_layoutProcessingState;
-(void)_layoutSuccessState;
-(void)_layoutSuccessWithUserInterventionState;
-(void)_layoutTryAgainState;
-(void)_setColors;
-(void)_showWalletWithMessage:(id)arg0 ;
-(void)changeToState:(NSInteger)arg0 ;
-(void)dismissViewImmediatelyWithCompletion:(id)arg0 ;
-(void)dismissViewWithCompletion:(id)arg0 ;
-(void)layoutSubviews;
-(void)presentOnParentView;


@end


#endif