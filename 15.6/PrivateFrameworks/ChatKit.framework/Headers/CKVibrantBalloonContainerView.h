// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVIBRANTBALLOONCONTAINERVIEW_H
#define CKVIBRANTBALLOONCONTAINERVIEW_H

@class UIView, CKBalloonView<CKBalloonVibrancy>, UIVisualEffectView;



@interface CKVibrantBalloonContainerView : UIView {
    CKBalloonView<CKBalloonVibrancy> *_vibrantBalloonView;
    UIVisualEffectView *_blurView;
    UIVisualEffectView *_vibrantView;
}




-(id)initWithAudioBallonView:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)initWithTextBalloonView:(id)arg0 frame:(struct CGRect )arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonInitWithVibrantBalloon:(id)arg0 ;
-(void)_setupVisualEffectViews;
-(void)layoutSubviews;
-(void)setBlurEffect:(id)arg0 ;
-(void)setColorOverlay:(id)arg0 ;
-(void)setVibrancyEffect:(id)arg0 ;


@end


#endif